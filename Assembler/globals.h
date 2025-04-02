#ifndef _GLOBALS_H
#define _GLOBALS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Define boolean type
typedef enum { false, true } bool;

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