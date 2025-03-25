%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
%}

/*SYMBOLS*/
_DIGIT          [0-9]
_GP_REG         [R][0-7]
_IMMEDIATE      #[0-9]+
_INDIRECT       @{_GP_REG}
_IDENTIFIER     [A-Za-z_][A-Za-z0-9_]*
_LABEL          {_IDENTIFIER}:               
_DECIMAL        {_DIGIT}+[Dd]?
_HEX            0x[0-9A-Fa-f]+|[0-9A-Fa-f][Hh]
_BINARY         [01]+[Bb]     

_COMMA          ","
_LINE_COMMENT   [;].*
_WHITE_SPACE    [ \t\n] 

_OP_PLUS         "+"
_OP_MINUS        "-"
_OP_MUL          "*"
_OP_DIV          "/"
_OP_NULL         "NUL"
_OP_AND          "&"
_OP_ANG_BRACKETS <{_IDENTIFIER}>
_OP_PERCENT      "%"
_OP_EXCLAMATION  "!"
_OP_OPEN_PAREN   "("
_OP_CLOSE_PAREN  ")"
_APOSTROPHE 	 "'"

/*Registers*/
_ACC_REG        "A"
_B_REG          "B"
_DPTR_REG       "DPTR"
_SP_REG         "SP"
_PC_REG         "PC"
_PSW_REG        "PSW"

/*Macros*/
_MPL            "MPL"
_MACRO          "MACRO"
_NOMPL          "NOMPL"
_NOMACRO        "NOMACRO"

_EXITM          "EXITM"
_ENDM           "ENDM"        
_LOCAL          "LOCAL"
_REPT           "REPT"
_IRP            "IRP"
_IRPC           "IRPC"

_EVAL            "EVAL"
_REPEAT          "REPEAT"
_SUBSTR          "SUBSTR"
_WHILE           "WHILE"
_EXIT            "EXIT"

_IN              "IN"
_OUT             "OUT"

_METACHAR        "METACHAR"
_SET             "SET"  

_EOS             "EOS"
_NES             "NES"
_LTS             "LTS"
_LES             "LES"
_GTS             "GTS"
_GES             "GES"

_LEN             "LEN"       
_MATCH           "MATCH"       



/*Directives*/
_ORG            "ORG"
_USING          "USING"

_IF             "IF"       
_ELSE           "ELSE"
_ELSIF          "ELSIF"
_ENDIF          "ENDIF"

_DB             "DB" 
_DW             "DW" 
_DBIT           "DBIT"
_DS             "DS"

_EXTRN          "EXTRN"
_NAME           "NAME"
_PUBLIC         "PUBLIC"

_BSEG           "BSEG"
_CSEG           "CSEG"
_DSEG           "DSEG"
_ISEG           "ISEG"


_BIT            "BIT"         
_CODE           "CODE"        
_DATA           "DATA"        
_EQU            "EQU"         
_IDATA          "IDATA"       
_SBIT           "SBIT"          
_SFR            "SFR"         
_SFR16          "SFR16"       
_XDATA          "XDATA"      

_ERROR_         "_ERROR_"     
_WARNING_       "_WARNING_"   
_END             "END"         


/*Instructions*/
_MOV             "MOV"        
_MOVC            "MOVC"      
_MOVX            "MOVX"       

_INC              "INC"
_DEC              "DEC"
_ADD              "ADD"
_ADDC             "ADDC"
_DIV              "DIV"
_SUBB             "SUBB"
_MUL              "MUL"
_DA               "DA"

_SETB            "SETB"
_CLR             "CLR"
_CPL             "CPL"

_NOP             "NOP"
_AJMP            "AJMP"
_LJMP            "LJMP"
_SJMP            "SJMP"
_ACALL           "ACALL"
_LCALL           "LCALL"
_RET             "RET"
_RETI            "RETI"
_JMP             "JMP"
_CJNE            "CJNE"
_DJNZ            "DJNZ"
_JC              "JC"
_JNC             "JNC"
_JZ              "JZ"
_JNZ             "JNZ"
_JB              "JB"
_JBC             "JBC"
_JNB             "JNB"

_RR              "RR"
_RRC             "RRC"
_RL              "RL"
_RLC             "RLC"
_ORL             "ORL"
_XRL             "XRL"
_ANL             "ANL"
_XCH             "XCH"
_XCHL            "XCHL"
_SWAP            "SWAP"
_PUSH            "PUSH"
_POP             "POP"


%%

{_LABEL}       { printf("LABEL: %s\n", yytext);}
{_HEX}         { printf("HEX Number:%ld (%s)\n", strtol(yytext, NULL, 16),yytext);}
{_BINARY}      { printf("BINARY Number: %ld(%s)\n", strtol(yytext, NULL, 2),yytext);}
{_DECIMAL}     { printf("DECIMAL Number: %s\n", yytext);}


