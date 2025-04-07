%{
#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "utils.h"
#include "symtab.h"

static int yylex(void);
static int savedLineNo; 

%}

/* Operation tokens */
%token NOP AJMP LJMP SJMP ACALL LCALL RET RETI JMP CJNE DJNZ JC JNC JZ JNZ JB JBC JNB
%token MOV MOVC MOVX XCH XCHD SWAP PUSH POP 
%token INC DEC ADD ADDC DIV SUBB MUL DA SETB CLR CPL RR RRC RL RLC ORL XRL ANL

/* Register tokens */
%token A B PSW DPTR DPL DPH SP P0 P1 TCON TMOD TLO TL1 TH0 TH1 SCON SBUF PC
%token R0 R1 R2 R3 R4 R5 R6 R7

/* Bit Register tokens */
%token C 

/* Numeric type values tokens */
%token BIN HEX DECIMAL 

/* MISC tokens */
%token ID AB

%% /* Grammar for as51 */

stmt_seq : stmt | stmt_seq stmt;

stmt : acall_stmt | add_stmt | addc_stmt | ajmp_stmt | anl_stmt | cjne_stmt | clr_stmt | cpl_stmt | da_stmt
     | dec_stmt | div_stmt | djnz_stmt | inc_stmt | jb_stmt | jbc_stmt | jc_stmt
     | jmp_stmt | jnb_stmt | jnc_stmt | jnz_stmt | jz_stmt | lcall_stmt | ljmp_stmt
     | mov_stmt | movc_stmt | movx_stmt | mul_stmt | nop_stmt | orl_stmt | pop_stmt
     | push_stmt | ret_stmt | reti_stmt | rl_stmt | rlc_stmt | rr_stmt | rrc_stmt
     | setb_stmt | sjmp_stmt | subb_stmt | swap_stmt | xch_stmt | xchd_stmt | xrl_stmt 
     | label 

acall_stmt : ACALL ID 
              {
                insertSymbol($2, lc);
                add_stmt($1, ACALL_OP, $2, NULL, NULL, ABSOLUTE, 3);
              };

