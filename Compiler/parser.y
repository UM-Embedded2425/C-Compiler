%{

#include <stdio.h>
#include "ast.h"

static char * savedName;
static int savedLineNo;
TreeNode * savedTree;
int yylex(void);
extern FILE *yyin;
void yyerror(const char* msg);

%}

%union{
	int val;
    double fval;
    char* string;
    char cval;

    TreeNode* node;
	
}

/* Tokens */
%token          TOK_EOF     0       "end of input"
%token <string> ID                  "identifier"
%token <cval> LETTER              "letter"
%token <val> NUMBER
%token <fval> FLOAT_NUMBER

/* C Keywords */
%token <val> AUTO BOOL BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR
%token <val> GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF
%token <val> UNION UNSIGNED VOID VOLATILE WHILE PACKED

/* Preprocessor Directives */
%token <val> PREPROCESS_HASH PREPROCESS_DEFINE PREPROCESS_INCLUDE PREPROCESS_IFDEF PREPROCESS_IFNDEF
%token <val> PREPROCESS_IF PREPROCESS_ELSE PREPROCESS_ELIF PREPROCESS_ENDIF PREPROCESS_UNDEF
%token <val> PREPROCESS_ERROR PREPROCESS_LINE PREPROCESS_PRAGMA

/* Symbols */
%token <val> OPEN_PAREN CLOSE_PAREN OPEN_SQUARE CLOSE_SQUARE OPEN_CURLY CLOSE_CURLY SEMICOLON COMMA DOT TWO_DOTS
%token <val> APOSTROPHE QUOTATION_MARK

/* Operators */
%token <val> ARROW PLUSPLUS MINUSMINUS PLUS MINUS LOGIC_NOT LOGIC_AND LOGIC_OR BIT_NOT BIT_AND BIT_OR BIT_XOR
%token <val> TERNARY ASTERISK RIGHT_SLASH PERCENT RIGHT_SHIFT LEFT_SHIFT GREATER_THAN GREATER_THAN_EQUAL
%token <val> SMALLER_THAN SMALLER_THAN_EQUAL EQUAL DIFFERENT ASSIGN ASSIGN_PLUS ASSIGN_MINUS ASSIGN_MULT
%token <val> ASSIGN_DIV ASSIGN_PERCENT ASSIGN_AND ASSIGN_OR ASSIGN_XOR ASSIGN_LEFT_SHIFT ASSIGN_RIGHT_SHIFT

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
/* Declarar tipos para produções */

%type <node> program
%type <node> code_line code_lines
%type <node> function_definition declaration declaration_seq
%type <node> block_line block_lines statement
%type <node> while_stmt if_stmt for_stmt switch_stmt continue_stmt break_stmt goto_stmt return_stmt expression_stmt
%type <node> logical_exp shift_exp addsub_exp muldiv_exp unary_exp complex_exp simple_expression
%type <node> parameter_list value_list enumerator_list
%type <node> declaration_types storage_modifier assign_operator unary_operator logical_operator


%%

program: code_lines TOK_EOF
    {
        { savedTree = $1;}
        printf("Parsed successfully!\n");
    }
    ;

//não tenho a certeza sobre a criação de árvore neste tipo de gramática

code_lines : code_line { $$ = $1; }
           | code_lines code_line
                {
                    $$ = addChild($1, $2);
                }
           ;

code_line : function_definition { $$ = $1; }
          | declaration { $$ = $1; }
          ;

declaration_seq : declaration { $$ = $1; }
                | declaration_seq declaration
                    {
                        $$ = addChild($1, $2);
                    }
                ;

function_definition : declaration_types ID OPEN_PAREN parameter_list CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY
    {
        TreeNode* funcNode = createNode(funcDefNK); // Nó da função

        TreeNode* idNode = createNode(idNK);        // Nó do identificador
        idNode->nodeAttr.name = strdup($2);         // Armazena o nome do ID

        addChild(funcNode, $1);     // Tipo de retorno
        addChild(funcNode, idNode); // Nome da função como nó filho
        addChild(funcNode, $4);     // Parâmetros
        addChild(funcNode, $7);     // Corpo da função

        $$ = funcNode;

        printf("Function definition: Type: %s, Name: %s\n", $1, $2);
    }
    ;

block_lines : block_line { $$ = $1; }
           | block_lines block_line
                {
                    $$ = addChild($1, $2);
                }
           ;

block_line : statement { $$ = $1; }
          | declaration { $$ = $1; }
          ;

statement: while_stmt
        | if_stmt
        | for_stmt
        | switch_stmt
        | continue_stmt
        | break_stmt
        | goto_stmt
        | return_stmt
        | expression_stmt
        ;

while_stmt: WHILE OPEN_PAREN expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY
          { printf("Parsed while loop\n"); }
          | WHILE OPEN_PAREN expression_stmt CLOSE_PAREN expression_stmt
          { printf("Parsed while loop\n"); }
          ;

