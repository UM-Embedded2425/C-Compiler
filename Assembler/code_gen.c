#include "globals.h"
#include "utils.h"
#include "symtab.h"

FILE *output;

void codeGen() {
    FILE *output;
    output = fopen("output.coe", "w+");

    fprintf(output, "memory_initialization_radix=16;\n");
    fprintf(output, "memory_initialization_vector=\n");

    int code = 0, reg = 0, i = 0, seg = 0, rel = 0, warn = 0;
    lc.value[CODE_SEGMENT] = 0;
    while (i < current_ir) {
        lc.value[CODE_SEGMENT] += IR[i].N;
        switch(IR[i].op_type) {
            case DB_OP:
                code = IR[i].op_1;
                break;
            case DW_OP:
                code = IR[i].op_1;
                break;
            case DD_OP:
                code = IR[i].op_1;
                break;
            case CSEG_OP:
                code = 0x00;          
                break;
            case ACALL_OP:
            case AJMP_OP:
                code |= (0xff & IR[i].op_code) << 16;
                code |= (0x700 & *IR[i].op_3) << 21;
                code |= (0x0ff & *IR[i].op_3) << 8;
                warn = checkAbsAddr(*IR[i].op_3, lc.value[CODE_SEGMENT] - IR[i].N); 
                break;
            case SUBB_OP:
            case ADDC_OP:
            case ADD_OP: 
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    warn = checkReg(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_IND_REG_TYPE) {
                    reg = 0x06 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    warn = checkRegI(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkDirAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else {
                    code |= (0x0f & 0x04) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                break;
            case XRL_OP:
            case ORL_OP:
            case ANL_OP:
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    warn = checkReg(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_IND_REG_TYPE) {
                    reg = 0x06 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    warn = checkRegI(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkDirAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_IMMEDIATE) {
                    code |= (0x0f & 0x04) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == DIRECT_A) {
                    code |= (0x0f & 0x02) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    warn = checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == DIRECT_IMMEDIATE) {
                    code |= (0x0f & 0x03) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    code |= (0xff & IR[i].op_2);
                    warn = checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == C_BIT) {
                    code |= (0x0f & 0x02) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkBitAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else {
                    code |= (0x0f & 0x00) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkBitAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                break;
            case CJNE_OP:
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    rel = *IR[i].op_3 - lc.value[CODE_SEGMENT];
                    code |= (0xff & rel);
                    warn = checkDirAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkRelAddr(rel, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_IMMEDIATE) {
                    code |= (0x0f & 0x04) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    rel = *IR[i].op_3 - lc.value[CODE_SEGMENT];
                    code |= (0xff & rel);
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkRelAddr(rel, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == REG_IMMEDIATE) {
                    reg = 0x08 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    rel = *IR[i].op_3 - lc.value[CODE_SEGMENT];
                    code |= (0xff & rel);
                    warn = checkReg(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkRelAddr(rel, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else {
                    reg = 0x06 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    rel = *IR[i].op_3 - lc.value[CODE_SEGMENT];
                    code |= (0xff & rel);
                    warn = checkRegI(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkRelAddr(rel, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                break;
            case DJNZ_OP:
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == REG_TYPE) {
                    reg = 0x08 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    rel = *IR[i].op_3 - lc.value[CODE_SEGMENT];
                    code |= (0xff & rel) << 8;
                    warn = checkReg(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkRelAddr(rel, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    rel = *IR[i].op_3 - lc.value[CODE_SEGMENT];
                    code |= (0xff & rel);
                    warn = checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkRelAddr(rel, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                break;
            case DEC_OP:
            case INC_OP:
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_TYPE) {
                    code |= (0x0f & 0x04) << 16;
                }
                else if (IR[i].info == REG_TYPE) {
                    reg = 0x08 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    warn = checkReg(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == DIRECT_TYPE) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    warn = checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == IND_REG_TYPE) {
                    reg = 0x06 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    warn = checkRegI(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else {
                    code |= (0x0f & 0x03) << 16;
                }
                break;
            case MOV_OP:
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    warn = checkReg(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkDirAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_IND_REG_TYPE) {
                    reg = 0x06 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    warn = checkRegI(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_IMMEDIATE) {
                    code |= (0x0f & 0x04) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == REG_A) {
                    reg = 0x08 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    warn = checkReg(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == REG_DIRECT) {
                    reg = 0x08 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkReg(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkDirAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == REG_IMMEDIATE) {
                    reg = 0x08 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkReg(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == DIRECT_A) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    warn = checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == DIRECT_REG) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    warn = checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkReg(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == DIRECT_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    code |= (0xff & IR[i].op_1);
                    warn = checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkDirAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == DIRECT_IND_REG) {
                    reg = 0x06 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    warn = checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkRegI(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == DIRECT_IMMEDIATE) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    code |= (0xff & IR[i].op_2);
                    warn = checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == IND_REG_A) {
                    reg = 0x06 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    warn = checkRegI(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == IND_REG_DIRECT) {
                    reg = 0x06 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkRegI(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkDirAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == IND_REG_IMMEDIATE) {
                    reg = 0x06 | IR[i].op_1;
                    code |= (0x0f & reg) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkRegI(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                    warn = checkImm8(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == C_BIT) {
                    code |= (0x0f & 0x02) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    warn = checkBitAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == BIT_C) {
                    code |= (0x0f & 0x02) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    warn = checkBitAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else {
                    code |= (0x0f & 0x00) << 16;
                    code |= (0xff00 & IR[i].op_2);
                    code |= (0x00ff & IR[i].op_2);
                    warn = checkImm16(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                break;
            case POP_OP:
            case PUSH_OP:
                code |= (0xff & IR[i].op_code) << 16;
                code |= (0xff & IR[i].op_1) << 8;
                checkDirAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                break;  
            case NOP_OP:
                break;
            case CPL_OP:
            case CLR_OP:
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_TYPE) {
                    code |= (0x0f & 0x04) << 16;
                }
                else if (IR[i].info == C_TYPE) {
                    code |= (0x0f & 0x03) << 16;   
                }
                else {
                    code |= (0x0f & 0x02) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    checkBitAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                break;
            case JB_OP:
            case JBC_OP:
            case JNB_OP:
                code |= (0xff & IR[i].op_code) << 16;
                code |= (0xff & IR[i].op_1) << 8;
                rel = *IR[i].op_3 - lc.value[CODE_SEGMENT];
                code |= (0xff & rel);
                checkBitAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                checkRelAddr(rel, lc.value[CODE_SEGMENT] - IR[i].N);
                break;
            case SJMP_OP:
            case JC_OP:
            case JNC_OP:
            case JNZ_OP:
            case JZ_OP:
                code |= (0xff & IR[i].op_code) << 16;
                rel = *IR[i].op_3 - lc.value[CODE_SEGMENT];
                code |= (0xff & rel) << 8;
                checkRelAddr(rel, lc.value[CODE_SEGMENT] - IR[i].N);
                break;
            case LCALL_OP:
            case LJMP_OP:
                code |= (0xff & IR[i].op_code) << 16;
                rel = *IR[i].op_3 - lc.value[CODE_SEGMENT];
                code |= (0xff00 & rel) << 8;
                code |= (0x00ff & rel);
                checkLongAddr(rel, lc.value[CODE_SEGMENT] - IR[i].N);
                break;
            case SETB_OP:
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == C_TYPE) {
                    code |= (0x0f & 0x03) << 16;
                }
                else {
                    code |= (0x0f & 0x02) << 16;
                    code |= (0xff & IR[i].op_1) << 8;
                    checkBitAddr(IR[i].op_1, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                break;
            case XCH_OP:
                code |= (0xf0 & IR[i].op_code) << 16;
                if (IR[i].info == A_REG_TYPE) {
                    reg = 0x08 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    checkReg(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else if (IR[i].info == A_DIRECT) {
                    code |= (0x0f & 0x05) << 16;
                    code |= (0xff & IR[i].op_2) << 8;
                    checkDirAddr(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                else {
                    reg = 0x06 | IR[i].op_2;
                    code |= (0x0f & reg) << 16;
                    checkRegI(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                }
                break;
            case XCHD_OP:
                code |= (0xf0 & IR[i].op_code) << 16;
                reg = 0x06 | IR[i].op_2;
                code |= (0x0f & reg) << 16;
                checkRegI(IR[i].op_2, lc.value[CODE_SEGMENT] - IR[i].N);
                break;
            case MOVC_OP:
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
                code |= (0xff & IR[i].op_code) << 16;
                break;
            default:
                break;
        }
        for (int i2 = 0; i2 < IR[i].N && !seg; i2++){
            fprintf(output, "%02X,\n", (code>>((IR[i].N-1-i2)*8))&0xFF);
        }
        if (seg)
        {
            for (size_t i2 = 0; i2 < IR[i].N; i2++)
            {
                fprintf(output, "00,\n");
            }
            seg = 0;
        }
        code = 0;
        i++;
    }
    if (warn) printf("There are warnings to verify.");
    fseek(output, -2, SEEK_CUR);
    fprintf(output, ";\n");
    fclose(output);
}