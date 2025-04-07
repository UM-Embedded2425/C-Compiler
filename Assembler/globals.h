#ifndef _GLOBALS_H
#define _GLOBALS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Define boolean variables

#ifndef TRUE
#define TRUE 1
#endif

// Define shared Lexer-Parser types

typedef union data {
    int num;
    char* str;
} type;

#ifndef FALSE
#define FALSE 0
#endif

// Define Operands
#define A_REG_TYPE 0
#define A_IND_REG_TYPE 1
#define A_IMMEDIATE 2
#define A_DIRECT 3
#define DIRECT_A 4
#define DIRECT_IMMEDIATE 5
#define REG_A 6
#define REG_DIRECT 7
#define REG_IMMEDIATE 8
#define DIRECT_REG 9
#define DIRECT_DIRECT 10
#define DIRECT_IND_REG 11
#define IND_REG_A 12
#define IND_REG_DIRECT 13
#define IND_REG_IMMEDIATE 14
#define C_BIT 15
#define C_NBIT 16
#define BIT_C 17
#define A_TYPE 18
#define REG_TYPE 19
#define DIRECT_TYPE 20
#define IND_REG_TYPE 21
#define DPTR_TYPE 22
#define ABSOLUTE 23
#define RELATIVE 24
#define C_TYPE 25
#define BIT_TYPE 26

// end of operands

// Define the opcodes

//Opcodes for instructions
#define NOP_OP 0            // YAP
#define AJMP_OP 1           // YAP
#define LJMP_OP 2           
#define RR_OP 3             // YAP
#define INC_OP 4            // YAP
#define JBC_OP 16
#define ACALL_OP 17         // YAP
#define LCALL_OP 18
#define RRC_OP 19           // YAP
#define DEC_OP 20           // YAP
#define JB_OP 32
#define RET_OP 34           // YAP
#define RL_OP 35            // YAP
#define ADD_OP 36           // YAP
#define JNB_OP 48
#define RETI_OP 50          // YAP
#define RLC_OP 51           // YAP
#define ADDC_OP 52          // YAP
#define JC_OP 64
#define ORL_OP 66           // YAP
#define JNC_OP 80
#define ANL_OP 82           // YAP
#define JZ_OP 96
#define XRL_OP 98           // YAP
#define JNZ_OP 112
#define JMP_OP 115          // YAP
#define MOV_OP 116
#define SJMP_OP 128
#define MOVC_OP 131
#define DIV_OP 132          // YAP
#define SUBB_OP 148         // YAP
#define MUL_OP 164          // YAP
#define CPL_OP 178
#define CJNE_OP 180
#define PUSH_OP 192         // YAP
#define CLR_OP 194
#define SWAP_OP 196         // YAP
#define XCH_OP 197
#define POP_OP 208          // YAP
#define SETB_OP 210
#define DA_OP 212           // YAP
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