%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "globals.h"
#include "symtab.h"
#include "a51.tab.h"

extern int current_line;
%}

/*SYMBOLS*/
_DIGIT          [0-9]
_HEX_DIGIT		[0-9A-Fa-f]
_GP_REG         [R][0-7]
_A_GP_REG		AR[0-7]|ar[0-7]
_IDENTIFIER     [A-Za-z_][A-Za-z0-9_]*
_HEX	        {_HEX_DIGIT}+[Hh]
_DECIMAL        {_DIGIT}+[Dd]?
_BINARY         [01]+[Bb]
_LABEL {_IDENTIFIER}":"
_ASCII [A-Za-z0-9_ ]
_ASCII_STR \'{_ASCII}+\'
_ASCII_CHAR '{_ASCII}'
_RAM_BIT_ADDRESS 2{_HEX_DIGIT}[Hh]\.[0-7] 

_HASH_TAG	 "#"
_AT_SIGN	 "@"
_TWO_DOTS	 ":"
_COMMA          ","
_LINE_COMMENT   [;].*
_WHITE_SPACE    [ \t] 
_OP_PAR "("
_CL_PAR ")"
_DIVI "/"
_SHIFT_R ">>"
_SHIFT_L "<<"

/*Registers*/
_A_REG			"A"|"a"
_ACC_REG        "ACC"|"acc"
_B_REG          "B"|"b"
_C_REG          "C"|"c"
_AB_REG			"AB"|"ab"	
_DPH_REG		"DPH"|"dph"
_DPL_REG		"DPL"|"dpl"
_SP_REG         "SP"|"sp"
_PC_REG         "PC"|"pc"
_DPTR_REG		"DPTR"|"dptr"

_PSW_REG        "PSW"|"psw"
_IE_REG		    "IE"|"ie"
_IP_REG		    "IP"|"ip"
_TCON_REG	    "TCON"|"tcon"
_TMOD_REG	    "TMOD"|"tmod"
_SCON_REG	    "SCON"|"scon"
_SBUF_REG	    "SBUF"|"sbuf"

_P0_REG		    "P0"|"p0"
_P1_REG		    "P1"|"p1"
_TL0_REG	    "TL0"|"tl0"
_TL1_REG	    "TL1"|"tl1"
_TH0_REG	    "TH0"|"th0"
_TH1_REG	    "TH1"|"th1"

_P0_BIT			{_P0_REG}\.[0-7]
_TCON_BIT		{_TCON_REG}\.[0-7]
_P1_BIT			{_P1_REG}\.[0-7]
_SCON_BIT		{_SCON_REG}\.[0-7]	
_IE_BIT			{_IE_REG}\.[0-7]
_IP_BIT			{_IP_REG}\.[0-7]
_PSW_BIT		{_PSW_REG}\.[0-7]
_ACC_BIT		{_ACC_REG}\.[0-7]
_B_BIT			{_B_REG}\.[0-7]

/*Instructions*/
_ACALL           "ACALL"|"acall"
_ADD             "ADD"|"add"
_ADDC            "ADDC"|"addc"
_AJMP 			 "AJMP"|"ajmp"
_ANL			 "ANL"|"anl"
_CJNE 			 "CJNE"|"cjne"
_CLR			 "CLR"|"clr"
_CPL 			 "CPL"|"cpl"
_DA 			 "DA"|"da"
_DEC 			 "DEC"|"dec"			 	 
_DIV			 "DIV"|"div"
_DJNZ			 "DJNZ"|"djnz"
_INC			 "INC"|"inc"
_JB				 "JB"|"jb"
_JBC			 "JBC"|"jbc"
_JC				 "JC"|"jc"
_JMP			 "JMP"|"jmp"
_JNB			 "JNB"|"jnb"
_JNC			 "JNC"|"jnc"
_JNZ			 "JNZ"|"jnz"
_JZ				 "JZ"|"jz"
_LCALL			 "LCALL"|"lcall"
_LJMP			 "LJMP"|"ljmp"
_MOV			 "MOV"|"mov"
_MOVC			 "MOVC"|"movc"
_MUL			 "MUL"|"mul"
_NOP			 "NOP"|"nop"
_ORL			 "ORL"|"orl"
_POP 			 "POP"|"pop"							 		  	 	
_PUSH			 "PUSH"|"push"
_RET 			 "RET"|"ret"
_RETI			 "RETI"|"reti" 	 
_RL				 "RL"|"rl"
_RLC			 "RLC"|"rlc"	
_RR				 "RR"|"rr"	
_RRC 			 "RRC"|"rrc"
_SETB			 "SETB"|"setb"
_SJMP			 "SJMP"|"sjmp"
_SUBB			 "SUBB"|"subb"
_SWAP			 "SWAP"|"swap"
_XCH			 "XCH"|"xch"
_XCHD			 "XCHD"|"xchd"
_XRL			 "XRL"|"xrl"								

/*Directives*/