if_stmt : IF OPEN_PAREN expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY ELSE OPEN_CURLY block_lines CLOSE_CURLY
          { printf("Parsed if else stmt\n"); }
          | IF OPEN_PAREN expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY
          { printf("Parsed if stmt\n"); }
          | IF OPEN_PAREN expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY ELSE if_stmt
          { printf("Parsed if else if stmt\n"); }
          ;

for_stmt : FOR OPEN_PAREN declaration expression_stmt SEMICOLON expression_stmt CLOSE_PAREN OPEN_CURLY block_lines CLOSE_CURLY
        { printf("Parsed for stmt\n"); }
        ;

switch_stmt : SWITCH OPEN_PAREN ID CLOSE_PAREN OPEN_CURLY case_seq CLOSE_CURLY
        { printf("Parsed switch statement\n"); }
        ;

case_seq : case_stmt
         | case_seq case_stmt
         ;

case_stmt : CASE expression_stmt TWO_DOTS block_lines break_stmt
        { printf("Parsed case:\n"); }
        | DEFAULT TWO_DOTS block_lines break_stmt
        { printf("Parsed default case\n"); }
        ;

continue_stmt : CONTINUE SEMICOLON
        { printf("Parsed continue stmt\n"); }
        ;

break_stmt : BREAK SEMICOLON
        { printf("Parsed break stmt\n"); }
          ;

goto_stmt : GOTO ID SEMICOLON
        { printf("Parsed goto stmt\n"); }
        ;

return_stmt: RETURN expression_stmt SEMICOLON
    { printf("Parsed return statement. Returning\n");}
    ;

expression_stmt : logical_exp
    | ID assign_operator logical_exp SEMICOLON
        { printf("ExprStmt:...\n"); }
    ;

logical_exp : shift_exp
    | logical_exp logical_operator shift_exp
        { printf("LogicalExp: ...\n"); }
    ;

shift_exp : addsub_exp
    | shift_exp LEFT_SHIFT addsub_exp
        { printf("ShiftExp: <<\n"); }
    | shift_exp RIGHT_SHIFT addsub_exp
        { printf("ShiftExp: >>\n"); }
    ;

addsub_exp : muldiv_exp
        {
            $$ = $1;  // Atribui a expressão multiplicativa ao nó de adição/subtração
        }
    | addsub_exp PLUS muldiv_exp
        {
            $$ = createNode(opNK);
            $$->nodeAttr.val = plusK;
            addChild($$, $1);
            addChild($$, $3);

            printf("AddSubExp: +\n");
        }
    | addsub_exp MINUS muldiv_exp
        {
            $$ = createNode(opNK);
            $$->nodeAttr.val = minusK;
            addChild($$, $1);
            addChild($$, $3);
            printf("AddSubExp: -\n");
        }
    ;

muldiv_exp : unary_exp
    | muldiv_exp ASTERISK unary_exp
        { printf("MulDivExp: *\n"); }
    | muldiv_exp RIGHT_SLASH unary_exp
        { printf("MulDivExp: /\n"); }
    | muldiv_exp PERCENT unary_exp
        { printf("MulDivExp: percent\n"); }
    ;

unary_exp : complex_exp
    | PLUSPLUS unary_exp
        { printf("UnaryExp: ++ (prefix)\n"); }
    | MINUSMINUS unary_exp
        { printf("UnaryExp: -- (prefix)\n"); }
    | unary_operator unary_exp
        { printf("UnaryExp: operator unary operator\n"); }
    ;

complex_exp : simple_expression
    | complex_exp OPEN_SQUARE complex_exp CLOSE_SQUARE
        { printf("ComplexExp: indexing []\n"); }
    | complex_exp OPEN_CURLY parameter_list CLOSE_CURLY
        { printf("ComplexExp: function call {}\n"); }
    | complex_exp DOT ID
        { printf("ComplexExp:\n"); }
    | complex_exp ARROW ID
        { printf("ComplexExp:\n"); }
    ;

simple_expression : ID
        { printf("SimpleExp: ID =\n"); }
    | NUMBER
        { printf("SimpleExp: NUMBER =\n"); }
    | FLOAT_NUMBER
        { printf("SimpleExp: FLOAT_NUMBER = \n"); }
    //|STRING_LITERAL
    | OPEN_PAREN expression_stmt CLOSE_PAREN
        { printf("SimpleExp: ( ... )\n"); }
    ;


parameter_list : declaration_types ID
    { 
        TreeNode* parameternode = createNode(parameterNK);

        TreeNode* idNode = createNode(idNK);
        idNode->nodeAttr.name = strdup($2);

        addChild(parameternode, $1);      // Tipo
        addChild(parameternode, idNode);  // ID como nó, não string

        $$ = parameternode;
        
        printf("Parameter: Type \n"); 
    }
    | parameter_list COMMA declaration_types ID
    { 
        TreeNode* parameternode = createNode(parameterNK);

        TreeNode* idNode = createNode(idNK);        // Nó do identificador
        idNode->nodeAttr.name = strdup($4);         // Armazena o nome do ID

        addChild(parameternode, $1);     // Tipo
        addChild(parameternode, $3);     // Parâmetros
        addChild(parameternode, idNode);

        $$ = parameternode;

        printf("Parameter: Type \n");
    }
    ;


