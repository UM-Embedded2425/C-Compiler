
%{
        #include <stdlib.h>
       
        #include "ast.h"
        #include "parser.tab.h"
%}

/* Preprocessor directives */
_preprocess_hash       "#"
_preprocess_define     "#define"
_preprocess_include    "#include"
_preprocess_ifdef      "#ifdef"
_preprocess_ifndef     "#ifndef"
_preprocess_if         "#if"
_preprocess_else       "#else"
_preprocess_elif       "#elif"
_preprocess_endif      "#endif"
_preprocess_undef      "#undef"
_preprocess_error      "#error"
_preprocess_line       "#line"
_preprocess_pragma     "#pragma"

_line_comment 		  "//".*
_multiline_comment_start  "/*"
_multiline_comment_end    "*/"

_digit          [0-9]
_binary_number	0[bB][01]+
_octal_number	0[0-7]+
_hex_number 	0[xX][0-9a-fA-F]+
_number         (0|[1-9][0-9]*)
_float_number   {_digit}*"."{_digit}+

_letter         [a-zA-Z_]
_identifier     {_letter}({_letter}|{_number})*
_string ["]([^"\\\n]|\\.|\\\n)*["]
/*_char '([^'\\\n]|\\.)' char de tipo e char de 'A'*/

_newline        \n
_white_space    [ \t]+

 /* Para reconhecer um identificador invalido, que comece com número
          Ex: 5h7, 3z, 67j */
_invalid_sequence ([0-9]+{_letter}[a-zA-Z0-9_]*)

_auto           "auto"
_bool          "bool"
_break          "break"
_case           "case"
_char           "char"
_const          "const"
_continue       "continue"
_default        "default"
_do             "do"
_double         "double" 
_else           "else"
_enum           "enum"
_extern         "extern"
_float          "float"
_for            "for"
_goto           "goto"
_if             "if"
_int            "int"
_long           "long"
_register       "register"
_return         "return"
_short          "short"
_signed         "signed"
_sizeof         "sizeof"
_static         "static"
_struct         "struct"
_switch         "switch"
_typedef        "typedef"
_union          "union"
_unsigned       "unsigned"
_void           "void"
_volatile       "volatile"
_while          "while"
__Packed        "_Packed"


_open_paren     "("
_close_paren    ")"
_open_square    "["
_close_square   "]"
_open_curly     "{"
_close_curly    "}"
_semicolon      ";"
_comma          ","
_dot            "\."
_arrow          "->"
_asterisk       "*"
_plus           "+"
_inc		"++"
_minus          "-"
_dec		"--"
_div		"/"
_mod		"%"
_bit_and        "&"
_bit_xor        "^"
_bit_or         "|"
_bit_not	"~"
_bit_left_shift "<<"
_bit_right_shift ">>"
_logical_and	"&&"
_logical_or	"||"
_logical_not	"!"
_ternary        "\?"
_greater_than   ">"
_greater_equal  ">="
_smaller_than   "<"
_smaller_equal  "<="
_equal          "=="
_different      "!="
_assign         "="
_assign_plus    "+="
_assign_minus   "-="
_assign_mult    "*="
_assign_div     "/="
_assign_mod     "%="
_assign_and     "&="
_assign_or      "|="
_assign_xor     "^="
_assign_left_shift "<<="
_assign_right_shift ">>="
_two_dots       ":"

_apostrophe 	"'"
_quotation_mark \"

%%

{_preprocess_hash}        { return PREPROCESS_HASH; }
{_preprocess_define}      { return PREPROCESS_DEFINE; }
{_preprocess_include}     { return PREPROCESS_INCLUDE; }
{_preprocess_ifdef}       { return PREPROCESS_IFDEF; }
{_preprocess_ifndef}      { return PREPROCESS_IFNDEF; }
{_preprocess_if}          { return PREPROCESS_IF; }
{_preprocess_else}        { return PREPROCESS_ELSE; }
{_preprocess_elif}        { return PREPROCESS_ELIF; }
{_preprocess_endif}       { return PREPROCESS_ENDIF; }
{_preprocess_undef}       { return PREPROCESS_UNDEF; }
{_preprocess_error}       { return PREPROCESS_ERROR; }
{_preprocess_line}        { return PREPROCESS_LINE; }
{_preprocess_pragma}      { return PREPROCESS_PRAGMA; }


{_line_comment} {
    int c;
    while ((c = input()) != '\n' && c != 0);
}
{_multiline_comment_start} {
    int c, prev = 0;
    while ((c = input()) != 0) {
        if (prev == '*' && c == '/') break;
        prev = c;
    }
}

 /* String and character literals */
{_apostrophe}       { return APOSTROPHE; }
{_quotation_mark}   { return QUOTATION_MARK; }

 /* C Keywords */
{_auto}        { return AUTO; }
{_bool}       { return BOOL; }
{_break}       { return BREAK; }
{_case}        { return CASE; }
{_char}        { return CHAR; }
{_const}       { return CONST; }
{_continue}    { return CONTINUE; }
{_default}     { return DEFAULT; }
{_do}          { return DO; }
{_double}      { return DOUBLE; }
{_else}        { return ELSE; }
{_enum}        { return ENUM; }
{_extern}      { return EXTERN; }
{_float}       { return FLOAT; }
{_for}         { return FOR; }
{_goto}        { return GOTO; }
{_if}          { return IF; }
{_int}         { return INT; }
{_long}        { return LONG; }
{_register}    { return REGISTER; }
{_return}      { return RETURN; }
{_short}       { return SHORT; }
{_signed}      { return SIGNED; }
{_sizeof}      { return SIZEOF; }
{_static}      { return STATIC; }
{_struct}      { return STRUCT; }
{_switch}      { return SWITCH; }
{_typedef}     { return TYPEDEF; }
{_union}       { return UNION; }
{_unsigned}    { return UNSIGNED; }
{_void}        { return VOID; }
{_volatile}    { return VOLATILE; }
{_while}       { return WHILE; }
{__Packed}     { return PACKED; }

 /* Symbols and Operators */
{_open_paren}       { return OPEN_PAREN; }
{_close_paren}      { return CLOSE_PAREN; }
{_open_square}      { return OPEN_SQUARE; }
{_close_square}     { return CLOSE_SQUARE; }
{_open_curly}       { return OPEN_CURLY; }
{_close_curly}      { return CLOSE_CURLY; }
{_semicolon}        { return SEMICOLON; }
{_comma}            { return COMMA; }
{_dot}              { return DOT; }
{_arrow}            { return ARROW; }
{_asterisk}         { return ASTERISK; }
{_plus}            { return PLUS; }
{_inc}             { return PLUSPLUS; }
{_minus}           { return MINUS; }
{_dec}             { return MINUSMINUS; }
{_div}             { return RIGHT_SLASH; }
{_mod}             { return PERCENT; }
{_bit_and}         { return BIT_AND; }
{_bit_or}          { return BIT_OR; }
{_bit_xor}         { return BIT_XOR; }
{_bit_not}         { return BIT_NOT; }
{_bit_left_shift}  { return LEFT_SHIFT; }
{_bit_right_shift} { return RIGHT_SHIFT; }
{_logical_and}     { return LOGIC_AND; }
{_logical_or}      { return LOGIC_OR; }
{_logical_not}     { return LOGIC_NOT; }
{_ternary}         { return TERNARY; }
{_greater_than}    { return GREATER_THAN; }
{_greater_equal}   { return GREATER_THAN_EQUAL; }
{_smaller_than}    { return SMALLER_THAN; }
{_smaller_equal}   { return SMALLER_THAN_EQUAL; }
{_equal}          { return EQUAL; }
{_different}      { return DIFFERENT; }
{_assign}         { return ASSIGN; }
{_assign_plus}    { return ASSIGN_PLUS; }
{_assign_minus}   { return ASSIGN_MINUS; }
{_assign_mult}    { return ASSIGN_MULT; }
{_assign_div}     { return ASSIGN_DIV; }
{_assign_mod}     { return ASSIGN_PERCENT; }
{_assign_and}     { return ASSIGN_AND; }
{_assign_or}      { return ASSIGN_OR; }
{_assign_xor}     { return ASSIGN_XOR; }
{_assign_left_shift} { return ASSIGN_LEFT_SHIFT; }
{_assign_right_shift} { return ASSIGN_RIGHT_SHIFT; }
{_two_dots}       { return TWO_DOTS; }

 /* Literals and Identifiers */

{_hex_number} {
    yylval.val = strtol(yytext, NULL, 16);
    return NUMBER;
}
{_octal_number} {
    yylval.val = strtol(yytext, NULL, 8);
    return NUMBER;
}
{_binary_number} {
    yylval.val = strtol(yytext + 2, NULL, 2);  // Skip '0b' or '0B' prefix
    return NUMBER;
}
{_number} {
    yylval.val = strtol(yytext, NULL, 10);
    return NUMBER;
}
{_float_number} {
    yylval.fval = strtod(yytext, NULL);
    return FLOAT_NUMBER;
}
{_identifier}     { yylval.string = strdup(yytext); return ID; }
{_letter}         { return LETTER; }

 /* Invalid sequences */
{_invalid_sequence} { printf("%s invalid.\n", yytext); }

 /* Ignore whitespace and newlines */
{_white_space}  { /* ignore */ }
{_newline}      { /* ignore */ }

 /* Handle end-of-file */
<<EOF>> { return TOK_EOF; }

 /* Catch-all for unrecognized characters */ 
. { printf("Unexpected token: %s\n", yytext); }
%%

int yywrap(){return 1;}

/*int main(int argc, char **argv)
{
        if(argc)
                yyin = fopen(argv[1],"r");
        yylex();

        return 0;
}*/