_ALIGN			"ALIGN"|"align"
_EVEN			"EVEN"|"even"
_ORG			"ORG"|"org"
_EQU			"EQU"|"equ"
_USING			"USING"|"using"
_DB				"DB"|"db"
_DD  			"DD"|"dd"
_DW 			"DW"|"dw"
_DBIT			"DBIT"|"dbit"
_DS 			"DS"|"ds"
_AT				"AT"|"at"
_CSEG           "CSEG"|"cseg"
_DSEG			"DSEG"|"dseg"
_BSEG			"BSEG"|"bseg"
_ISEG			"ISEG"|"iseg"
_END			"END"|"end"       


%%
	/* Comments or Whitespaces */
{_WHITE_SPACE}	{/*IGNORE WHITESPACE*/}
{_LINE_COMMENT}	{/*IGNORE LINECOMMENTS*/}

\n	{current_line+=1;}

\+ {return SUM;}

- {return MINUS;}

\* {return MULTIPLY;}

{_DIVI} {return DIVISION;}

% {return MODULE;}

= {return EQ;}

\< {return LT;}

\> {return MT;}

{_OP_PAR} {return OP_PAR;}

{_CL_PAR} {return CL_PAR;}

{_SHIFT_L} {return SHIFT_L;}

{_SHIFT_R} {return SHIFT_R;}

{_AT} {return AT;}

	/*Directives*/
{_EQU} {return EQU;}

{_ALIGN} {return ALIGN;}

{_EVEN} {return EVEN;}

{_ORG} {return ORG;}

{_USING} {return USING;}

{_DB} {init_mode = DB_MODE;
		return DB;}

{_DD} {init_mode = DD_MODE;
		return DD;}

{_DW} {init_mode = DW_MODE;
		return DW;}

{_DBIT} {return DBIT;}

{_DS} {return DS;}

{_CSEG} {yylval.segment = CODE_SEGMENT;
		return SEG;}

{_DSEG} {yylval.segment = DATA_SEGMENT;
		return SEG;}

{_ISEG} {yylval.segment = IDATA_SEGMENT;
		return SEG;}

{_BSEG} {yylval.segment = BIT_SEGMENT;
		return SEG;}

{_END} {return END;}

	/* Instructions */

{_ACALL} {
	return ACALL;
}
{_ADD} {
	return ADD; 
}
{_ADDC} {
	return ADDC;
}
{_AJMP}  {
	return AJMP; 
}
{_ANL} {
	return ANL;
}
{_CJNE} {
	return CJNE;
}
{_CLR} {
	return CLR;
}
{_CPL} {
	return CPL;
}
{_DA} {
	return DA;
}
{_DEC} {
	return DEC;
}
{_DIV} {
	return DIV;
}
{_DJNZ} {
	return DJNZ;
}	
{_INC} {
	return INC;
}
{_JB} {
	return JB;
}
{_JBC} {
	return JBC;
}
{_JC} {
	return JC;
}
{_JMP} {
	return JMP;
}			
{_JNB} {
	return JNB;
}
{_JNC} {
	return JNC;
}
{_JNZ} {
	return JNZ;
}
{_JZ} {
	return JZ;
}
{_LCALL} {
	return LCALL;
}
{_LJMP} {
	return LJMP;
}
{_MOV} {
	return MOV;
}
{_MOVC} {
	return MOVC;
}
{_MUL} {
	return MUL;
}
{_NOP} {
	return NOP;
}								
{_ORL} {
	return ORL;
}
{_POP} {
	return POP;
}
{_PUSH} {
	return PUSH;
}
{_RET} {
	return RET;
}
{_RETI} {
	return RETI;
}
{_RL} {
	return RL;
}
{_RLC} {
	return RLC;
}
{_RR} {
	return RR;
}
{_RRC} {
	return RRC;
}
{_SETB} {
	return SETB;
}
{_SJMP} {
	return SJMP;
}
{_SUBB} {
	return SUBB;
}
{_SWAP} {
	return SWAP;
}
{_XCH} {
	return XCH;
}
{_XCHD} {
	return XCHD;
}							
{_XRL} {
	return XRL;
}

	/* Compulsory Name Registers*/
{_A_REG}      { return A; }
{_AB_REG}	  {return AB; } 	
{_C_REG}	  { return C; }	
{_PC_REG}     { return PC; }
{_B_REG}        { yylval.num = B_REG;
		return B; }
{_DPTR_REG}		{return DPTR; }

			/* SFRs */

{_ACC_REG}      { yylval.num = ACC_REG;
		return SFR; }
{_DPH_REG}      { yylval.num = DPH_REG;
		return SFR; }
{_DPL_REG}      { yylval.num = DPL_REG;
		return SFR; }
{_SP_REG}       { yylval.num = SP_REG;
		return SFR; }

