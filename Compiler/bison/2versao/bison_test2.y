%union {
    char* string;
    int num;  // For numeric values
}

%{
    #include <stdio.h>
    int yylex();
    extern FILE *yyin;
    void yyerror(const char* msg);
    
    int final_result = 0; // para devolver o valor final
%}


/* Tokens */
%token          TOK_EOF     0       "end of input"
%token <string> ID                  "identifier"
%token <string> LETTER STRINGER_PARAM              "letter"
%token <num> NUMBER HEX_NUMBER OCTAL_NUMBER BINARY_NUMBER

/* C Keywords */
%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR
%token GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF 
%token UNION UNSIGNED VOID VOLATILE WHILE PACKED

/* Preprocessor Directives */
%token PREPROCESS_HASH PREPROCESS_DEFINE PREPROCESS_INCLUDE PREPROCESS_IFDEF PREPROCESS_IFNDEF
%token PREPROCESS_IF PREPROCESS_ELSE PREPROCESS_ELIF PREPROCESS_ENDIF PREPROCESS_UNDEF 
%token PREPROCESS_ERROR PREPROCESS_LINE PREPROCESS_PRAGMA

/* Symbols */
%token OPEN_PAREN CLOSE_PAREN OPEN_SQUARE CLOSE_SQUARE OPEN_CURLY CLOSE_CURLY SEMICOLON COMMA DOT TWO_DOTS
%token APOSTROPHE QUOTATION_MARK

/* Operators */
%token ARROW PLUSPLUS MINUSMINUS PLUS MINUS LOGIC_NOT LOGIC_AND LOGIC_OR BIT_NOT BIT_AND BIT_OR BIT_XOR
%token TERNARY ASTERISK RIGHT_SLASH PERCENT RIGHT_SHIFT LEFT_SHIFT GREATER_THAN GREATER_THAN_EQUAL
%token SMALLER_THAN SMALLER_THAN_EQUAL EQUAL DIFFERENT ASSIGN ASSIGN_PLUS ASSIGN_MINUS ASSIGN_MULT
%token ASSIGN_DIV ASSIGN_PERCENT ASSIGN_AND ASSIGN_OR ASSIGN_XOR ASSIGN_LEFT_SHIFT ASSIGN_RIGHT_SHIFT

/* Specfific 8051 tokens*/
%token NOINTVECTOR COMPACT DB DISABLE EJECT ASM ENDASM INTPROMOTE FLOATFUZZY INTERVAL LARGE LISTINCLUDE MAXAREGS
%token CODE DATA IDATA BDATA XDATA PDATA SMALL
%token BIT SBIT SFR SFR16
%token AT ALIEN INTERRUPT PRIORITY REENTRANT TASK USING STRINGER

/* Precedendia de operadores - os últimos têm maior precedência */
%left COMMA
%right ASSIGN ASSIGN_PLUS ASSIGN_MINUS ASSIGN_MULT ASSIGN_DIV ASSIGN_PERCENT ASSIGN_AND ASSIGN_OR ASSIGN_XOR ASSIGN_LEFT_SHIFT ASSIGN_RIGHT_SHIFT
%left LOGIC_OR
%left LOGIC_AND
%left BIT_OR
%left BIT_XOR
%left BIT_AND
%left EQUAL DIFFERENT
%left GREATER_THAN GREATER_THAN_EQUAL SMALLER_THAN SMALLER_THAN_EQUAL
%left LEFT_SHIFT RIGHT_SHIFT
%left PLUS MINUS
%left ASTERISK RIGHT_SLASH PERCENT
%right LOGIC_NOT BIT_NOT
%left PLUSPLUS MINUSMINUS
%right TERNARY

%nonassoc LOWER_THAN_ELSE   
%nonassoc ELSE            

%type <num> expression return_statement
%% /* Grammar rules */

program: statement_list TOK_EOF 
    { 
        printf("Parsed successfully! Final result: %d\n", final_result);
    }
    ;

statement_list: statement
              | statement statement_list
              ;

statement: while_loop | if_stmt  
         | return_statement
         | assignment
         ;


return_statement: RETURN expression SEMICOLON
               { 
                   printf("Parsed return statement. Returning: %d\n", $2);
                   final_result = $2; 
               }
               ;

control_statement: statement | OPEN_CURLY statement_list CLOSE_CURLY;

if_stmt:
    IF OPEN_PAREN expression CLOSE_PAREN control_statement %prec LOWER_THAN_ELSE
    {
        printf("If (no else)\n");
    }
    | IF OPEN_PAREN expression CLOSE_PAREN control_statement ELSE control_statement
    {
        printf("If-else\n");
    }
    ;

while_loop: WHILE OPEN_PAREN expression CLOSE_PAREN control_statement
          { printf("Parsed while loop\n"); }
          ;
assignment: ID ASSIGN expression SEMICOLON
            {
                printf("Assignment: %s = %d\n", $1, $3);  // Print variable name and value
            }
            | ID ASSIGN_AND expression SEMICOLON
            {
                printf("Assignment: %s &= %d\n ", $1, $3);
            }
            | ID ASSIGN_DIV expression SEMICOLON
            {
                printf("Assignment: %s /= %d\n ", $1, $3);
            }
            | ID ASSIGN_LEFT_SHIFT expression SEMICOLON
            {
                printf("Assignment: %s <= %d\n ", $1, $3);
            }
            | ID ASSIGN_MINUS expression SEMICOLON
            {
                printf("Assignment: %s -= %d\n ", $1, $3);
            }
            | ID ASSIGN_MULT expression SEMICOLON
            {
                printf("Assignment: %s &= %d\n ", $1, $3);
            }
expression: expression PLUS expression
          { 
                printf("Reducing: %d + %d\n", $1, $3);
                $$ = $1 + $3; 
          }
          | expression SMALLER_THAN expression 
          { 
                printf("Reducing: %d < %d\n", $1, $3);
                $$ = ($1 < $3);
          }
          | expression SMALLER_THAN_EQUAL expression
          {
                printf("Reducing: %d <= %d\n",$1,$3);
                $$ = ($1 <= $3);
          }
          | expression GREATER_THAN expression
          {
                printf("Reducing: %d > %d\n",$1,$3);
                $$ = ($1 > $3);
          }
          | expression GREATER_THAN_EQUAL expression
          {
                printf("Reducing: %d >= %d\n",$1,$3);
                $$ = ($1 >= $3);
          }
          | expression EQUAL expression
          {
                printf("Reducing: %d == %d\n",$1,$3);
                $$ = ($1 == $3);
          }
          | expression DIFFERENT expression
          {
                printf("Reducing: %d != %d\n",$1,$3);
                $$ = ($1 != $3);
          }
          | NUMBER 
          { 
                printf("Number: %d\n", $1);
                $$ = $1; 
          }
          | HEX_NUMBER
          { 
                printf("Hex Number: %d\n", $1);
                $$ = $1; 
          }
          | OCTAL_NUMBER
          { 
                printf("Octal Number: %d\n", $1);
                $$ = $1; 
          }
          | BINARY_NUMBER
          { 
                printf("Binary Number: %d\n", $1);
                $$ = $1; 
          }
          |     ID
          
	  { 
	     if ($1) {
		 printf("Identifier: %s\n", $1);
	     } else {
		 printf("Identifier: (undefined)\n");
	     }
	     $$ = 0; // Placeholder value
	  }
    ;

%%
void yyerror(const char *msg)
{
    printf("Error: %s\n", msg);
}

int main(int argc, char **argv)
{
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Could not open file");
            return 1;
        }
    }
    
    yyparse();
    
    if (yyin) fclose(yyin);
    return 0;
}
