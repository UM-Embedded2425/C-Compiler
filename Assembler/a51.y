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
%token BIN HEX DEC 

/* MISC tokens */

%% /* Grammar for as51 */

stmt_seq : stmt | stmt_seq stmt;

stmt : add_stmt | addc_stmt | anl_stmt | cjne_stmt | clr_stmt | cpl_stmt | da_stmt
     | dec_stmt | div_stmt | djnz_stmt | inc_stmt | jb_stmt | jbc_stmt | jc_stmt
     | jmp_stmt | jnb_stmt | jnc_stmt | jnz_stmt | jz_stmt | lcall_stmt | ljmp_stmt
     | mov_stmt | movc_stmt | movx_stmt | mul_stmt | nop_stmt | orl_stmt | pop_stmt
     | push_stmt | ret_stmt | reti_stmt | rl_stmt | rlc_stmt | rr_stmt | rrc_stmt
     | setb_stmt | sjmp_stmt | subb_stmt | swap_stmt | xch_stmt | xchd_stmt | xrl_stmt 
     | label 

add_stmt : ADD A ',' reg
            {
              /* Add to symbol tabel */
            }
         | ADD A ',' dir
            {
              /* Add to symbol tabel */
            }
         | ADD A ',' '@' ind_reg
            {
              /* Add to symbol tabel */
            }
         | ADD A ',' '#' num
            {
              /* Add to ... */
            };

addc_stmt : ADDC A ',' reg
            {
              /* Add to symbol tabel */
            }
         | ADDC A ',' dir
            {
              /* Add to symbol tabel */
            }
         | ADDC A ',' '@' ind_reg
            {
              /* Add to symbol tabel */
            }
         | ADDC A ',' '#' num
            {
              /* Add to ... */
            };

ajmp_stmt : AJMP ID 
              {
                /* Add to ... */
              };

anl_stmt : ANL A ',' reg
            {
              /* Add to ... */
            }
         | ANL A ',' dir 
            {
              /* Add to ... */
            }
         | ANL A ',' '@' ind_reg
            {
              /* Add to ... */
            }
         | ANL A ',' '#' num
            {
              /* Add to ... */
            }
         | ANL dir ',' A
            {
              /* Add to ... */
            }
         | ANL dir ',' '#' num
            {
              /* Add to ... */
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
              /* Add to ... */
            }
          | CJNE A ',' '#' num ',' ID 
            {
              /* Add to ... */
            }
           | CJNE reg ',' '#' num ',' ID
            {
              /* Add to ... */
            }
           | CJNE '@' ind_reg ',' '#' num ',' ID
            {
              /* Add to ... */
            };

clr_stmt : CLR A 
            {
              /* Add to ... */
            }
         | CLR C 
            {
              /* Add to ... */
            }
         | CLR bit 
            {
              /* Add to ... */
            };

cpl_stmt : CPL A 
            {
              /* Add to ... */
            }
         | CPL C 
            {
              /* Add to ... */
            }
         | CPL bit 
            {
              /* Add to ... */
            };       

da_stmt : DA A {/* Add to ... */}

dec_stmt : DEC A 
            {
              /* Add to ... */
            }
         | DEC reg 
            {
              /* Add to ... */
            }
         | DEC dir 
            {
              /* Add to ... */
            }
         | DEC '@' ind_reg
            {
              /* Add to ... */
            };

div_stmt : DIV AB
            {
              /* ADD TO ... */
            };

djnz_stmt : DJNZ reg ',' ID 
            {
              /* Add to ... */
            }
           | DJNZ dir ',' ID
            {
              /* Add to ... */
            };

inc_stmt : INC A 
            {
              /* Add to ... */
            }
         | INC reg 
            {
              /* Add to ... */
            }
         | INC dir 
            {
              /* Add to ... */
            }
         | INC '@' ind_reg
            {
              /* Add to ... */
            }
         | INC DPTR 
            {
              /* Add to ... */
            };

jb_stmt : JB bit ',' ID 
            {
              /* Add to ... */
            };

jbc_stmt : JBC bit ',' ID
            {
              /* Add to ... */
            };

jc_stmt : JC ID 
            {
              /* Add to ... */
            };

jmp_stmt : JMP '@' A '+' DPTR
            {
              /* Add to ... */
            };

jnb_stmt : JNB bit ',' ID 
            {
              /* Add to ... */
            };

jnc_stmt : JNC ID
            {
              /* Add to ... */
            };

jnz_stmt : JNZ ID 
            {
              /* Add to ... */
            };