{_PSW_REG}      { yylval.num = PSW_REG;
		return SFR; }
{_IE_REG}       { yylval.num = IE_REG;
		return SFR; }
{_IP_REG}       { yylval.num = IP_REG;
		return SFR; }
{_TCON_REG}     { yylval.num = TCON_REG;
		return SFR; }
{_TMOD_REG}     { yylval.num = TMOD_REG;
		return SFR; }
{_SCON_REG}     { yylval.num = SCON_REG;
		return SFR; }
{_SBUF_REG}     { yylval.num = SBUF_REG;
		return SFR; }

{_P0_REG}       { yylval.num = P0_REG;
		return SFR; }

{_P1_REG}	     { yylval.num = P1_REG;
		 return SFR; }	

{_TL0_REG}	{ yylval.num = TL0_REG;
		 return SFR; }

{_TL1_REG}	{ yylval.num = TL1_REG;
		 return SFR; }

{_TH0_REG}	{ yylval.num = TH0_REG;
		 return SFR; }

{_TH1_REG}	{ yylval.num = TH1_REG;
		 return SFR; }	

			/* Registers */ 

{_A_GP_REG}		{
			yylval.num = atoi(yytext+2);
			return AREG;
			}
		 
{_GP_REG}		{
				yylval.num = atoi(yytext+1);
				return REG;
			} 		  

	    
{_DECIMAL} 	    {
		    char *end;
		    char *numstr = strdup(yytext);
		    
		    /* Remove trailing 'D' or 'd' if present */
		    if (toupper(numstr[strlen(numstr)-1]) == 'D') {
			numstr[strlen(numstr)-1] = '\0';
		    }
		    
		    yylval.num = (int)strtol(numstr, &end, 10);
		    free(numstr);
		    return NUMBER;}

{_HEX}		{
   			    char *end;
			    char *numstr = strdup(yytext);
			    
			    /* Remove trailing 'H' or 'h' */
			    if (toupper(numstr[strlen(numstr)-1]) == 'H') {
				numstr[strlen(numstr)-1] = '\0';
			    }
			    
			    yylval.num = (int)strtol(numstr, &end, 16);
			    free(numstr);
			    return NUMBER;
			}
	    	
{_BINARY} 		{
		    	char *end;
		    	char *numstr = strdup(yytext);
		    
		   	 /* Remove trailing 'B' or 'b' */
		   	 	if (toupper(numstr[strlen(numstr)-1]) == 'B') {
				numstr[strlen(numstr)-1] = '\0';
		    	}
		    
		    	/* Convert binary string to integer */
		    	yylval.num = (int)strtol(numstr, &end, 2);
		    	free(numstr);
		    
		    	return NUMBER;}

	/* Symbols & Operators */

{_RAM_BIT_ADDRESS}		{
	*(yytext+2)='\0';
	yylval.num = (int)((strtol(yytext+1,NULL,16)<<3)+strtol(yytext+4,NULL,10));
	return RAM_BIT_ADDRESS;
}

{_P0_BIT}	{
	yylval.num = P0_REG + (yytext[3] - '0');
	return SFR_BIT_ADDRESS;
}

{_TCON_BIT} {
	yylval.num = TCON_REG + (yytext[5] - '0');
	return SFR_BIT_ADDRESS;
}

{_P1_BIT}	{
	yylval.num = P1_REG + (yytext[4] - '0');
	return SFR_BIT_ADDRESS;
}

_SCON_BIT {
	yylval.num = SCON_REG + (yytext[5] - '0');
	return SFR_BIT_ADDRESS;
}

_IE_BIT {
	yylval.num = IE_REG + (yytext[3] - '0');
	return SFR_BIT_ADDRESS;
}

_IP_BIT {
	yylval.num = IP_REG + (yytext[3] - '0');
	return SFR_BIT_ADDRESS;
}

_PSW_BIT {
	yylval.num = PSW_REG + (yytext[4] - '0');
	return SFR_BIT_ADDRESS;
}

_ACC_BIT {
	yylval.num = ACC_REG + (yytext[4] - '0');
	return SFR_BIT_ADDRESS;
}

_B_BIT {
	yylval.num = B_REG + (yytext[2] - '0');
	return SFR_BIT_ADDRESS;
}

{_ASCII_CHAR} {
	yylval.num = *(yytext+1);
	return NUMBER;
}

{_ASCII_STR}	{
	char* string = (char*)malloc(strlen(yytext) + 1);
	strcpy(string, yytext+1);
	*(string+strlen(string) - 1)='\0';
	yylval.str = string;
	return STRING;
}


{_HASH_TAG}    	{ return HASH_TAG; }
{_AT_SIGN}   	{ return AT_SIGN; }

{_COMMA}          { return COMMA; }

{_TWO_DOTS}    { 
		   return TWO_DOTS; }

{_IDENTIFIER} {
	yylval.bucket = insertSymbolempty(yytext);
	return IDENTIFIER;
}

.                { printf("Unrecognized: %s\n", yytext); }

%%


int yywrap(){return 1;}

