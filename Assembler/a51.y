%{
#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "utils.h"
#include "symtab.h"


static int yylex(void);
int yyerror(char * message);
static int savedLineNo;

%}

%union {
    bucketList *bucket;
    int num;
    // other types you might need
}

/* Operation tokens */
%token <num> NOP AJMP LJMP SJMP ACALL LCALL RET RETI JMP CJNE DJNZ JC JNC JZ JNZ JB JBC JNB
%token <num> MOV MOVC MOVX XCH XCHD XCHL SWAP PUSH POP 
%token <num> INC DEC ADD ADDC DIV SUBB MUL DA SETB CLR CPL RR RRC RL RLC ORL XRL ANL

/* Register tokens */
%token <num> ACC A B PSW DPTR DPL DPH SP P0 P1 TCON TMOD TL0 TL1 TH0 TH1 SCON SBUF PC IE IP GPIO_PORT GPIO_PIN
%token <num> REG

/* Bit Register tokens */
%token <num> C 

/* Numeric type values tokens */
%token <num> NUMBER

/* MISC tokens */
%token <bucket> IDENTIFIER 
%token <num> AB
%token COMMA HASH_TAG TWO_DOTS AT_SIGN OP_CLOSE_PAREN OP_OPEN_PAREN

%type <num> dir bit


%% /* Grammar for as51 */

stmt_seq : stmt | stmt_seq stmt;

stmt : acall_stmt | add_stmt | addc_stmt | ajmp_stmt | anl_stmt | cjne_stmt | clr_stmt | cpl_stmt | da_stmt
     | dec_stmt | div_stmt | djnz_stmt | inc_stmt | jb_stmt | jbc_stmt | jc_stmt
     | jmp_stmt | jnb_stmt | jnc_stmt | jnz_stmt | jz_stmt | lcall_stmt | ljmp_stmt
     | mov_stmt | movc_stmt | movx_stmt | mul_stmt | nop_stmt | orl_stmt | pop_stmt
     | push_stmt | ret_stmt | reti_stmt | rl_stmt | rlc_stmt | rr_stmt | rrc_stmt
     | setb_stmt | sjmp_stmt | subb_stmt | swap_stmt | xch_stmt | xchd_stmt | xrl_stmt 
     | label 

ajmp_stmt : AJMP IDENTIFIER
              {
                add_stmt(AJMP_OP, AJMP_OP, 0, 0, &($2->value), A_REG_TYPE, 3);
              }

