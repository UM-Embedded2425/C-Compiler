
%{
        #include <stdlib.h>
        #include "bison_test.tab.h"
%}


_auto           "auto"
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



_digit          [0-9]
_float_number  [0-9]*\.[0-9]+
_number         {_digit}+
_letter         [a-zA-Z]
_identifier     {_letter}({_letter}|{_digit})*
_newline        \n
_white_space    [ \t]+

%%



{_break}        { return BREAK; }
{_case}         { return CASE; }
{_char}         { return CHAR; }
{_const}        { return CONST; }
{_continue}     { return CONTINUE; }
{_default}      { return DEFAULT; }
{_do}           { return DO; }
{_double}       { return DOUBLE; }
{_else}         { return ELSE; }
{_enum}         { return ENUM; }
{_extern}       { return EXTERN; }
{_float}        { return FLOAT; }
{_for}          { return FOR; }
{_goto}         { return GOTO; }
{_if}           { return IF; }
{_int}          { return INT; }
{_long}         { return LONG; }
{_register}     { return REGISTER; }
{_return}       { return RETURN; }
{_short}        { return SHORT; }
{_signed}       { return SIGNED; }
{_sizeof}       { return SIZEOF; }
{_static}       { return STATIC; }
{_struct}       { return STRUCT; }
{_switch}       { return SWITCH; }
{_typedef}      { return TYPEDEF; }
{_union}        { return UNION; }
{_unsigned}     { return UNSIGNED; }
{_void}         { return VOID; }
{_volatile}     { return VOLATILE; }
{_while}        { return WHILE; }
{__Packed}       { return PACKED; }

{_open_paren}    { return OPEN_PAREN; }
{_close_paren}   { return CLOSE_PAREN; }
{_open_square}   { return OPEN_SQUARE; }
{_close_square}  { return CLOSE_SQUARE; }
{_open_curly}    { return OPEN_CURLY; }
{_close_curly}   { return CLOSE_CURLY; }
{_semicolon}     { return SEMICOLON; }



{_number}       {return NUMBER;}
{_letter}       {return LETTER;}
{_identifier}  {return ID;}
{_white_space}
{_newline}
<<EOF>> {return 0;}
.               {printf("%s ignored\n", yytext);}

%%

int yywrap(){return 1;}


