
%{
        #include <stdlib.h>
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
_number         [1-9][0-9]*
_identifier    {_letter}({_letter}|{_digit})*
_letter         [a-zA-Z_]
_newline        \n
_white_space    [ \t]+

 /* Para reconhecer um identificador invalido, que comece com número
          Ex: 5h7, 3z, 67j */
_invalid_sequence ([0-9]+{_letter}[a-zA-Z0-9_]*) 


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

{_preprocess_hash}        { printf("%s hash\n", yytext);}
{_preprocess_define}      { printf("%s define\n", yytext);}
{_preprocess_include}     { printf("%s include\n", yytext);}
{_preprocess_ifdef}       { printf("%s ifdef\n", yytext);}
{_preprocess_ifndef}      { printf("%s ifndef\n", yytext);}
{_preprocess_if}          { printf("%s if\n", yytext);}
{_preprocess_else}        { printf("%s else\n", yytext);}
{_preprocess_elif}        { printf("%s elif\n", yytext);}
{_preprocess_endif}       { printf("%s endif\n", yytext);}
{_preprocess_undef}       { printf("%s undef\n", yytext);}
{_preprocess_error}       { printf("%s error\n", yytext);}
{_preprocess_line}        { printf("%s line\n", yytext);}
{_preprocess_pragma}      { printf("%s pragma\n", yytext);}

{_line_comment} {
    /* Consume everything until newline */
    int c;
    while ((c = input()) != '\n' && c != 0);
    printf("Single-line comment detected\n");
}

{_multiline_comment_start} {
    int c, prev = 0;
    while ((c = input()) != 0) {
        if (prev == '*' && c == '/') break; 
          prev = c;
    }
    if (c == 0) {
        printf("Unterminated comment detected!\n");
    } else {
        printf("Multi-line comment detected\n");
    }
}
{_multiline_comment_end} { printf("%s end of comment\n", yytext);}
{_apostrophe}  { printf("%s apostrophe\n", yytext);}
{_quotation_mark} { printf("%s quotation mark\n", yytext);}


{_auto}		{printf("%s auto\n", yytext);}
{_break}        {printf("%s break\n", yytext);}
{_case}         {printf("%s case\n", yytext);}
{_char}         {printf("%s char\n", yytext);}
{_const}        {printf("%s const\n", yytext);}
{_continue}     {printf("%s continue\n", yytext);}
{_default}      {printf("%s default\n", yytext);}
{_do}           {printf("%s do\n", yytext);}
{_double}       {printf("%s double\n", yytext);} 
{_else}         {printf("%s else\n", yytext);}
{_enum}         {printf("%s enum\n", yytext);}
{_extern}       {printf("%s extern\n", yytext);}
{_float}        {printf("%s float\n", yytext);}
{_for}          {printf("%s for\n", yytext);}
{_goto}         {printf("%s goto\n", yytext);}
{_if}           {printf("%s if\n", yytext);}
{_int}          {printf("%s int\n", yytext);}
{_long}         {printf("%s long\n", yytext);}
{_register}     {printf("%s register\n", yytext);}
{_return}       {printf("%s return\n", yytext);}
{_short}        {printf("%s short\n", yytext);}
{_signed}       {printf("%s signed\n", yytext);}
{_sizeof}       {printf("%s sizeof\n", yytext);}
{_static}       {printf("%s static\n", yytext);}
{_struct}       {printf("%s struct\n", yytext);}
{_switch}       {printf("%s switch\n", yytext);}
{_typedef}      {printf("%s typedef\n", yytext);}
{_union}        {printf("%s union\n", yytext);}
{_unsigned}     {printf("%s unsigned\n", yytext);}
{_void}         {printf("%s void\n", yytext);}
{_volatile}     {printf("%s volatile\n", yytext);}
{_while}        {printf("%s while\n", yytext);}
{__Packed}      {printf("%s __Packed\n", yytext);}


{_open_paren}   {printf("%s (\n", yytext);}
{_close_paren}  {printf("%s )\n", yytext);}
{_open_square}  {printf("%s [\n", yytext);}
{_close_square} {printf("%s ]\n", yytext);}
{_open_curly}   {printf("%s {\n", yytext);}
{_close_curly}  {printf("%s }\n", yytext);}
{_semicolon}    {printf("%s semicolon\n", yytext);}
{_comma}        {printf("%s comma\n", yytext);}
{_dot}          {printf("%s dot\n", yytext);}
{_arrow}        {printf("%s arrow\n", yytext);}
{_asterisk}     {printf("%s asterisk\n",yytext);}
{_plus}         {printf("%s plus\n",yytext);}
{_inc}          {printf("%s increment\n", yytext);}
{_minus}        {printf("%s minus\n",yytext);}
{_dec}          {printf("%s decrement\n", yytext);}
{_div}          {printf("%s division\n", yytext);}
{_mod}          {printf("%s modulus\n", yytext);}
{_bit_and}      {printf("%s bit_and\n",yytext);}
{_bit_or}       {printf("%s bit_or\n",yytext);}
{_bit_xor}      {printf("%s bit_xor\n",yytext);}
{_bit_not}      {printf("%s bitwise_not\n", yytext);}
{_bit_left_shift} {printf("%s bitwise_left_shift\n", yytext);}
{_bit_right_shift} {printf("%s bitwise_right_shift\n", yytext);}
{_logical_and}  {printf("%s logical_and\n", yytext);}
{_logical_or}   {printf("%s logical_or\n", yytext);}
{_logical_not}  {printf("%s logical_not\n", yytext);}
{_ternary}      {printf("%s ternary\n", yytext);}
{_greater_than} {printf("%s greater_than\n", yytext);}
{_greater_equal} {printf("%s greater_equal\n", yytext);}
{_smaller_than} {printf("%s smaller_than\n", yytext);}
{_smaller_equal} {printf("%s smaller_equal\n", yytext);}
{_equal}        {printf("%s equal\n", yytext);}
{_different}    {printf("%s different\n", yytext);}
{_assign}       {printf("%s assign\n", yytext);}
{_assign_plus}  {printf("%s assign_plus\n", yytext);}
{_assign_minus} {printf("%s assign_minus\n", yytext);}
{_assign_mult}  {printf("%s assign_mult\n", yytext);}
{_assign_div}   {printf("%s assign_div\n", yytext);}
{_assign_mod}   {printf("%s assign_mod\n", yytext);}
{_assign_and}   {printf("%s assign_and\n", yytext);}
{_assign_or}    {printf("%s assign_or\n", yytext);}
{_assign_xor}   {printf("%s assign_xor\n", yytext);}
{_assign_left_shift} {printf("%s assign_left_shift\n", yytext);}
{_assign_right_shift} {printf("%s assign_right_shift\n", yytext);}
{_two_dots}     {printf("%s two_dots\n", yytext);}

{_number}       {printf("%s number\n", yytext);}
{_hex_number}	{printf("%s hex: %ld\n", yytext, strtol(yytext, NULL, 16));}
{_octal_number}	{printf("%s octal: %ld\n", yytext, strtol(yytext, NULL, 8));}
{_binary_number} {printf("%s binary: %ld\n", yytext, strtol(yytext + 2, NULL, 2));}
{_identifier}   {printf("%s identifier\n", yytext);}
{_letter}       {printf("%s letter\n", yytext);}

{_invalid_sequence} {printf("%s invalid.\n", yytext);}

{_white_space}	{ /* ignore */ }
{_newline}	{ /* ignore */ }

<<EOF>>         {printf("EOF \n"); return 0;}
.               {printf("%s ignored\n", yytext);}

%%

int yywrap(){return 1;}

int main(int argc, char **argv)
{
        if(argc)
                yyin = fopen(argv[1],"r");
        yylex();

        return 0;
}