{_COMMA}          { /*ignore comma*/ }
{_LINE_COMMENT}   { /*ignore comment*/ } 
{_WHITE_SPACE}    { /*ignore whitespace*/ }      


{_OP_PLUS}              { printf("OPERAND: PLUS\n"); }             
{_OP_MINUS}             { printf("OPERAND: MINUS\n"); }
{_OP_MUL}               { printf("OPERAND: MUL\n"); }
{_OP_DIV}               { printf("OPERAND: DIV\n"); }
{_OP_NULL}              { printf("OPERAND: NULL\n"); }
{_OP_AND}               { printf("OPERAND: AND\n"); }
{_OP_ANG_BRACKETS}      { printf("OPERAND: ANGLED BRACKETS\n"); }
{_OP_PERCENT}           { printf("OPERAND: PERCENT\n"); }
{_OP_EXCLAMATION}       { printf("OPERAND: EXCLAMATION\n"); }
{_OP_OPEN_PAREN}        { printf("OPERAND: OPEN PARENTISIS\n"); }
{_OP_CLOSE_PAREN}       { printf("OPERAND: CLOSE PARENTISIS\n"); }
{_APOSTROPHE} 	        { printf("OPERAND: APOSTROPHE\n"); }





{_ACC_REG}     { printf("REGISTER: %s\n", yytext); }
{_B_REG}       { printf("REGISTER: %s\n", yytext); }
{_GP_REG}      { printf("REGISTER: R%c\n", toupper(yytext[1])); }
{_DPTR_REG}    { printf("REGISTER: %s\n", yytext); }    
{_SP_REG}      { printf("REGISTER: %s\n", yytext); }      
{_PC_REG}      { printf("REGISTER: %s\n", yytext); }
{_PSW_REG}     { printf("REGISTER: %s\n", yytext); }





{_MPL}            { printf("Macro Processing: %s\n", yytext);}
{_MACRO}          { printf("Macro Processing: %s\n", yytext);}
{_NOMPL}          { printf("Macro Processing: %s\n", yytext);}
{_NOMACRO}        { printf("Macro Processing: %s\n", yytext);}

{_EXITM}          { printf("Macro Processing: %s\n", yytext);}
{_ENDM}           { printf("Macro Processing: %s\n", yytext);}        
{_LOCAL}          { printf("Macro Processing: %s\n", yytext);}
{_REPT}           { printf("Macro Processing: %s\n", yytext);}
{_IRP}            { printf("Macro Processing: %s\n", yytext);}
{_IRPC}           { printf("Macro Processing: %s\n", yytext);}

{_EVAL}           { printf("Macro Processing: %s\n", yytext);}
{_REPEAT}         { printf("Macro Processing: %s\n", yytext);}
{_SUBSTR}         { printf("Macro Processing: %s\n", yytext);}
{_WHILE}          { printf("Macro Processing: %s\n", yytext);}
{_EXIT}           { printf("Macro Processing: %s\n", yytext);}

{_IN}             { printf("Macro Processing: %s\n", yytext);}
{_OUT}            { printf("Macro Processing: %s\n", yytext);}

{_METACHAR}       { printf("Macro Processing: %s\n", yytext);}

{_EOS}             { printf("Macro Processing: %s\n", yytext);}
{_NES}             { printf("Macro Processing: %s\n", yytext);}
{_LTS}             { printf("Macro Processing: %s\n", yytext);}
{_LES}             { printf("Macro Processing: %s\n", yytext);}
{_GTS}             { printf("Macro Processing: %s\n", yytext);}
{_GES}             { printf("Macro Processing: %s\n", yytext);}

{_LEN}             { printf("Macro Processing: %s\n", yytext);}       
{_MATCH}           { printf("Macro Processing: %s\n", yytext);} 




{_ORG}         { printf("Directive: %s\n", yytext);}
{_USING}       { printf("Directive: %s\n", yytext);}

{_IF}          { printf("DIRECTIVE: %s\n", yytext); }
{_ELSE}        { printf("DIRECTIVE: %s\n", yytext); }
{_ELSIF}       { printf("DIRECTIVE: %s\n", yytext); }
{_ENDIF}       { printf("DIRECTIVE: %s\n", yytext); }

{_DB}          { printf("DIRECTIVE: %s\n", yytext); }
{_DW}          { printf("DIRECTIVE: %s\n", yytext); }

{_DBIT}        { printf("DIRECTIVE: %s\n", yytext); }
{_DS}          { printf("DIRECTIVE: %s\n", yytext); }

{_EXTRN}       { printf("DIRECTIVE: %s\n", yytext); }
{_NAME}        { printf("DIRECTIVE: %s\n", yytext); }
{_PUBLIC}      { printf("DIRECTIVE: %s\n", yytext); }

{_BSEG}        { printf("DIRECTIVE: %s\n", yytext); }
{_CSEG}        { printf("DIRECTIVE: %s\n", yytext); }
{_DSEG}        { printf("DIRECTIVE: %s\n", yytext); }
{_ISEG}        { printf("DIRECTIVE: %s\n", yytext); }

