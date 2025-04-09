#include "globals.h"
#include "utils.h"
#include "symtab.h"

void codeGen() {
    int code, reg, i = 0;
    while (i < current_ir) {
        switch(IR[i].op_type) {
            case ACALL_OP:
            case AJMP_OP:
                code = 0;
                code |= (0xff & IR[i].op_code) << 16;
                code |= (0x700 & *IR[i].op_3) << 21;
                code |= (0x0ff & *IR[i].op_3) << 8; 
                break;

            case SUBB_OP:
            case ADDC_OP:
            case ADD_OP: 
                code = 0;
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_IND_REG_TYPE) {
                    reg = 0x06 | IR[i].op_2;
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
                break;
            
            case XRL_OP:
            case ORL_OP:
            case ANL_OP:
                code = 0;
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_IND_REG_TYPE) {
                    reg = 0x06 | IR[i].op_2;
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
            
            case DEC_OP:
            case INC_OP:
                code = 0;
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_TYPE) {
                    code |= (0x0f & 0x04) << 16;
                }
                else if (IR[i].info == REG_TYPE) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == DIRECT_TYPE) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                }
                else {
                    reg = 0x06 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                }
                // print code
                break;

            case MOV_OP:
                code = 0;
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == A_IND_REG_TYPE) {
                    reg = 0x06 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == A_IMMEDIATE) {
                    code |= (0x0f & 0x04) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == REG_A) {
                    reg = 0x08 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == REG_DIRECT) {
                    reg = 0x08 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == REG_IMMEDIATE) {
                    reg = 0x08 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                }
                else if (IR[i].info == DIRECT_A) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                }
                else if (IR[i].info == DIRECT_REG) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                }
                else if (IR[i].info == DIRECT_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    code |= (0xff & IR[i].op_1);
                }
                else if (IR[i].info == DIRECT_IND_REG) {
                    reg = 0x06 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                }
                else if (IR[i].info == DIRECT_IMMEDIATE) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    code |= (0xff & IR[i].op_2);
                }
                else if (IR[i].info == IND_REG_A) {
                    reg = 0x06 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                }
                else if (IR[i].info == IND_REG_DIRECT) {
                    reg = 0x06 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2);
                }
                else if (IR[i].info == IND_REG_IMMEDIATE) {
                    reg = 0x06 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2);
                }
                // print code 
                break;

            //case POP_OP:
            case PUSH_OP:
                code = 0;
                code |= (0xff & IR[i].op_code) << 16;
                code |= (0xff & IR[i].op_2) << 8;
                // print code
                break;
                
            case NOP_OP:
            case JMP_OP:
            case MUL_OP:
            case DIV_OP:
            case DA_OP:
            case SWAP_OP:
            case RRC_OP:
            case RR_OP:            
            case RLC_OP:
            case RL_OP:
            case RETI_OP:
            case RET_OP:
                code = 0;
                code |= (0xff & IR[i].op_code) << 16;
                // print code
                break;
            
            
        }
        printf("0x%02X\n", code>>16);
        printf("0x%02X\n", (code>>8)&0xFF);
        printf("0x%02X\n", code&0xFF);
        code = 0;
        i++;
    }
}