jz_stmt : JZ ID 
            {
              /* Add to ... */
            };

lcall_stmt : LCALL ID 
              {
                /* Add to ... */
              }
           | LCALL num 
              {
                /* Add to ... */
              };

ljmp_stmt : LJMP ID 
              {
                /* Add to ... */
              }
           | LJMP num 
              {
                /* Add to ... */
              };

mov_stmt : MOV A ',' reg 
            {
              /* Add to ... */
            }
         | MOV A ',' dir
            {
              /* Add to ... */
            }
         | MOV A ',' '@' ind_reg
            {
              /* Add to ... */
            }
         | MOV A ',' '#' num
            {
              /* Add to ... */
            }
         | MOV reg ',' A
            {
              /* Add to ... */
            }
         | MOV reg ',' dir
            {
              /* Add to ... */
            }
         | MOV reg ',' '#' num
            {
              /* Add to ... */
            }
         | MOV dir ',' reg 
            {
              /* Add to ... */
            }
         | MOV dir ',' dir
            {
              /* Add to ... */
            }
         | MOV dir ',' '@' ind_reg
            {
              /* Add to ... */
            }
         | MOV dir ',' '#' num
            {
              /* Add to ... */
            }
         | MOV '@' ind_reg ',' A 
            {
              /* Add to ... */
            }
         | MOV '@' ind_reg ',' dir
            {
              /* Add to ... */
            }
         | MOV '@' ind_reg ',' '#' num 
            {
              /* Add to ... */
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
              /* Add to ... */
            };

nop_stmt : NOP 
            {
              /* Add to ... */
            };

orl_stmt : ORL A ',' reg
            {
              /* Add to ... */
            }
         | ORL A ',' dir 
            {
              /* Add to ... */
            }
         | ORL A ',' '@' ind_reg
            {
              /* Add to ... */
            }
         | ORL A ',' '#' num
            {
              /* Add to ... */
            }
         | ORL dir ',' A
            {
              /* Add to ... */
            }
         | ORL dir ',' '#' num
            {
              /* Add to ... */
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
              /* Add to ... */
            };

push_stmt : PUSH dir
              {
              /* Add to ... */
              };

ret_stmt : RET
            {
              /* Add to ... */
            };

reti_stmt : RETI
              {
                /* Add to ... */
              };

rl_stmt : RL A
            {
              /* Add to ... */
            };

rlc_stmt : RLC A
            {
              /* Add to ... */
            };

rr_stmt : RR A
            {
              /* Add to ... */
            };

rrc_stmt : RRC A 
            {
              /* Add to ... */
            };

setb_stmt : SETB C
              {
              /* Add to ... */
              }
          | SETB BIT
              {
              /* Add to ... */
              };

sjmp_stmt : SJMP ID
              {
              /* Add to ... */
              };

subb_stmt : SUBB A ',' reg
            {
              /* Add to symbol tabel */
            }
         | SUBB A ',' dir
            {
              /* Add to symbol tabel */
            }
         | SUBB A ',' '@' ind_reg
            {
              /* Add to symbol tabel */
            }
         | SUBB A ',' '#' num
            {
              /* Add to ... */
            };

swap_stmt : SWAP A
              {
                /* Add to ... */
              };

xch_stmt : XCH A ',' reg 
            {
              /* Add to ... */
            }
         | XCH A ',' dir
            {
              /* Add to ... */
            }
         | XCH A ',' '@' ind_reg
            {
              /* Add to ... */
            };

xchd_stmt : XCHD A ',' '@' ind_reg
              {
                /* Add to ... */
              };

xrl_stmt : XRL A ',' reg
            {
              /* Add to ... */
            }
         | XRL A ',' dir 
            {
              /* Add to ... */
            }
         | XRL A ',' '@' ind_reg
            {
              /* Add to ... */
            }
         | XRL A ',' '#' num
            {
              /* Add to ... */
            }
         | XRL dir ',' A
            {
              /* Add to ... */
            }
         | XRL dir ',' '#' num
            {
              /* Add to ... */
            };

label: ID ':'
        {
          /* Add to ... */
        };   

dir : A | B | PSW | DPL | DPH | SP | P0 | P1 | TCON | TMOD | TLO | TL1 | TH0 | TH1 | SCON | SBUF | num

bit : /* Não sei ainda */

reg : R0 | R1 | R2 | R3 | R4 | R5 | R6 | R7 

ind_reg : R0 | R1

num : BIN | HEX | DEC

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

