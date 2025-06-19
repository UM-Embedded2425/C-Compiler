%{
#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "utils.h"
#include "symtab.h"
#include "code_gen.h"

int yylex(void);
int yyerror(char * message);

%}

%union {
    bucketList *bucket;
    int num;
    segment_t segment;
    char* str;
    // other types you might need
}

%type <num> bit dir exp factor term simple_exp seg_stmt

//%define parse.error verbose

/* Operation tokens */
%token <num> ACALL ADD ADDC AJMP ANL CJNE CLR CPL DA DEC DIV DJNZ INC JB JBC JC JMP JNB JNC JNZ JZ LCALL LJMP MOV MOVC MUL NOP ORL POP PUSH RET RETI RL RLC RR RRC SETB SJMP SUBB SWAP XCH XCHD XRL 

%token <str> STRING 

%token <segment> SEG

/* Register tokens */
%token <num> AREG REG A C B PC SFR AB DPTR

/* Numeric type values tokens */
%token <num> NUMBER RAM_BIT_ADDRESS SFR_BIT_ADDRESS

%token COMMA HASH_TAG AT AT_SIGN TWO_DOTS SUM MINUS MULTIPLY MODULE EQ LT MT DIVISION OP_PAR CL_PAR SHIFT_L SHIFT_R

/*Directives*/
%token ALIGN EVEN ORG EQU USING DB DD DW DBIT DS END

%token <bucket> IDENTIFIER

%% /* Grammar for as51 */

main_seq: stmt_seq END;

stmt_seq: stmt | stmt_seq stmt;

stmt: inst_stmt | direct_stmt ;

direct_stmt: label | org | align | even | equ | seg_stmt | res_stmt | init_stmt | end_stmt;

inst_stmt: acall_stmt | add_stmt | addc_stmt | ajmp_stmt | anl_stmt | cjne_stmt | clr_stmt | cpl_stmt | da_stmt | dec_stmt
         | div_stmt | djnz_stmt | inc_stmt | jb_stmt | jbc_stmt | jc_stmt | jmp_stmt | jnb_stmt | jnc_stmt | jnz_stmt 
         | jz_stmt | lcall_stmt | ljmp_stmt | mul_stmt | nop_stmt | orl_stmt | pop_stmt | push_stmt | ret_stmt | reti_stmt
         | rl_stmt | rlc_stmt | rr_stmt | rrc_stmt | setb_stmt | sjmp_stmt | subb_stmt | swap_stmt | xch_stmt | xchd_stmt 
         | xrl_stmt | mov_stmt | movc_stmt;

acall_stmt: ACALL IDENTIFIER
             {
              add_stmt(ACALL_OP, ACALL_OP, 0, 0, &($2->value), NO_TYPE, 3); 
             };