add_stmt : ADD A ',' reg
            {
              add_stmt($1, ADD_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ADD A ',' dir
            {
              add_stmt($1, ADD_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ADD A ',' '@' ind_reg
            {
              add_stmt($1, ADD_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ADD A ',' '#' num
            {
              add_stmt($1, ADD_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            };

addc_stmt : ADDC A ',' reg
            {
              add_stmt($1, ADDC_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ADDC A ',' dir
            {
              add_stmt($1, ADDC_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ADDC A ',' '@' ind_reg
            {
              add_stmt($1, ADDC_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ADDC A ',' '#' num
            {
              add_stmt($1, ADDC_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            };

ajmp_stmt : AJMP ID 
              {
                insertSymbol($2, lc);
                add_stmt($1, AJMP_OP, $2, NULL, NULL, ABSOLUTE, 3);
              };

anl_stmt : ANL A ',' reg
            {
              add_stmt($1, ANL_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ANL A ',' dir 
            {
              add_stmt($1, ANL_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ANL A ',' '@' ind_reg
            {
              add_stmt($1, ANL_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ANL A ',' '#' num
            {
              add_stmt($1, ANL_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | ANL dir ',' A
            {
              add_stmt($1, ANL_OP, $2, $4, NULL, DIRECT_A, 3);
            }
         | ANL dir ',' '#' num
            {
              add_stmt($1, ANL_OP, $2, $4, NULL, DIRECT_IMMEADIATE, 3);
            }
         | ANL C ',' bit
            {
              /* Add to ... */
            } 
         | ANL C ',' '/' bit
            {
              /* Add to ... */
            };

cjne_stmt : CJNE A ',' dir ',' ID 
            {
              insertSymbol($6, lc); // ?
              add_stmt($1, CJNE_OP, $2, $4, $6, A_DIRECT, 3);
            }
          | CJNE A ',' '#' num ',' ID 
            {
              insertSymbol($7, lc); // ?
              add_stmt($1, CJNE_OP, $2, $5, $7, A_IMMEDIATE, 3);
            }
           | CJNE reg ',' '#' num ',' ID
            {
              insertSymbol($7, lc); // ?
              add_stmt($1, CJNE_OP, $2, $5, $7, REG_IMMEDIATE, 3);
            }
           | CJNE '@' ind_reg ',' '#' num ',' ID
            {
              insertSymbol($8, lc); // ?
              add_stmt($1, CJNE_OP, $3, $6, $8, IND_REG_IMMEDIATE, 3);
            };

clr_stmt : CLR A 
            {
              add_stmt($1, 0xe4, $2, NULL, NULL, A_TYPE, 3);
            }
         | CLR C 
            {
              add_stmt($1, CLR_OP, $2, NULL, NULL, C_TYPE, 3);
            }
         | CLR bit 
            {
              add_stmt($1, CLR_OP, $2, NULL, NULL, BIT_TYPE, 3);
            };

cpl_stmt : CPL A 
            {
              add_stmt($1, 0xf4, $2, NULL, NULL, A_TYPE, 3);
            }
         | CPL C 
            {
              add_stmt($1, CLR_OP, $2, NULL, NULL, C_TYPE, 3);
            }
         | CPL bit 
            {
              add_stmt($1, CLR_OP, $2, NULL, NULL, BIT_TYPE, 3);
            };       

da_stmt : DA A 
           {
            add_stmt($1, DA_OP, $2, NULL, NULL, A_TYPE, 3); 
           }

dec_stmt : DEC A 
            {
              add_stmt($1, DEC_OP, $2, NULL, NULL, A_TYPE, 3);
            }
         | DEC reg 
            {
              add_stmt($1, DEC_OP, $2, NULL, NULL, REG_TYPE, 3);
            }
         | DEC dir 
            {
              add_stmt($1, DEC_OP, $2, NULL, NULL, DIRECT_TYPE, 3);
            }
         | DEC '@' ind_reg
            {
              add_stmt($1, DEC_OP, $2, NULL, NULL, IND_REG_TYPE, 3);
            };

div_stmt : DIV AB
            {
              add_stmt($1, DIV_OP, $2, NULL, NULL, A_TYPE, 3);
            };

djnz_stmt : DJNZ reg ',' ID 
            {
              insertSymbol($4, lc);
              add_stmt($1, DJNZ_OP, $2, $3, REG_TYPE, 3);
            }
           | DJNZ dir ',' ID
            {
              add_stmt($1, DJNZ_OP, $2, $3, DIRECT_TYPE, 3);
            };

inc_stmt : INC A 
            {
              add_stmt($1, INC_OP, $2, NULL, NULL, A_TYPE, 3);
            }
         | INC reg 
            {
              add_stmt($1, INC_OP, $2, NULL, NULL, REG_TYPE, 3);
            }
         | INC dir 
            {
              add_stmt($1, INC_OP, $2, NULL, NULL, DIRECT_TYPE, 3);
            }
         | INC '@' ind_reg
            {
              add_stmt($1, INC_OP, $3, NULL, NULL, IND_REG_TYPE, 3);
            }
         | INC DPTR 
            {
              /* Add to ... */
            };

jb_stmt : JB bit ',' ID 
            {
              insertSymbol($4, lc);
              add_stmt($1, JB_OP, $2, $4, NULL, BIT_TYPE, 3);
            };

jbc_stmt : JBC bit ',' ID
            {
              insertSymbol($4, lc);
              add_stmt($1, JBC_OP, $2, $4, NULL, BIT_TYPE, 3);
            };

jc_stmt : JC ID 
            {
              insertSymbol($2, lc);
              add_stmt($1, JC_OP, $2, NULL, NULL, RELATIVE, 3);
            };

jmp_stmt : JMP '@' A '+' DPTR
            {
              add_stmt($1, JMP_OP, $3, $5, NULL, A_DIRECT, 3);
            };

jnb_stmt : JNB bit ',' ID 
            {
              insertSymbol($4, lc);
              add_stmt($1, JNB_OP, $2, $4, NULL, BIT_TYPE, 3);
            };

jnc_stmt : JNC ID
            {
              insertSymbol($2, lc);
              add_stmt($1, JNC_OP, $2, NULL, NULL, RELATIVE, 3);
            };

jnz_stmt : JNZ ID 
            {
              insertSymbol($2, lc);
              add_stmt($1, JNZ_OP, $2, NULL, NULL, RELATIVE, 3);
            };

jz_stmt : JZ ID 
            {
              insertSymbol($2, lc);
              add_stmt($1, JZ_OP, $2, NULL, NULL, RELATIVE, 3);
            };

lcall_stmt : LCALL ID 
              {
                insertSymbol($2, lc);
                add_stmt($1, LCALL_OP, $2, NULL, NULL, ABSOLUTE, 3);
              }
           | LCALL num 
              {
                add_stmt($1, LCALL_OP, $2, NULL, NULL, ABSOLUTE, 3);
              };

ljmp_stmt : LJMP ID 
              {
                insertSymbol($2, lc);
                add_stmt($1, LJMP_OP, $2, NULL, NULL, ABSOLUTE, 3);
              }
           | LJMP num 
              {
                add_stmt($1, LJMP_OP, $2, NULL, NULL, ABSOLUTE, 3);
              };

mov_stmt : MOV A ',' reg 
            {
              add_stmt($1, 0xe0, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | MOV A ',' dir
            {
              add_stmt($1, 0xe0, $2, $4, NULL, A_DIRECT, 3);
            }
         | MOV A ',' '@' ind_reg
            {
              add_stmt($1, 0xe0, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | MOV A ',' '#' num
            {
              add_stmt($1, 0x70, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | MOV reg ',' A
            {
              add_stmt($1, 0xf0, $2, $4, NULL, REG_A, 3);
            }
         | MOV reg ',' dir
            {
              add_stmt($1, 0xa0, $2, $4, NULL, REG_DIRECT, 3);
            }
         | MOV reg ',' '#' num
            {
              add_stmt($1, 0x70, $2, $5, NULL, REG_IMMEDIATE, 3);
            }
         | MOV dir ',' A 
            {
              add_stmt($1, 0xf0, $2, $4, NULL, DIRECT_A, 3);
            }
         | MOV dir ',' reg 
            {
              add_stmt($1, 0x80, $2, $4, NULL, DIRECT_REG, 3);
            }
         | MOV dir ',' dir
            {
              add_stmt($1, 0x80, $2, $4, NULL, DIRECT_DIRECT, 3);
            }
         | MOV dir ',' '@' ind_reg
            {
              add_stmt($1, 0x80, $2, $5, NULL, DIRECT_IND_REG, 3);
            }
         | MOV dir ',' '#' num
            {
              add_stmt($1, 0x70, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            }
         | MOV '@' ind_reg ',' A 
            {
              add_stmt($1, 0xf0, $3, $5, NULL, IND_REG_A, 3);
            }
         | MOV '@' ind_reg ',' dir
            {
              add_stmt($1, 0xa0, $3, $5, NULL, IND_REG_DIRECT, 3);
            }
         | MOV '@' ind_reg ',' '#' num 
            {
              add_stmt($1, 0x70, $3, $6, NULL, IND_REG_IMMEDIATE, 3);
            }
         | MOV C ',' bit
            {
              /* Add to ... */
            }
         | MOV bit ',' C
            {
              /* Add to ... */
            }
         | MOV DPTR ',' '#' num
            {
              /* Add to ... */
            };

movc_stmt : MOVC A ',' '@' A '+' DPTR
              {
                /* Add to ... */
              }
          | MOVC A ',' '@' A '+' PC
              {
                /* Add to ... */
              };

movx_stmt : MOVX A ',' '@' ind_reg
              {
                /* Add to ... */
              }
          | MOVX A ',' '@' DPTR
              {
                /* Add to ... */
              }
          | MOVX '@' ind_reg ',' A 
              {
                /* Add to ... */
              }
          | MOVX '@' DPTR ',' A
              {
                /* Add to ... */
              } 

mul_stmt : MUL AB
            {
              add_stmt($1, MUL_OP, $2, NULL, NULL, A_TYPE, 3);
            };

nop_stmt : NOP 
            {
              add_stmt($1, NOP_OP, NULL, NULL, NULL, NULL, 3);
            };

orl_stmt : ORL A ',' reg
            {
              add_stmt($1, ORL_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ORL A ',' dir 
            {
              add_stmt($1, ORL_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ORL A ',' '@' ind_reg
            {
              add_stmt($1, ORL_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ORL A ',' '#' num
            {
              add_stmt($1, ORL_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | ORL dir ',' A
            {
              add_stmt($1, ORL_OP, $2, $4, NULL, DIRECT_A, 3);
            }
         | ORL dir ',' '#' num
            {
              add_stmt($1, ORL_OP, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            }
         | ORL C ',' bit
            {
              /* Add to ... */
            } 
         | ORL C ',' '/' bit
            {
              /* Add to ... */
            };

pop_stmt : POP dir
            {
              add_stmt($1, POP_OP, $2, NULL, NULL, DIRECT_TYPE, 3);
            };

push_stmt : PUSH dir
              {
                add_stmt($1, PUSH_OP, $2, NULL, NULL, DIRECT_TYPE, 3);
              };

ret_stmt : RET
            {
              add_stmt($1, RET_OP, NULL, NULL, NULL, NULL, 3); 
            };

reti_stmt : RETI
              {
                add_stmt($1, RETI_OP, NULL, NULL, NULL, NULL, 3); 
              };

rl_stmt : RL A
            {
              add_stmt($1, RL_OP, $2, NULL, NULL, A_TYPE, 3); 
            };

rlc_stmt : RLC A
            {
              add_stmt($1, RLC_OP, $2, NULL, NULL, A_TYPE, 3); 
            };

rr_stmt : RR A
            {
              add_stmt($1, RR_OP, $2, NULL, NULL, A_TYPE, 3); 
            };

rrc_stmt : RRC A 
            {
              add_stmt($1, RRC_OP, $2, NULL, NULL, A_TYPE, 3); 
            };

setb_stmt : SETB C
              {
                add_stmt($1, SETB_OP, $2, NULL, NULL, C_TYPE, 3);
              }
          | SETB bit
              {
                add_stmt($1, SETB_OP, $2, NULL, NULL, BIT_TYPE, 3);
              };

sjmp_stmt : SJMP ID
              {
                insertSymbol($2, lc);
                add_stmt($1, SJMP_OP, $2, NULL, NULL, RELATIVE, 3);
              };

subb_stmt : SUBB A ',' reg
            {
              add_stmt($1, SUBB_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | SUBB A ',' dir
            {
              add_stmt($1, SUBB_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | SUBB A ',' '@' ind_reg
            {
              add_stmt($1, SUBB_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | SUBB A ',' '#' num
            {
              add_stmt($1, SUBB_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            };

swap_stmt : SWAP A
              {
                add_stmt($1, SWAP_OP, $2, NULL, NULL, A_TYPE, 3); 
              };

xch_stmt : XCH A ',' reg 
            {
              add_stmt($1, XCH_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | XCH A ',' dir
            {
              add_stmt($1, XCH_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | XCH A ',' '@' ind_reg
            {
              add_stmt($1, XCH_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            };

xchd_stmt : XCHD A ',' '@' ind_reg
              {
                add_stmt($1, XCHD_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
              };

xrl_stmt : XRL A ',' reg
            {
              add_stmt($1, XRL_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | XRL A ',' dir 
            {
              add_stmt($1, XRL_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | XRL A ',' '@' ind_reg
            {
              add_stmt($1, XRL_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | XRL A ',' '#' num
            {
              add_stmt($1, XRL_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | XRL dir ',' A
            {
              add_stmt($1, XRL_OP, $2, $4, NULL, DIRECT_A, 3);
            }
         | XRL dir ',' '#' num
            {
              add_stmt($1, XRL_OP, $2, $5, NULL, DIRECT_IMMEADIATE, 3);
            };

label: ID ':'
        {
          insertSymbol($1, lc);
        };   

dir : A | B | PSW | DPL | DPH | SP | P0 | P1 | TCON | TMOD | TLO | TL1 | TH0 | TH1 | SCON | SBUF | num

bit : /* Não sei ainda */

reg : R0 | R1 | R2 | R3 | R4 | R5 | R6 | R7 

ind_reg : R0 | R1

num : BIN | HEX | DECIMAL

%%

int yyerror(char * message)
{ fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

