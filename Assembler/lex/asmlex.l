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
_NUMBER _DECIMAL|_HEX|_BINARY

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
_ACC_REG        "A"|"a"
_B_REG          "B"|"b"
_DPTR_REG       "DPTR"|"dptr"
_SP_REG         "SP"|"sp"
_PC_REG         "PC"|"pc"
_PSW_REG        "PSW"|"psw"

/*Macros*/
_MPL            "MPL"|"mpl"
_MACRO          "MACRO"|"macro"
_NOMPL          "NOMPL"|"nompl"
_NOMACRO        "NOMACRO"|"nomacro"

_EXITM          "EXITM"|"exitm"
_ENDM           "ENDM"|"endm"        
_LOCAL          "LOCAL"|"local"
_REPT           "REPT"|"rept"
_IRP            "IRP"|"irp"
_IRPC           "IRPC"|"irpc"

_EVAL           "EVAL"|"eval"
_REPEAT         "REPEAT"|"repeat"
_SUBSTR         "SUBSTR"|"substr"
_WHILE          "WHILE"|"while"
_EXIT           "EXIT"|"exit"

_IN             "IN"|"in"
_OUT            "OUT"|"out"

_METACHAR       "METACHAR"|"metachar"
_SET            "SET"|"set"  

_EOS            "EOS"|"eos"
_NES            "NES"|"nes"
_LTS            "LTS"|"lts"
_LES            "LES"|"les"
_GTS            "GTS"|"gts"
_GES            "GES"|"ges"

_LEN            "LEN"|"len"       
_MATCH          "MATCH"|"match"       



/*Directives*/
_ORG            "ORG"|"org"
_USING          "USING"|"using"

_IF             "IF"|"if"       
_ELSE           "ELSE"|"else"
_ELSIF          "ELSIF"|"elsif"
_ENDIF          "ENDIF"|"endif"

_DB             "DB"|"db" 
_DW             "DW"|"dw" 
_DBIT           "DBIT"|"dbit"
_DS             "DS"|"ds"

_EXTRN          "EXTRN"|"extrn"
_NAME           "NAME"|"name"
_PUBLIC         "PUBLIC"|"public"

_BSEG           "BSEG"|"bseg"
_CSEG           "CSEG"|"cseg"
_DSEG           "DSEG"|"dseg"
_ISEG           "ISEG"|"iseg"


_BIT            "BIT"|"bit"         
_CODE           "CODE"|"code"        
_DATA           "DATA"|"data"        
_EQU            "EQU"|"equ"         
_IDATA          "IDATA"|"idata"       
_SBIT           "SBIT"|"sbit"          
_SFR            "SFR"|"sfr"         
_SFR16          "SFR16"|"sfr16"       
_XDATA          "XDATA"|"xdata"      

_ERROR_         "_ERROR_"|"_error_"     
_WARNING_       "_WARNING_"|"_warning_"   
_END            "END"|"end"         


/*Instructions*/
_MOV            "MOV"|"mov"        
_MOVC           "MOVC"|"movc"      
_MOVX           "MOVX"|"movx"       

_INC            "INC"|"inc"
_DEC            "DEC"|"dec"
_ADD            "ADD"|"add"
_ADDC           "ADDC"|"addc"
_DIV            "DIV"|"div"
_SUBB           "SUBB"|"subb"
_MUL            "MUL"|"mul"
_DA             "DA"|"da"

_SETB           "SETB"|"setb"
_CLR            "CLR"|"clr"
_CPL            "CPL"|"cpl"

_NOP            "NOP"|"nop"
_AJMP           "AJMP"|"ajmp"
_LJMP           "LJMP"|"ljmp"
_SJMP           "SJMP"|"sjmp"
_ACALL          "ACALL"|"acall"
_LCALL          "LCALL"|"lcall"
_RET            "RET"|"ret"
_RETI           "RETI"|"reti"
_JMP            "JMP"|"jmp"
_CJNE           "CJNE"|"cjne"
_DJNZ           "DJNZ"|"djnz"
_JC             "JC"|"jc"
_JNC            "JNC"|"jnc"
_JZ             "JZ"|"jz"
_JNZ            "JNZ"|"jnz"
_JB             "JB"|"jb"
_JBC            "JBC"|"jbc"
_JNB            "JNB"|"jnb"

_RR             "RR"|"rr"
_RRC            "RRC"|"rrc"
_RL             "RL"|"rl"
_RLC            "RLC"|"rlc"
_ORL            "ORL"|"orl"
_XRL            "XRL"|"xrl"
_ANL            "ANL"|"anl"
_XCH            "XCH"|"xch"
_XCHL           "XCHL"|"xchl"
_SWAP           "SWAP"|"swap"
_PUSH           "PUSH"|"push"
_POP            "POP"|"pop"


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

