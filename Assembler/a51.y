/****************************************************/
/* File: tiny.y                                     */
/* The TINY Yacc/Bison specification file           */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/
%{
#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "utils.h"
#include "symtab.h"

static int yylex(void);
static int savedLineNo; 

%}

%token _LABEL
%token NOP AJMP LJMP SJMP ACALL LCALL RET RETI JMP CJNE DJNZ JC JNC JZ JNZ JB JBC JNB
%token MOV MOVC MOVX XCH XCHL SWAP PUSH POP 
%token INC DEC ADD ADDC DIV SUBB MUL DA SETB CLR CPL RR RRC RL RLC ORL XRL ANL


%% /* Grammar for TINY */

stmt_seq : stmt | stmt stmt_seq;

expression : numeric_expression | register_name;

stmt : _LABEL | equ_stmt;

_LABEL {
  insertSymbol(,lc);
}

equ_stmt : _IDENTIFIER _EQU expression{

}

numeric_expression  : numeric_expression _OP_PLUS  term 
                 { $$ = $1 + $3;
                 }
            | numeric_expression _OP_MINUS term
                 { $$ = $1 - $3;
                 } 
            | term { $$ = $1; }
            ;

term        : term _OP_MUL factor 
                 { $$ = $1 * $3;
                 }
            | term _OP_DIV factor
                 { $$ = $1 / $3;
                 }
            | factor { $$ = $1; }
            ;

factor      : _OP_OPEN_PAREN exp _OP_CLOSE_PAREN
                 { $$ = $2; }
            | number
            | _IDENTIFIER { bucketList* temp = searchBucket(tokenString);
                            if(temp == NULL){
                              $$ = NULL;
                            }
                            else $$ = temp.value;}
            | error { $$ = NULL; }
            ;

number : _DECIMAL
            {
              $$ =  atoi(tokenString);
            }
        | _HEX
            {
              $$ =  strtol(tokenString,NULL,16);
            }


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