{_BIT}         { printf("DIRECTIVE: %s\n", yytext); }
{_CODE}        { printf("DIRECTIVE: %s\n", yytext); }
{_DATA}        { printf("DIRECTIVE: %s\n", yytext); }
{_EQU}         { printf("DIRECTIVE: %s\n", yytext); }
{_IDATA}       { printf("DIRECTIVE: %s\n", yytext); }
{_SBIT}        { printf("DIRECTIVE: %s\n", yytext); }
{_SET}         { printf("DIRECTIVE: %s\n", yytext); }
{_SFR}         { printf("DIRECTIVE: %s\n", yytext); }
{_SFR16}       { printf("DIRECTIVE: %s\n", yytext); }
{_XDATA}       { printf("DIRECTIVE: %s\n", yytext); }

{_ERROR_}      { printf("DIRECTIVE: %s\n", yytext); }
{_WARNING_}    { printf("DIRECTIVE: %s\n", yytext); }
{_END}         { printf("DIRECTIVE: %s\n", yytext); }


{_MOV}         { printf("INSTRUCTION: %s\n", yytext); }
{_MOVC}        { printf("INSTRUCTION: %s\n", yytext); }
{_MOVX}        { printf("INSTRUCTION: %s\n", yytext); }

{_INC}         { printf("INSTRUCTION: %s\n", yytext); }
{_DEC}         { printf("INSTRUCTION: %s\n", yytext); }
{_ADD}         { printf("INSTRUCTION: %s\n", yytext); }
{_ADDC}        { printf("INSTRUCTION: %s\n", yytext); }
{_DIV}         { printf("INSTRUCTION: %s\n", yytext); }
{_SUBB}        { printf("INSTRUCTION: %s\n", yytext); }
{_MUL}         { printf("INSTRUCTION: %s\n", yytext); }
{_DA}          { printf("INSTRUCTION: %s\n", yytext); }

{_SETB}        { printf("INSTRUCTION: %s\n", yytext); }
{_CLR}         { printf("INSTRUCTION: %s\n", yytext); }
{_CPL}         { printf("INSTRUCTION: %s\n", yytext); }

{_NOP}         { printf("INSTRUCTION: %s\n", yytext); }
{_AJMP}        { printf("INSTRUCTION: %s\n", yytext); }
{_SJMP}        { printf("INSTRUCTION: %s\n", yytext); }    
{_LJMP}        { printf("INSTRUCTION: %s\n", yytext); }
{_ACALL}       { printf("INSTRUCTION: %s\n", yytext); }
{_LCALL}       { printf("INSTRUCTION: %s\n", yytext); }
{_RET}         { printf("INSTRUCTION: %s\n", yytext); }
{_RETI}        { printf("INSTRUCTION: %s\n", yytext); }
{_JMP}         { printf("INSTRUCTION: %s\n", yytext); }
{_CJNE}        { printf("INSTRUCTION: %s\n", yytext); }
{_DJNZ}        { printf("INSTRUCTION: %s\n", yytext); }
{_JC}          { printf("INSTRUCTION: %s\n", yytext); }
{_JNC}         { printf("INSTRUCTION: %s\n", yytext); }
{_JZ}          { printf("INSTRUCTION: %s\n", yytext); }
{_JNZ}         { printf("INSTRUCTION: %s\n", yytext); }
{_JB}          { printf("INSTRUCTION: %s\n", yytext); }
{_JBC}         { printf("INSTRUCTION: %s\n", yytext); }
{_JNB}         { printf("INSTRUCTION: %s\n", yytext); }

{_RR}          { printf("INSTRUCTION: %s\n", yytext); }
{_RRC}         { printf("INSTRUCTION: %s\n", yytext); }
{_RL}          { printf("INSTRUCTION: %s\n", yytext); }
{_RLC}         { printf("INSTRUCTION: %s\n", yytext); }
{_ORL}         { printf("INSTRUCTION: %s\n", yytext); }
{_XRL}         { printf("INSTRUCTION: %s\n", yytext); }    
{_ANL}         { printf("INSTRUCTION: %s\n", yytext); }
{_XCH}         { printf("INSTRUCTION: %s\n", yytext); }
{_XCHL}        { printf("INSTRUCTION: %s\n", yytext); }
{_SWAP}        { printf("INSTRUCTION: %s\n", yytext); }
{_PUSH}        { printf("INSTRUCTION: %s\n", yytext); }   
{_POP}         { printf("INSTRUCTION: %s\n", yytext); }   

 
{_IMMEDIATE}   { printf("IMMEDIATE: %s\n", yytext); }
{_INDIRECT}    { printf("INDIRECT: %s\n", yytext); }


.             {printf("%s ignored\n", yytext);}


%%

int yywrap(){return 1;}

int main(int argc, char **argv)
{
        if(argc > 1) 
                yyin = fopen(argv[1],"r");
        yylex();

        return 0;
}

