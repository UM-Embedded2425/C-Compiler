#ifndef _GLOBALS_H
#define _GLOBALS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Define location counter
extern int lc;

// Define the current statement value
extern int current_ir;

// Define the current line
extern int current_line;

// Define boolean variables

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NO_OP
#define NO_OP 0
#endif 

// Define Operands Type 

#define NO_TYPE 0
#define A_REG_TYPE 1
#define A_IND_REG_TYPE 2
#define A_IMMEDIATE 3
#define A_DIRECT 4
#define DIRECT_A 5
#define DIRECT_IMMEDIATE 6
#define REG_A 7
#define REG_DIRECT 8
#define REG_IMMEDIATE 9
#define DIRECT_REG 10
#define DIRECT_DIRECT 11
#define DIRECT_IND_REG 12
#define IND_REG_A 13
#define IND_REG_DIRECT 14
#define IND_REG_IMMEDIATE 15
#define C_BIT 16
#define C_NBIT 17
#define BIT_C 18
#define A_TYPE 19
#define REG_TYPE 20
#define DIRECT_TYPE 21
#define IND_REG_TYPE 22
#define DPTR_TYPE 23
#define ABSOLUTE 24
#define RELATIVE 25
#define C_TYPE 26
#define BIT_TYPE 27

// end of operands

// Define SFR values

#define ACC_REG 0xe0
#define B_REG 0xf0
#define PSW_REG 0xd0
#define SP_REG 0x81
#define DPL_REG 0x82
#define DPH_REG 0x83
#define P0_REG 0x80
#define P1_REG 0x90
#define P2_REG 0xa0
#define P3_REG 0xb0
#define TMOD_REG 0x89
#define TCON_REG 0x88
#define TL0_REG 0x8a
#define TH0_REG 0x8c
#define TL1_REG 0x8b
#define TH1_REG 0x8d 
#define SCON_REG 0x98
#define SBUF_REG 0x99
#define IE_REG 0xa8
#define IP_REG 0xb8

// Define the opcodes

//Opcodes for instructions
#define NOP_OP 0            
#define AJMP_OP 1           
#define LJMP_OP 2           
#define RR_OP 3             
#define INC_OP 4            
#define JBC_OP 16
#define ACALL_OP 17         
#define LCALL_OP 18
#define RRC_OP 19           
#define DEC_OP 20           
#define JB_OP 32
#define RET_OP 34           
#define RL_OP 35            
#define ADD_OP 36           
#define JNB_OP 48
#define RETI_OP 50          
#define RLC_OP 51           
#define ADDC_OP 52          
#define JC_OP 64
#define ORL_OP 66           
#define JNC_OP 80
#define ANL_OP 82           
#define JZ_OP 96
#define XRL_OP 98           
#define JNZ_OP 112
#define JMP_OP 115          
#define MOV_OP 116
#define SJMP_OP 128
#define MOVC_OP 131
#define DIV_OP 132          
#define SUBB_OP 148         
#define MUL_OP 164          
#define CPL_OP 178
#define CJNE_OP 180
#define PUSH_OP 192         
#define CLR_OP 194
#define SWAP_OP 196         
#define XCH_OP 197
#define POP_OP 208          
#define SETB_OP 210
#define DA_OP 212           
#define DJNZ_OP 213
#define XCHD_OP 214
#define MOVX_OP 224

//Opcodes for directives
#define BIT_OP 129
#define BSEG_OP 130
#define CODE_OP 133
#define CSEG_OP 134
#define DATA_OP 135
#define DB_OP 136
#define DBIT_OP 137
#define DD_OP 138
#define DS_OP 139
#define DSEG_OP 140
#define DW_OP 141
#define END_OP 142
#define EQU_OP 143
#define EXTRN_OP 144
#define IDATA_OP 145
#define ISSEG_OP 146
#define ORG_OP 147
#define SET_OP 149
#define USING_OP 150
#define XDATA_OP 151
#define XSEG_OP 152

//end of opcodes

#endif // _GLOBALS_H