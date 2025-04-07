#include "globals.h"
#include "utils.h"
#include "symtab.h"
#include "a51.tab.c"

void codeGen() {
    int code, reg, i = 0;
    while (i < current_ir) {
        switch(IR[i].op_type) {
            case ACALL:
            case AJMP:
                code = 0;
                code |= (0xff & IR[i].op_code) << 16;
                code |= (0x700 & IR[i].op_1) << 21;
                code |= (0x0ff & IR[i].op_1) << 8; 
                break;

            case SUBB:
            case ADDC:
            case ADD: 
                code = 0;
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | (IR[i].op_2 - R0);
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_IND_REG_TYPE) {
                    reg = 0x06 | (IR[i].op_2 - R0);
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else {
                    code |= (0x0f & 0x04) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                // print code
                break;
            
            case XRL:
            case ORL:
            case ANL:
                code = 0;
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | (IR[i].op_2 - R0);
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_IND_REG_TYPE) {
                    reg = 0x06 | (IR[i].op_2 - R0);
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == A_IMMEDIATE) {
                    code |= (0x0f & 0x04) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == DIRECT_A) {
                    code |= (0x0f & 0x02) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                }
                else {
                    code |= (0x0f & 0x03) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    code |= (0xff & IR[i].op_2);
                }
                // print code
                break;
            
            case DEC:
            case INC:
                code = 0;
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_TYPE) {
                    code |= (0x0f & 0x04) << 16;
                }
                else if (IR[i].info == REG_TYPE) {
                    reg = 0x08 | (IR[i].op_2 - R0);
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == DIRECT_TYPE) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                }
                else {
                    reg = 0x06 | (IR[i].op_1 - R0);
                    code |= (0x0f & reg) << 16;
                }
                // print code
                break;

            case MOV:
                code = 0;
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | (IR[i].op_2 - R0);
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == A_IND_REG_TYPE) {
                    reg = 0x06 | (IR[i].op_2 - R0);
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_IMMEDIATE) {
                    code |= (0x0f & 0x04) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == REG_A) {
                    reg = 0x08 | (IR[i].op_1 - R0);
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == REG_DIRECT) {
                    reg = 0x08 | (IR[i].op_1 - R0);
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == REG_IMMEDIATE) {
                    reg = 0x08 | (IR[i].op_1 - R0);
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == DIRECT_A) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                }
                else if (IR[i].info == DIRECT_REG) {
                    reg = 0x08 | (IR[i].op_2 - R0);
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                }
                else if (IR[i].info == DIRECT_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    code |= (0xff & IR[i].op_1);
                }
                else if (IR[i].info == DIRECT_IND_REG) {
                    reg = 0x06 | (IR[i].op_2 - R0);
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                }
                else if (IR[i].info == DIRECT_IMMEDIATE) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    code |= (0xff & IR[i].op_2);
                }
                else if (IR[i].info == IND_REG_A) {
                    reg = 0x06 | (IR[i].op_1 - R0);
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == IND_REG_DIRECT) {
                    reg = 0x06 | (IR[i].op_1 - R0);
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2);
                }
                else if (IR[i].info == IND_REG_IMMEDIATE) {
                    reg = 0x06 | (IR[i].op_1 - R0);
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2);
                }
                // print code 
                break;

            case POP:
            case PUSH:
                code = 0;
                code |= (0xff & IR[i].op_code) << 16;
                code |= (0xff & IR[i].op_2) << 8;
                // print code
                break;

            case NOP:
            case JMP:
            case MUL:
            case DIV:
            case DA:
            case SWAP:
            case RRC:
            case RR:            
            case RLC:
            case RL:
            case RETI:
            case RET:
                code = 0;
                code |= (0xff & IR[i].op_code) << 16;
                // print code
                break;
            
        }
        i++;
    }
}