declaration : declaration_types ID SEMICOLON
                { 
                    TreeNode* idnode = createNode(idNK);
                    idnode->nodeAttr.name = strdup($2);

                    addChild(idnode, $1);

                    printf("Declared variable: Type \n"); }
            | declaration_types ID ASSIGN expression_stmt SEMICOLON
                { printf(   "Declared variable: Type\n"); }
            | declaration_types ID OPEN_PAREN parameter_list CLOSE_PAREN SEMICOLON
                { printf("Declared function: Type \n"); }
            | declaration_types ID OPEN_SQUARE NUMBER CLOSE_SQUARE SEMICOLON
                { printf("Declared array: Type \n"); }
            | declaration_types ID OPEN_SQUARE NUMBER CLOSE_SQUARE ASSIGN OPEN_CURLY value_list CLOSE_CURLY SEMICOLON
                { printf("Declared array: Type \n"); }
            | STRUCT ID OPEN_CURLY declaration_seq CLOSE_CURLY SEMICOLON
                { printf("Declared struct:Identifier: \n"); }
            | UNION ID OPEN_CURLY declaration_seq CLOSE_CURLY SEMICOLON
                { printf("Declared UNION:Identifier: \n"); }
            | ENUM ID OPEN_CURLY enumerator_list CLOSE_CURLY SEMICOLON
                { printf("Declared ENUM:Identifier: \n"); }
            ;

value_list : NUMBER { printf("SimpleExp: NUMBER = \n"); }
            | value_list COMMA NUMBER { printf("SimpleExp: NUMBER =\n"); }

enumerator_list  : ID
                    {
                        TreeNode* node = createNode(idNK);
                        node->nodeAttr.name = $1;
                        $$ = node;
                    }
                | ID ASSIGN NUMBER
                    
                | enumerator_list COMMA ID


declaration_types : VOID
                    {
                        $$ = createNode(declarNK);
                        $$->nodeAttr.val = voidK;
                        printf("Criado nó declarNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | BOOL
                    {
                        $$ = createNode(declarNK);
                        $$->nodeAttr.val = boolK;
                        printf("Criado nó declarNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | CHAR
                    {
                        $$ = createNode(declarNK);
                        $$->nodeAttr.val = charK;
                        printf("Criado nó declarNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | SHORT
                    {
                        $$ = createNode(declarNK);
                        $$->nodeAttr.val = shortK;
                        printf("Criado nó declarNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | INT
                    {
                        $$ = createNode(declarNK);
                        $$->nodeAttr.val = intK;
                        printf("Criado nó declarNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | LONG
                    {
                        $$ = createNode(declarNK);
                        $$->nodeAttr.val = longK;
                        printf("Criado nó declarNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | FLOAT
                    {
                        $$ = createNode(declarNK);
                        $$->nodeAttr.val = floatK;
                        printf("Criado nó declarNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | DOUBLE
                    {
                        $$ = createNode(declarNK);
                        $$->nodeAttr.val = doubleK;
                        printf("Criado nó declarNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | SIGNED
                | UNSIGNED //{ $$ = "UNSIGNED"; }
                | STRUCT //{ $$ = "STRUCT"; }
                | UNION //{ $$ = "UNION"; }
                | ENUM //{ $$ = "ENUM"; }
                ;

storage_modifier: AUTO
                | STATIC
                | REGISTER
                | EXTERN
                | TYPEDEF
                ;

assign_operator : ASSIGN
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assignK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_AND
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_andK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_DIV
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_divK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_LEFT_SHIFT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_left_shiftK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_MINUS
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_minusK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_MULT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_multK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_OR
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_orK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_PERCENT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_percentK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_PLUS
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_plusK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_RIGHT_SHIFT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_right_shiftK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                | ASSIGN_XOR
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = assign_xorK;
                        printf("Criado nó opNK com tipo %d\n", $$->nodeAttr.val);
                    }
                ;

unary_operator : PLUS
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | MINUS
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | ASTERISK
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | BIT_AND
                    {
                        createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | LOGIC_NOT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | BIT_NOT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                ;

logical_operator : LOGIC_AND
    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | LOGIC_NOT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | LOGIC_OR
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | GREATER_THAN
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | GREATER_THAN_EQUAL
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | SMALLER_THAN
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | SMALLER_THAN_EQUAL
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | EQUAL
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | DIFFERENT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | BIT_AND
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | BIT_NOT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | BIT_OR
                    {
                        createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | BIT_XOR
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | RIGHT_SHIFT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = minusK;
                        printf("AddSubExp: -\n");
                    }
                | LEFT_SHIFT
                    {
                        $$ = createNode(opNK);
                        $$->nodeAttr.val = left_shiftK;
                        printf("AddSubExp: -\n");
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
    printf("end parser\n");
    printTree(savedTree);

    if (yyin) fclose(yyin);
    return 0;
}