add_stmt: ADD A COMMA REG
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
         | ADD A COMMA HASH_TAG exp
            {
              add_stmt(ADD_OP, ADD_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            };

addc_stmt: ADDC A COMMA REG
            {
              add_stmt(ADDC_OP, ADDC_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ADDC A COMMA dir
            {
              add_stmt(ADDC_OP, ADDC_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ADDC A COMMA AT_SIGN REG
            {
              add_stmt(ADDC_OP, ADDC_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ADDC A COMMA HASH_TAG exp
            {
              add_stmt(ADDC_OP, ADDC_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            };

ajmp_stmt: AJMP IDENTIFIER
              {
                add_stmt(AJMP_OP, AJMP_OP, 0, 0, &($2->value), NO_TYPE, 3);
              };

anl_stmt: ANL A COMMA REG
            {
              add_stmt(ANL_OP, ANL_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | ANL A COMMA dir
            {
              add_stmt(ANL_OP, ANL_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | ANL A COMMA AT_SIGN REG
            {
              add_stmt(ANL_OP, ANL_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ANL A COMMA HASH_TAG exp
            {
              add_stmt(ANL_OP, ANL_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | ANL dir COMMA A
            {
              add_stmt(ANL_OP, ANL_OP, $2, $4, NULL, DIRECT_A, 3);
            }
         | ANL dir COMMA HASH_TAG exp
            {
              add_stmt(ANL_OP, ANL_OP, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            }
         | ANL C COMMA bit
            {
              add_stmt(ANL_OP, 0x80, $2, $4, NULL, C_BIT, 3);
            }     
         | ANL C COMMA DIVISION bit
            {
              add_stmt(ANL_OP, 0xB0, $2, $5, NULL, C_NBIT, 3);
            }; 

cjne_stmt: CJNE A COMMA dir COMMA IDENTIFIER
            {
              add_stmt(CJNE_OP, CJNE_OP, $2, $4, &($6->value), A_DIRECT, 3);
            }
         | CJNE A COMMA HASH_TAG exp COMMA IDENTIFIER
            {
              add_stmt(CJNE_OP, CJNE_OP, $2, $5, &($7->value), A_IMMEDIATE, 3);
            }
         | CJNE REG COMMA HASH_TAG exp COMMA IDENTIFIER
            {
              add_stmt(CJNE_OP, CJNE_OP, $2, $5, &($7->value), REG_IMMEDIATE, 3);
            }
         | CJNE AT_SIGN REG COMMA HASH_TAG exp COMMA IDENTIFIER
            {
              add_stmt(CJNE_OP, CJNE_OP, $3, $6, &($8->value), IND_REG_IMMEDIATE, 3);
            };  
           
clr_stmt: CLR A
            {
              add_stmt(CLR_OP, 0xE4, $2, 0, NULL, A_TYPE, 3);
            }
        | CLR C
            {
              add_stmt(CLR_OP, CLR_OP, $2, 0, NULL, C_TYPE, 3);
            }
        | CLR bit
            {
              add_stmt(CLR_OP, CLR_OP, $2, 0, NULL, BIT_TYPE, 3);
            };

cpl_stmt: CPL A
            {
              add_stmt(CPL_OP, 0xF4, $2, 0, NULL, A_TYPE, 3);
            }
        | CPL C
            {
              add_stmt(CPL_OP, CPL_OP, $2, 0, NULL, C_TYPE, 3);
            }
        | CPL bit
            {
              add_stmt(CPL_OP, CPL_OP, $2, 0, NULL, BIT_TYPE, 3);
            };

da_stmt: DA A
          {
            add_stmt(DA_OP, DA_OP, $2, 0, NULL, A_TYPE, 3);
          };

dec_stmt: DEC A
          {
            add_stmt(DEC_OP, DEC_OP, $2, 0, NULL, A_TYPE, 3);
          }
        | DEC REG 
          {
            add_stmt(DEC_OP, DEC_OP, $2, 0, NULL, REG_TYPE, 3);
          }
        | DEC dir 
          {
            add_stmt(DEC_OP, DEC_OP, $2, 0, NULL, DIRECT_TYPE, 3);
          }
        | DEC AT_SIGN REG 
          {
            add_stmt(DEC_OP, DEC_OP, $3, 0, NULL, IND_REG_TYPE, 3);
          };

div_stmt: DIV AB
            {
              add_stmt(DIV_OP, DIV_OP, $2, 0, NULL, AB_TYPE, 3);
            };

djnz_stmt: DJNZ REG COMMA IDENTIFIER
            {
              add_stmt(DJNZ_OP, DJNZ_OP, $2, 0, &($4->value), REG_TYPE, 3);
            }
         | DJNZ dir COMMA IDENTIFIER
            {
              add_stmt(DJNZ_OP, DJNZ_OP, $2, 0, &($4->value), DIRECT_TYPE, 3);
            };

inc_stmt: INC A
          {
            add_stmt(INC_OP, INC_OP, $2, 0, NULL, A_TYPE, 3);
          }
        | INC REG 
          {
            add_stmt(INC_OP, INC_OP, $2, 0, NULL, REG_TYPE, 3);
          }
        | INC dir 
          {
            add_stmt(INC_OP, INC_OP, $2, 0, NULL, DIRECT_TYPE, 3);
          }
        | INC AT_SIGN REG 
          {
            add_stmt(INC_OP, INC_OP, $3, 0, NULL, IND_REG_TYPE, 3);
          }
        | INC DPTR
          {
            add_stmt(INC_OP, 0xA3, $2, 0, NULL, DPTR_TYPE, 3);
          };

jb_stmt: JB bit COMMA IDENTIFIER
          {
            add_stmt(JB_OP, JB_OP, $2, 0, &($4->value), RELATIVE, 3);
          };

jbc_stmt: JBC bit COMMA IDENTIFIER
          {
            add_stmt(JBC_OP, JBC_OP, $2, 0, &($4->value), RELATIVE, 3);
          };

jc_stmt: JC IDENTIFIER
          {
            add_stmt(JC_OP, JC_OP, 0, 0, &($2->value), RELATIVE, 3);
          };

jmp_stmt: JMP AT_SIGN A SUM DPTR
          {
            add_stmt(JMP_OP, JMP_OP, $3, $5, NULL, ABSOLUTE, 3);
          }

jnb_stmt: JNB bit COMMA IDENTIFIER
          {
            add_stmt(JNB_OP, JNB_OP, $2, 0, &($4->value), RELATIVE, 3);
          };

jnc_stmt: JNC IDENTIFIER
          {
            add_stmt(JNC_OP, JNC_OP, 0, 0, &($2->value), RELATIVE, 3);
          };

jnz_stmt: JNZ IDENTIFIER
          {
            add_stmt(JNZ_OP, JNZ_OP, 0, 0, &($2->value), RELATIVE, 3);
          };

jz_stmt: JZ IDENTIFIER
          {
            add_stmt(JZ_OP, JZ_OP, 0, 0, &($2->value), RELATIVE, 3);
          };

lcall_stmt: LCALL IDENTIFIER
          {
            add_stmt(LCALL_OP, LCALL_OP, 0, 0, &($2->value), ABSOLUTE, 3);
          };

ljmp_stmt: LJMP IDENTIFIER
          {
            add_stmt(LJMP_OP, LJMP_OP, 0, 0, &($2->value), ABSOLUTE, 3);
          };


mov_stmt: MOV A COMMA REG
            {
              add_stmt(MOV_OP, 0xE8, $2, $4, NULL, A_REG_TYPE, 3);
            }
        | MOV A COMMA dir
            {
              add_stmt(MOV_OP, 0xE5, $2, $4, NULL, A_DIRECT, 3);
            }
        | MOV A COMMA AT_SIGN REG
            {
              add_stmt(MOV_OP, 0xE6, $2, $5, NULL, A_IND_REG_TYPE, 3); 
            }
        | MOV A COMMA HASH_TAG exp
            {
              add_stmt(MOV_OP, MOV_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
        | MOV REG COMMA A
            {
              add_stmt(MOV_OP, 0xF8, $2, $4, NULL, REG_A, 3);
            }
        | MOV REG COMMA dir
            {
              add_stmt(MOV_OP, 0xA8, $2, $4, NULL, REG_DIRECT, 3);
            }
        | MOV REG COMMA HASH_TAG exp
            {
              add_stmt(MOV_OP, MOV_OP, $2, $5, NULL, REG_IMMEDIATE, 3);
            }
        | MOV dir COMMA A
            {
              add_stmt(MOV_OP, 0xF5, $2, $4, NULL, DIRECT_A, 3);
            }
        | MOV dir COMMA REG
            {
              add_stmt(MOV_OP, 0X88, $2, $4, NULL, DIRECT_REG, 3);
            }
        | MOV dir COMMA dir
            {
              add_stmt(MOV_OP, 0x85, $2, $4, NULL, DIRECT_DIRECT, 3);
            }
        | MOV dir COMMA AT_SIGN REG
            {
              add_stmt(MOV_OP, 0x86, $2, $5, NULL, DIRECT_IND_REG, 3);
            }
        | MOV dir COMMA HASH_TAG exp
            {
              add_stmt(MOV_OP, MOV_OP, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            }
        | MOV AT_SIGN REG COMMA A
            {
              add_stmt(MOV_OP, 0xF6, $3, $5, NULL, IND_REG_A, 3);
            }
        | MOV AT_SIGN REG COMMA dir
            {
              add_stmt(MOV_OP, 0xA6, $3, $5, NULL, IND_REG_DIRECT, 3);
            }
        | MOV AT_SIGN REG COMMA HASH_TAG exp
            {
              add_stmt(MOV_OP, MOV_OP, $3, $6, NULL, IND_REG_IMMEDIATE, 3);
            }
        | MOV C COMMA bit
            {
              add_stmt(MOV_OP, 0xA2, $2, $4, NULL, C_BIT, 3);
            }
        | MOV bit COMMA C
            {
              add_stmt(MOV_OP, 0x92, $2, $4, NULL, BIT_C, 3);
            }
        | MOV DPTR COMMA HASH_TAG exp
            {
              add_stmt(MOV_OP, 0x90, $2, $5, NULL, DPTR_IMMEDIATE, 3);
            }            

movc_stmt: MOVC A COMMA AT_SIGN A SUM DPTR
            {
              add_stmt(MOVC_OP, 0x93, $2, $5+$7, NULL, DPTR_TYPE, 3);
            }
         | MOVC A COMMA AT_SIGN A SUM PC
            {
              add_stmt(MOVC_OP, MOVC_OP, $2, $5+$7, NULL, PC_TYPE, 3);
            }; 

mul_stmt: MUL AB 
            {
              add_stmt(MUL_OP, MUL_OP, $2, 0, NULL, AB_TYPE, 3);
            };

nop_stmt: NOP 
            {
              add_stmt(NOP_OP, NOP_OP, 0, 0, NULL, NO_TYPE, 3);
            };

orl_stmt: ORL A COMMA REG
            {
             add_stmt(ORL_OP, ORL_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
        | ORL A COMMA dir
            {
              add_stmt(ORL_OP, ORL_OP, $2, $4, NULL, A_DIRECT, 3);
            } 
        | ORL A COMMA AT_SIGN REG
            {
              add_stmt(ORL_OP, ORL_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | ORL A COMMA HASH_TAG exp
            {
              add_stmt(ORL_OP, ORL_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | ORL dir COMMA A
            {
              add_stmt(ORL_OP, ORL_OP, $2, $4, NULL, DIRECT_A, 3);
            }
         | ORL dir COMMA HASH_TAG exp
            {
              add_stmt(ORL_OP, ORL_OP, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            }
         | ORL C COMMA bit
            {
              add_stmt(ORL_OP, 0x70, $2, $4, NULL, C_BIT, 3);
            }     
         | ORL C COMMA DIVISION bit
            {
              add_stmt(ORL_OP, 0xA0, $2, $5, NULL, C_NBIT, 3);
            };

pop_stmt: POP dir
            {
              add_stmt(POP_OP, POP_OP, $2, 0, NULL, DIRECT_TYPE, 3);
            };

push_stmt: PUSH dir
            {
              add_stmt(PUSH_OP, PUSH_OP, $2, 0, NULL, DIRECT_TYPE, 3);
            };

ret_stmt: RET
            {
              add_stmt(RET_OP, RET_OP, 0, 0, NULL, NO_TYPE, 3);
            };

reti_stmt: RETI
            {
              add_stmt(RETI_OP, RETI_OP, 0, 0, NULL, NO_TYPE, 3);
            };

rl_stmt: RL A
          {
            add_stmt(RL_OP, RL_OP, $2, 0, NULL, A_TYPE, 3);
          };

rlc_stmt: RLC A
            {
              add_stmt(RLC_OP, RLC_OP, $2, 0, NULL, A_TYPE, 3);
            };

rr_stmt: RR A
          {
            add_stmt(RR_OP, RR_OP, $2, 0, NULL, A_TYPE, 3);
          };

rrc_stmt: RRC A 
            {
              add_stmt(RRC_OP, RRC_OP, $2, 0, NULL, A_TYPE, 3);
            };

setb_stmt: SETB C
            {
              add_stmt(SETB_OP, SETB_OP, $2, 0, NULL, C_TYPE, 3);
            }
         | SETB bit
            {
              add_stmt(SETB_OP, SETB_OP, $2, 0, NULL, BIT_TYPE, 3);
            };

sjmp_stmt: SJMP IDENTIFIER
            {
              add_stmt(SJMP_OP, SJMP_OP, 0, 0, &($2->value), RELATIVE, 3);
            };

subb_stmt: SUBB A COMMA REG
            {
              add_stmt(SUBB_OP, SUBB_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
         | SUBB A COMMA dir
            {
              add_stmt(SUBB_OP, SUBB_OP, $2, $4, NULL, A_DIRECT, 3);
            }
         | SUBB A COMMA AT_SIGN REG
            {
              add_stmt(SUBB_OP, SUBB_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | SUBB A COMMA HASH_TAG exp
            {
              add_stmt(SUBB_OP, SUBB_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            };

swap_stmt: SWAP A 
            {
              add_stmt(SWAP_OP, SWAP_OP, $2, 0, NULL, A_TYPE, 3);
            };

xch_stmt: XCH A COMMA REG
            {
              add_stmt(XCH_OP, XCH_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
        | XCH A COMMA dir
            {
              add_stmt(XCH_OP, XCH_OP, $2, $4, NULL, A_DIRECT, 3);
            } 
        | XCH A COMMA AT_SIGN REG
            {
              add_stmt(XCH_OP, XCH_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            };

xchd_stmt: XCHD A COMMA AT_SIGN REG
            {
              add_stmt(XCHD_OP, XCHD_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            };

xrl_stmt: XRL A COMMA REG
            {
             add_stmt(XRL_OP, XRL_OP, $2, $4, NULL, A_REG_TYPE, 3);
            }
        | XRL A COMMA dir
            {
              add_stmt(XRL_OP, XRL_OP, $2, $4, NULL, A_DIRECT, 3);
            } 
        | XRL A COMMA AT_SIGN REG
            {
              add_stmt(XRL_OP, XRL_OP, $2, $5, NULL, A_IND_REG_TYPE, 3);
            }
         | XRL A COMMA HASH_TAG exp
            {
              add_stmt(XRL_OP, XRL_OP, $2, $5, NULL, A_IMMEDIATE, 3);
            }
         | XRL dir COMMA A
            {
              add_stmt(XRL_OP, XRL_OP, $2, $4, NULL, DIRECT_A, 3);
            }
         | XRL dir COMMA HASH_TAG exp
            {
              add_stmt(XRL_OP, XRL_OP, $2, $5, NULL, DIRECT_IMMEDIATE, 3);
            };

res_stmt: DS exp
{
  if (lc.segment == BIT_SEGMENT){
    lc.value[lc.segment] += $2*8;
  }else  if(lc.segment == CODE_SEGMENT){
    add_stmt(CSEG_OP, 0, 0, 0, NULL, NO_TYPE, $2);
  }else{
    lc.value[lc.segment] += $2;
  }
  if(lc.value[lc.segment] > max_seg[lc.segment]){
      yyerror("Reservation out of bounds");
    }
}
DBIT exp{
  if (lc.segment != BIT_SEGMENT){
    yyerror("Bit reservation in non bit segment");
  }else{
    lc.value[BIT_SEGMENT] += $2;
    if(lc.value[BIT_SEGMENT] > max_seg[BIT_SEGMENT]){
      yyerror("Reservation out of bounds");
    }
  }
}

init_stmt: DB init_seq | DW init_seq | DD init_seq;

init_seq: init_el | init_seq COMMA init_el;

init_el: STRING{
  long int parameter = 0;
  for (int i = 0; i < strlen($1); i++){
    parameter = 0;
    for(int i2 = 0; i2 < (1 << init_mode) && (i+i2 < strlen($1)); i2++){
      parameter |= $1[i+i2] << (init_mode - i2);
    }
    add_stmt(DB_OP, DB_OP, parameter, 0, NULL, NO_TYPE, 3);
  }
  free($1);
} | NUMBER{
  int parameter = $1;
  add_stmt(DB_OP, DB_OP, parameter, 0, NULL, NO_TYPE, 3);
}

seg_stmt: SEG
{
  lc.segment = $1;
  $$ = lc.value[lc.segment];
} | SEG AT NUMBER
{
  if($3 < 0 || $3 > max_seg[$1]){
    yyerror("Segment definition out of bounds");
  }else{
    lc.segment = $1;
    if($1 == CODE_SEGMENT){
      $$ = $3;
      add_stmt(CSEG_OP, 0, 0, 0, NULL, NO_TYPE, $3*3 - lc.value[lc.segment]);
    }
    lc.value[lc.segment] = $3*3;
    $$ = $3;
  }
} | SEG AT RAM_BIT_ADDRESS
{ 
  if($1 != BIT_SEGMENT){
    yyerror("Address not allowed in bit segment format for this segment type");
  } else if($3 < 0 || $3 > max_seg[$1]){
    yyerror("Segment definition out of bounds");
  } else{
    lc.segment = $1;
    lc.value[lc.segment] = $3;
    $$ = $3;
  }
};

end_stmt: END 
            {

            };

label : IDENTIFIER TWO_DOTS
{
  if($1->segment != UNDEF_SEGMENT){
    yyerror("Label already defined");
  } else{
  $1->value = lc.value[lc.segment];
  $1->segment = lc.segment;
  }
} |
IDENTIFIER TWO_DOTS seg_stmt{
  if($1->segment != UNDEF_SEGMENT){
    yyerror("Label already defined");
  } else{
  $1->value = $3;
  $1->segment = lc.segment;
  }
};

org : ORG exp
{
  if(lc.segment == CODE_SEGMENT){
      add_stmt(CSEG_OP, 0, 0, 0, NULL, NO_TYPE, ($2)*3 - lc.value[lc.segment]);
    }else{
      lc.value[lc.segment] = ($2)* 3;
    }
};

align : ALIGN exp
{
  lc.value[lc.segment] = lc.value[lc.segment]&(~((1<<$2)-1))+ (1 << $2);
};

even : EVEN
{
  lc.value[lc.segment] += lc.value[lc.segment]%2;
};

equ : IDENTIFIER EQU exp
{
  if ($1->segment != UNDEF_SEGMENT){
    yyerror("Symbol already defined");
  } else{
    $1->segment = INMEDIATE;
    $1->value = $3;
  }
} | IDENTIFIER EQU SFR
{
  if ($1->segment != UNDEF_SEGMENT){
    yyerror("Symbol already defined");
  } else{
    $1->segment = REGISTER;
    $1->value = $3;
  }
};


exp         : exp LT simple_exp 
                 { $$ = $1 < $3;
                 }
            | exp MT simple_exp 
                 { $$ = $1 > $3;
                 }
            | exp EQ simple_exp
                 { $$ = $1 == $3;
                 }
            | simple_exp { $$ = $1; 
            }
            ;
simple_exp  : simple_exp SUM term 
                 { $$ = $1 + $3;
                 }
            | simple_exp MINUS term
                 { $$ = $1 - $3;
                 } 
            | term { $$ = $1; 
            }
            ;
            
term        : term MULTIPLY factor 
                 { $$ = $1 * $3;
                 }
            | term DIVISION factor
                 { $$ = $1 / $3;
                 }
            | term MODULE factor
              {
                $$ = $1 % $3;
              }
            | term SHIFT_R factor{
              $$ = $1 >> $3;
            }
            | term SHIFT_L factor{
              $$ = $1 << $3;
            }
            | factor { $$ = $1;}
            ;
factor      : OP_PAR exp CL_PAR
                 { 
                  $$ = $2;
                 }
            | NUMBER
                 {
                    $$ = $1;
                 }
            | IDENTIFIER {
                  $$ = $1->value;
                 }
            | error{printf("Error in factor\n");
            $$ = 0;}
            ;

dir : SFR
        {
          $$ = $1;
        }
    | B
        {
          $$ = $1;
        }  
    | exp;

bit : RAM_BIT_ADDRESS | SFR_BIT_ADDRESS;

%%

int yyerror(char * message)
{ printf("Error at line %d: %s\n",current_line,message);
  end_error = 1;
  return 0;
}
