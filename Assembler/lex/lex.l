%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "globals.h"
#include "a51.tab.h"
%}




/*SYMBOLS*/
_DIGIT          [0-9]
_GP_REG         [R][0-7]
_IDENTIFIER     [A-Za-z_][A-Za-z0-9_]*
_LABEL          {_IDENTIFIER}:
_HEX            [0-9A-Fa-f]+[Hh]
_DECIMAL        {_DIGIT}+[Dd]?
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
_HASH_TAG	 "#"
_AT_SIGN	 "@"
_TWO_DOTS	 ":"



/*Registers*/
_ACC_REG        "A"
_B_REG          "B"
_C_REG          "C"
_AB_REG         "AB"
_DPTR_REG       "DPTR"
_DPH_REG	"DPH"
_DPL_REG	"DPL"
_SP_REG         "SP"
_PC_REG         "PC"


_PSW_REG        "PSW"
_IE_REG		"IE"
_IP_REG		"IP"
_TCON_REG	"TCON"
_TMOD_REG	"TMOD"
_SCON_REG	"SCON"
_SBUF_REG	"SBUF"
_GPIO_PORT       [P][0-3]
_GPIO_PIN	.[0-7]

_GPIO_REG_    	{_GPIO_PORT}{GPIO_PIN}

/*Macros*/
_MPL            "MPL"
_MACRO          "MACRO"s
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

_AT             "AT"

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
_END            "END"
 

/*Instructions*/
_MOV             "MOV"
_MOVC            "MOVC"
_MOVX            "MOVX"

_INC             "INC"
_DEC             "DEC"
_ADD             "ADD"
_ADDC            "ADDC"
_DIV             "DIV"
_SUBB            "SUBB"
_MUL             "MUL"
_DA              "DA"

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
	/* Comments or Whitespaces */
{_WHITE_SPACE}	{/*IGNORE WHITESPACE*/}
{_LINE_COMMENT}	{/*IGNORE LINECOMMENTS*/}

	/* Instructions */
{_MOV}          {printf("INSTRUCTION: MOV\n");
		return MOV; }
{_MOVC}         {printf("INSTRUCTION: MOVC\n");
		return MOVC; }
{_MOVX}         {printf("INSTRUCTION: MOVX\n");
		return MOVX; }
{_INC}          {printf("INSTRUCTION: INC\n");
		return INC; }
{_DEC}          {printf("INSTRUCTION: DEC\n");
		return DEC; }
{_ADD}          {printf("INSTRUCTION: ADD\n");
		return ADD; }
{_ADDC}         {printf("INSTRUCTION: ADDC\n");
		return ADDC; }
{_SUBB}         {printf("INSTRUCTION: SUBB\n");
		return SUBB; }
{_MUL}          {printf("INSTRUCTION: MUL\n");
		return MUL; }
{_DIV}          {printf("INSTRUCTION: DIV\n");
		return DIV; }
{_DA}           {printf("INSTRUCTION: DA\n");
		return DA; }
{_SETB}         {printf("INSTRUCTION: SETB\n");
		return SETB; }
{_CLR}          {printf("INSTRUCTION: CLR\n");
		return CLR; }
{_CPL}          {printf("INSTRUCTION: CPL\n");
		return CPL; }
{_NOP}          {printf("INSTRUCTION: NOP\n");
		return NOP; }
{_AJMP}         {printf("INSTRUCTION: AJMP\n");
		return AJMP; }
{_LJMP}         {printf("INSTRUCTION: LJMP\n");
		return LJMP; }
{_SJMP}         {printf("INSTRUCTION: SJMP\n");
		return SJMP; }
{_ACALL}        {printf("INSTRUCTION: ACALL\n");
		return ACALL; }
{_LCALL}        { printf("INSTRUCTION: LCALL\n");
		return LCALL; }
{_RET}          { printf("INSTRUCTION: RET\n");
		return RET; }
{_RETI}         { printf("INSTRUCTION: RETI\n");
		return RETI; }
{_JMP}          { printf("INSTRUCTION: JMP\n");
		return JMP; }
{_CJNE}         { printf("INSTRUCTION: CJNE\n");
		return CJNE; }
{_DJNZ}         { printf("INSTRUCTION: DJNZ\n");
		return DJNZ; }
{_JC}           { printf("INSTRUCTION: JC\n");
		return JC; }
{_JNC}          { printf("INSTRUCTION: JNC\n");
		return JNC; }
{_JZ}           { printf("INSTRUCTION: JZ\n");
		return JZ; }
{_JNZ}          { printf("INSTRUCTION: JNZ\n");
		return JNZ; }
{_JB}           { printf("INSTRUCTION: JB\n");
		return JB; }
{_JBC}          { printf("INSTRUCTION: JBC\n");
		return JBC; }
{_JNB}          { printf("INSTRUCTION: JNB\n");
		return JNB; }
{_RR}           { printf("INSTRUCTION: RR\n");
		return RR; }
{_RRC}          { printf("INSTRUCTION: RRC\n");
		return RRC; }
{_RL}           { printf("INSTRUCTION: RL\n");
		return RL; }
{_RLC}          { printf("INSTRUCTION: RLC\n");
		return RLC; }
{_ORL}          { printf("INSTRUCTION: ORL\n");
		return ORL; }
{_XRL}          { printf("INSTRUCTION: XRL\n");
		return XRL; }
{_ANL}          { printf("INSTRUCTION: ANL\n");
		return ANL; }
{_XCH}          { printf("INSTRUCTION: XCH\n");
		return XCH; }
{_XCHL}         { printf("INSTRUCTION: XCHL\n");
		return XCHL; }
{_SWAP}         { printf("INSTRUCTION: SWAP\n");
		return SWAP; }
{_PUSH}         { printf("INSTRUCTION: PUSH\n");
		return PUSH; }
{_POP}          { printf("INSTRUCTION: POP\n");
		return POP; }

	/* Registers */
{_AB_REG}      { printf("REGISTER: A\n REGISTER: B\n");
		return AB; }
{_ACC_REG}      { printf("REGISTER: ACC\n");
		return A; }
{_B_REG}        { printf("REGISTER: B\n");
		return B; }
{_C_REG}        { printf("REGISTER: C\n");
		return C; }
{_DPTR_REG}     { printf("REGISTER: DPTR\n");
		return DPTR; }
{_DPH_REG}      { printf("REGISTER: DPH\n");
		return DPH; }
{_DPL_REG}      { printf("REGISTER: DPL\n");
		return DPL; }
{_SP_REG}       { printf("SP");
		return SP; }
{_PC_REG}       { printf("REGISTER: PC\n");
		return PC; }


