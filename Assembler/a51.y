%{
#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "utils.h"
#include "symtab.h"

static int yylex(void);
static int savedLineNo; 

%}

%token LABEL

/* Operation tokens */
%token NOP AJMP LJMP SJMP ACALL LCALL RET RETI JMP CJNE DJNZ JC JNC JZ JNZ JB JBC JNB
%token MOV MOVC MOVX XCH XCHL SWAP PUSH POP 
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

add_stmt : ADD A ',' dir
            {
              /* Add to symbol tabel */
            }
         | ADD A ',' reg
            {
              /* Add to symbol tabel */
            }
         | ADD A ',' '@' ind_reg
            {
              /* Add to symbol tabel */
            }
         | ADD A ',' '#' num
            {
              /* Add to symbol table */
            };

addc_stmt : ADDC A ',' dir
            {
              /* Add to symbol tabel */
            }
         | ADDC A ',' reg
            {
              /* Add to symbol tabel */
            }
         | ADDC A ',' '@' ind_reg
            {
              /* Add to symbol tabel */
            }
         | ADDC A ',' '#' num
            {
              /* Add to symbol table */
            };

ajmp_stmt : AJMP ID 
              {
                /* Add to symbol table */
              };

anl_stmt : ANL A ',' reg
            {
              /* Add to symbol table */
            }
         | ANL A ',' dir 
            {
              /* Add to symbol table */
            }
         | ANL A ',' '@' ind_reg
            {
              /* Add to symbol table */
            }
         | ANL A ',' '#' num
            {
              /* Add to symbol table */
            }
         | ANL dir ',' A
            {
              /* Add to symbol table */
            }
         | ANL dir ',' '#' num
            {
              /* Add to symbol table */
            }
         | ANL C ',' bit
            {
              /* Add to symbol table */
            } 
         | ANL C ',' '/' bit
            {
              /* Add to symbol table */
            };

cjne_stmt : CJNE A ',' dir ',' ID 
            {
              /* Add to symbol table */
            }
          | CJNE A ',' '#' num ',' ID 
            {
              /* Add to symbol table */
            }
           | CJNE reg ',' '#' num ',' ID
            {
              /* Add to symbol table */
            }
           | CJNE '@' ind_reg ',' '#' num ',' ID
            {
              /* Add to symbol table */
            };

clr_stmt : CLR A 
            {
              /* Add to symbol table */
            }
         | CLR C 
            {
              /* Add to symbol table */
            }
         | CLR bit 
            {
              /* Add to symbol table */
            };

cpl_stmt : CPL A 
            {
              /* Add to symbol table */
            }
         | CPL C 
            {
              /* Add to symbol table */
            }
         | CPL bit 
            {
              /* Add to symbol table */
            };       

da_stmt : DA A {/* Add to symbol table */}

dec_stmt : DEC A 
            {
              /* Add to symbol table */
            }
         | DEC reg 
            {
              /* Add to symbol table */
            }
         | DEC dir 
            {
              /* Add to symbol table */
            }
         | DEC '@' ind_reg
            {
              /* Add to symbol table */
            };

div_stmt : DIV AB
            {
              /* ADD TO SYMBOL table */
            };

djnz_stmt : DJNZ reg ',' ID 
            {
              /* Add to symbol table */
            }
           | DJNZ dir ',' ID
            {
              /* Add to symbol table */
            };

inc_stmt : INC A 
            {
              /* Add to symbol table */
            }
         | INC reg 
            {
              /* Add to symbol table */
            }
         | INC dir 
            {
              /* Add to symbol table */
            }
         | INC '@' ind_reg
            {
              /* Add to symbol table */
            }
         | INC DPTR 
            {
              /* Add to symbol table */
            };

jb_stmt : JB bit ',' ID 
            {
              /* Add to symbol table */
            };

jbc_stmt : JBC bit ',' ID
            {
              /* Add to symbol table */
            };

jc_stmt : JC ID 
            {
              /* Add to symbol table */
            };

jmp_stmt : JMP '@' A '+' DPTR
            {
              /* Add to symbol table */
            };

jnb_stmt : JNB bit ',' ID 
            {
              /* Add to symbol table */
            };

jnc_stmt : JNC ID
            {
              /* Add to symbol table */
            };

jnz_stmt : JNZ ID 
            {
              /* Add to symbol table */
            };

jz_stmt : JZ ID 
            {
              /* Add to symbol table */
            };

lcall_stmt : LCALL ID 
              {
                /* Add to symbol table */
              }
           | LCALL num 
              {
                /* Add to symbol table */
              };

ljmp_stmt : LJMP ID 
              {
                /* Add to symbol table */
              }
           | LJMP num 
              {
                /* Add to symbol table */
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