add_stmt : ADD A COMMA REG
            {
              add_stmt(ADD_OP, ADD_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ADD A COMMA dir
            {
              add_stmt(ADD_OP, ADD_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ADD A COMMA AT_SIGN REG
            {
              add_stmt(ADD_OP, ADD_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ADD A COMMA HASH_TAG NUMBER
            {
              add_stmt(ADD_OP, ADD_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }; 

addc_stmt : ADDC A COMMA REG
            {
              add_stmt($1, ADDC_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ADDC A COMMA dir
            {
              add_stmt($1, ADDC_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ADDC A COMMA AT_SIGN REG
            {
              add_stmt($1, ADDC_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ADDC A COMMA '#' NUMBER
            {
              add_stmt($1, ADDC_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            };

acall_stmt : ACALL IDENTIFIER
              {
                add_stmt(ACALL_OP, ACALL_OP, no_op, $2, NULL, ABSOLUTE, 3);
              };

anl_stmt : ANL A COMMA REG
            {
              add_stmt($1, ANL_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ANL A COMMA dir 
            {
              add_stmt($1, ANL_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ANL A COMMA AT_SIGN REG
            {
              add_stmt($1, ANL_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ANL A COMMA '#' NUMBER
            {
              add_stmt($1, ANL_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | ANL dir COMMA A
            {
              add_stmt($1, ANL_OP, $2, $4, NULL, DIRECT_A, 3);
            }
         | ANL dir COMMA '#' NUMBER
            {
              add_stmt($1, ANL_OP, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            }
         | ANL C COMMA bit
            {
              /* Add to ... */
            } 
         | ANL C COMMA '/' bit
            {
              /* Add to ... */
            };

cjne_stmt : CJNE A COMMA dir COMMA IDENTIFIER
            {
              add_stmt($1, CJNE_OP, $2, $4, $6, A_DIRECT, 3);
            }
          | CJNE A COMMA '#' NUMBER COMMA IDENTIFIER
            {
              add_stmt($1, CJNE_OP, $2, $5, $7, A_IMMEDIATE, 3);
            }
           | CJNE REG COMMA '#' NUMBER COMMA IDENTIFIER
            {
              add_stmt($1, CJNE_OP, $2, $5, $7, REG_IMMEDIATE, 3);
            }
           | CJNE AT_SIGN REG COMMA '#' NUMBER COMMA IDENTIFIER
            {
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
         | DEC REG 
            {
              add_stmt($1, DEC_OP, $2, NULL, NULL, REG_TYPE, 3);
            }
         | DEC dir 
            {
              add_stmt($1, DEC_OP, $2, NULL, NULL, DIRECT_TYPE, 3);
            }
         | DEC AT_SIGN REG
            {
              add_stmt($1, DEC_OP, $3, NULL, NULL, IND_REG_TYPE, 3);
            };

div_stmt : DIV AB
            {
              add_stmt($1, DIV_OP, $2, NULL, NULL, A_TYPE, 3);
            };

djnz_stmt : DJNZ REG COMMA IDENTIFIER
            {
              add_stmt($1, DJNZ_OP, $2, $4, NULL, REG_TYPE, 3);
            }
           | DJNZ dir COMMA IDENTIFIER
            {
              add_stmt($1, DJNZ_OP, $2, $4, NULL, DIRECT_TYPE, 3);
            };

inc_stmt : INC A 
            {
              add_stmt($1, INC_OP, $2, NULL, NULL, A_TYPE, 3);
            }
         | INC REG 
            {
              add_stmt($1, INC_OP, $2, NULL, NULL, REG_TYPE, 3);
            }
         | INC dir 
            {
              add_stmt($1, INC_OP, $2, NULL, NULL, DIRECT_TYPE, 3);
            }
         | INC AT_SIGN REG
            {
              add_stmt($1, INC_OP, $3, NULL, NULL, IND_REG_TYPE, 3);
            }
         | INC DPTR 
            {
              /* Add to ... */
            };

jb_stmt : JB bit COMMA IDENTIFIER
            {
              add_stmt($1, JB_OP, $2, $4, NULL, BIT_TYPE, 3);
            };

jbc_stmt : JBC bit COMMA IDENTIFIER
            {
              add_stmt($1, JBC_OP, $2, $4, NULL, BIT_TYPE, 3);
            };

jc_stmt : JC IDENTIFIER
            {
              add_stmt($1, JC_OP, $2, NULL, NULL, RELATIVE, 3);
            };

jmp_stmt : JMP AT_SIGN A '+' DPTR
            {
              add_stmt($1, JMP_OP, $3, $5, NULL, A_DIRECT, 3);
            };

jnb_stmt : JNB bit COMMA IDENTIFIER
            {
              add_stmt($1, JNB_OP, $2, $4, NULL, BIT_TYPE, 3);
            };

jnc_stmt : JNC IDENTIFIER
            {
              add_stmt($1, JNC_OP, $2, NULL, NULL, RELATIVE, 3);
            };

jnz_stmt : JNZ IDENTIFIER
            {
              add_stmt($1, JNZ_OP, $2, NULL, NULL, RELATIVE, 3);
            };

jz_stmt : JZ IDENTIFIER
            {
              add_stmt($1, JZ_OP, $2, NULL, NULL, RELATIVE, 3);
            };

lcall_stmt : LCALL IDENTIFIER
              {
                add_stmt($1, LCALL_OP, $2, NULL, NULL, ABSOLUTE, 3);
              }
           | LCALL NUMBER 
              {
                add_stmt($1, LCALL_OP, $2, NULL, NULL, ABSOLUTE, 3);
              };

ljmp_stmt : LJMP IDENTIFIER
              {
                add_stmt($1, LJMP_OP, $2, NULL, NULL, ABSOLUTE, 3);
              }
           | LJMP NUMBER 
              {
                add_stmt($1, LJMP_OP, $2, NULL, NULL, ABSOLUTE, 3);
              };

mov_stmt : MOV A COMMA REG 
            {
              add_stmt($1, 0xe0, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | MOV A COMMA dir
            {
              add_stmt($1, 0xe0, $2, $4, NULL, A_DIRECT, 3);
            }
         | MOV A COMMA AT_SIGN REG
            {
              add_stmt($1, 0xe0, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | MOV A COMMA '#' NUMBER
            {
              add_stmt($1, 0x70, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | MOV REG COMMA A
            {
              add_stmt($1, 0xf0, $2, $4, NULL, REG_A, 3);
            }
         | MOV REG COMMA dir
            {
              add_stmt($1, 0xa0, $2, $4, NULL, REG_DIRECT, 3);
            }
         | MOV REG COMMA '#' NUMBER
            {
              add_stmt($1, 0x70, $2, $5, NULL, REG_IMMEDIATE, 3);
            }
         | MOV dir COMMA A 
            {
              add_stmt($1, 0xf0, $2, $4, NULL, DIRECT_A, 3);
            }
         | MOV dir COMMA REG 
            {
              add_stmt($1, 0x80, $2, $4, NULL, DIRECT_REG, 3);
            }
         | MOV dir COMMA dir
            {
              add_stmt($1, 0x80, $2, $4, NULL, DIRECT_DIRECT, 3);
            }
         | MOV dir COMMA AT_SIGN REG
            {
              add_stmt($1, 0x80, $2, $5, NULL, DIRECT_IND_REG, 3);
            }
         | MOV dir COMMA '#' NUMBER
            {
              add_stmt($1, 0x70, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            }
         | MOV AT_SIGN REG COMMA A 
            {
              add_stmt($1, 0xf0, $3, $5, NULL, IND_REG_A, 3);
            }
         | MOV AT_SIGN REG COMMA dir
            {
              add_stmt($1, 0xa0, $3, $5, NULL, IND_REG_DIRECT, 3);
            }
         | MOV AT_SIGN REG COMMA '#' NUMBER 
            {
              add_stmt($1, 0x70, $3, $6, NULL, IND_REG_IMMEDIATE, 3);
            }
         | MOV C COMMA bit
            {
              /* Add to ... */
            }
         | MOV bit COMMA C
            {
              /* Add to ... */
            }
         | MOV DPTR COMMA '#' NUMBER
            {
              /* Add to ... */
            };

movc_stmt : MOVC A COMMA AT_SIGN A '+' DPTR
              {
                /* Add to ... */
              }
          | MOVC A COMMA AT_SIGN A '+' PC
              {
                /* Add to ... */
              };

movx_stmt : MOVX A COMMA AT_SIGN REG
              {
                /* Add to ... */
              }
          | MOVX A COMMA AT_SIGN DPTR
              {
                /* Add to ... */
              }
          | MOVX AT_SIGN REG COMMA A 
              {
                /* Add to ... */
              }
          | MOVX AT_SIGN DPTR COMMA A
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

orl_stmt : ORL A COMMA REG
            {
              add_stmt($1, ORL_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ORL A COMMA dir 
            {
              add_stmt($1, ORL_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ORL A COMMA AT_SIGN REG
            {
              add_stmt($1, ORL_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ORL A COMMA '#' NUMBER
            {
              add_stmt($1, ORL_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | ORL dir COMMA A
            {
              add_stmt($1, ORL_OP, $2, $4, NULL, DIRECT_A, 3);
            }
         | ORL dir COMMA '#' NUMBER
            {
              add_stmt($1, ORL_OP, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            }
         | ORL C COMMA bit
            {
              /* Add to ... */
            } 
         | ORL C COMMA '/' bit
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

sjmp_stmt : SJMP IDENTIFIER
              {
                add_stmt($1, SJMP_OP, $2, NULL, NULL, RELATIVE, 3);
              };

subb_stmt : SUBB A COMMA REG
            {
              add_stmt($1, SUBB_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | SUBB A COMMA dir
            {
              add_stmt($1, SUBB_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | SUBB A COMMA AT_SIGN REG
            {
              add_stmt($1, SUBB_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | SUBB A COMMA '#' NUMBER
            {
              add_stmt($1, SUBB_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            };

swap_stmt : SWAP A
              {
                add_stmt($1, SWAP_OP, $2, NULL, NULL, A_TYPE, 3); 
              };

xch_stmt : XCH A COMMA REG 
            {
              add_stmt($1, XCH_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | XCH A COMMA dir
            {
              add_stmt($1, XCH_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | XCH A COMMA AT_SIGN REG
            {
              add_stmt($1, XCH_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            };

xchd_stmt : XCHD A COMMA AT_SIGN REG
              {
                add_stmt($1, XCHD_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
              };

xrl_stmt : XRL A COMMA REG
            {
              add_stmt($1, XRL_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | XRL A COMMA dir 
            {
              add_stmt($1, XRL_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | XRL A COMMA AT_SIGN REG
            {
              add_stmt($1, XRL_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | XRL A COMMA '#' NUMBER
            {
              add_stmt($1, XRL_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | XRL dir COMMA A
            {
              add_stmt($1, XRL_OP, $2, $4, NULL, DIRECT_A, 3);
            }
         | XRL dir COMMA '#' NUMBER
            {
              add_stmt($1, XRL_OP, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            };

label: IDENTIFIER TWO_DOTS
        {
          $1->value = lc;
        };   

dir : A 
        {
          $$ = ACC_REG;
        }
    | B
        {
          $$ = B_REG;
        } 
    | PSW
        {
          $$ = PSW_REG;
        }  
    | DPL 
        {
          $$ = DPL_REG;
        } 
    | DPH
        {
          $$ = DPH_REG;
        }  
    | SP
        {
          $$ = SP_REG;
        } 
    | P0 
        {
          $$ = P0_REG;
        } 
    | P1 
        {
          $$ = P1_REG;
        } 
    | TCON 
        {
          $$ = TCON_REG;
        } 
    | TMOD
        {
          $$ = TMOD_REG;
        }  
    | TL0
        {
          $$ = TL0_REG;
        }  
    | TL1
        {
          $$ = TL1_REG;
        }  
    | TH0
        {
          $$ = TH0_REG;
        }  
    | TH1
        {
          $$ = TH1_REG;
        }  
    | SCON
        {
          $$ = SCON_REG;
        }  
    | SBUF
        {
          $$ = SBUF_REG;
        }  
    | NUMBER;

bit : /* Não sei ainda */

%%

int yyerror(char * message)
{ printf("Syntax error: %s\n",message);
  return 0;
}

