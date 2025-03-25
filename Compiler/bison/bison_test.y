%union {
    char* string;
}

%{
    #include <stdio.h>
    int yylex();
    void yyerror(const char* msg);
%}



%token          TOK_EOF     0       "end of input"
%token <string> ID                  "identifier"
%token <string> LETTER              "letter"
%token <string> NUMBER             "integer"


%token BREAK       "break"
%token CASE        "case"
%token CHAR        "char"
%token CONST       "const"
%token CONTINUE    "continue"
%token DEFAULT     "default"
%token DO          "do"
%token DOUBLE      "double"
%token ELSE        "else"
%token ENUM        "enum"
%token EXTERN      "extern"
%token FLOAT       "float"
%token FOR         "for"
%token GOTO        "goto"
%token IF          "if"
%token INT         "int"
%token LONG        "long"
%token REGISTER    "register"
%token RETURN      "return"
%token SHORT       "short"
%token SIGNED      "signed"
%token SIZEOF      "sizeof"
%token STATIC      "static"
%token STRUCT      "struct"
%token SWITCH      "switch"
%token TYPEDEF     "typedef"
%token UNION       "union"
%token UNSIGNED    "unsigned"
%token VOID        "void"
%token VOLATILE    "volatile"
%token WHILE       "while"
%token PACKED      "__Packed"

%token OPEN_PAREN    "("
%token CLOSE_PAREN   ")"
%token OPEN_SQUARE   "["
%token CLOSE_SQUARE  "]"
%token OPEN_CURLY    "{"
%token CLOSE_CURLY   "}"
%token SEMICOLON     ";"
%token COMMA         ","
%token DOT                     "."  
%token ARROW                   "->"  
%token PLUSPLUS                "++"  
%token MINUSMINUS              "--"  
%token PLUS                    "+"  
%token MINUS                   "-"  
%token LOGIC_NOT               "!"  
%token LOGIC_AND               "&&" 
%token LOGIC_OR                "||"  
%token BIT_NOT                 "~"  
%token BIT_AND                 "&"  
%token BIT_OR                  "|"  
%token BIT_XOR                 "^"  
%token TERNARY                 "?"  
%token ASTERISC                "*"  
%token RIGHT_SLASH             "/"  
%token PERCENT                 "%"  
%token RIGHT_SHIFT             ">>" 
%token LEFT_SHIFT              "<<" 
%token GRATER_THAN             ">"  
%token GRATER_THAN_EQUAL       ">=" 
%token SMALLER_THAN            "<"  
%token SMALLER_THAN_EQUAL      "<=" 
%token EQUAL                   "==" 
%token DIFFERENT               "!=" 
%token ASSIGN                  "="  
%token ASSIGN_PLUS             "+=" 
%token ASSIGN_MINUS            "-=" 
%token ASSIGN_MULT             "*=" 
%token ASSIGN_DIV              "/=" 
%token ASSIGN_PERCENT          "%=" 
%token ASSIGN_AND              "&=" 
%token ASSIGN_OR               "|=" 
%token ASSIGN_XOR              "^="  
%token ASSIGN_LEFT_SHIFT       "<<="
%token ASSIGN_RIGHT_SHIFT      ">>="
%token TWO_DOTS                ":" 

%% /*program */
program: WHILE OPEN_PAREN expression CLOSE_PAREN SEMICOLON  {printf("while(expression); \n");}

expression: LETTER| ID | NUMBER


%%
void yyerror(const char *msg)
{
    printf("%s\n", msg);
}
int main(int argc, char **argv)
{
    yyparse();
    return 0;
}