{_PSW_REG}      { printf("REGISTER: PSW\n");
		return PSW; }
{_IE_REG}       { printf("REGISTER: IE\n");
		 return IE; }
{_IP_REG}       { printf("REGISTER: IP\n");
		 return IP; }
{_TCON_REG}     { printf("REGISTER: TCON\n");
		 return TCON; }
{_TMOD_REG}     { printf("REGISTER: TMOD\n");
		 return TMOD; }
{_SCON_REG}     { printf("REGISTER: SCON\n");
		 return SCON; }
{_SBUF_REG}     { printf("REGISTER: SBUF\n");
		 return SBUF; }

{_GPIO_PORT}     { printf("GPIO PORT: P%s\n",yytext);
		 return GPIO_PORT; }
{_GPIO_PIN}     {char *dot = strchr(yytext, '.');
                 int pin_number = atoi(dot + 1);         
                 printf("GPIO PIN: %d\n", pin_number);
                 return GPIO_PIN;}



	/* Numbers */
{_HEX}   	{char *end;
            	char *numstr = strdup(yytext);
            	if (toupper(numstr[strlen(numstr)-1]) == 'H') {
                	numstr[strlen(numstr)-1] = '\0';}
            	long n = strtol(numstr, &end, 16);
            	free(numstr);
            	yylval.num = (int)n;
            	printf("HEX Number: %d(%s)\n", yylval.num, yytext);
            	return NUMBER;}
            	
{_BINARY} 	{char *end;
            	char *numstr = strdup(yytext);
            	if (toupper(numstr[strlen(numstr)-1]) == 'B') {
                	numstr[strlen(numstr)-1] = '\0';}
            	long n = strtol(numstr, &end, 2);
            	free(numstr);
            	yylval.num = (int)n;
            	printf("BINARY Number: %d(%s)\n", yylval.num, yytext);
            	return NUMBER;}
            	
{_DECIMAL} 	{char *end;
	    	char *numstr = strdup(yytext);
	    	if (toupper(numstr[strlen(numstr)-1]) == 'D') {
	        	numstr[strlen(numstr)-1] = '\0';}
	    	long n = strtol(numstr, &end, 10);
	    	free(numstr);
	    	yylval.num = (int)n;
	    	printf("DECIMAL Number: %d(%s)\n", yylval.num, yytext);
	    	return NUMBER;}
	
	
	/* Identifiers */
{_IDENTIFIER}   { printf("IDENTIFIER: %s\n", yytext);
		 yylval.str = yytext; //isto não vai dar (CORRIGIR)
		 return IDENTIFIER; }



	/* Symbols & Operators */
{_HASH_TAG}    	{ printf("#\n");
		 return HASH_TAG; }
{_AT_SIGN}   	{ printf("@\n");
		 return AT_SIGN; }

{_OP_PLUS}      {printf("OPERAND: +\n");
		return OP_PLUS; }
{_OP_MINUS}     {printf("OPERAND: -\n");
		return OP_MINUS; }
{_OP_MUL}       {printf("OPERAND: *\n");
		return OP_MUL; }
{_OP_DIV}       {printf("OPERAND: /\n");
		return OP_DIV; }
{_OP_AND}       {printf("OPERAND: &\n");
		return OP_AND; }

{_COMMA}          { printf("COMMA\n");
		   return COMMA; }
{_OP_OPEN_PAREN}  { printf("(\n");
		   return OP_OPEN_PAREN; }
{_OP_CLOSE_PAREN} { printf("(\n");
		   return OP_CLOSE_PAREN; }


.                { /* Ignore unrecognized characters */ }


%%


int yywrap(){return 1;}

int main(int argc, char **argv)
{
        if(argc > 1) 
                yyin = fopen(argv[1],"r");
        yylex();

        return 0;
}



