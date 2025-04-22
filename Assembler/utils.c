#include "utils.h"
#include "globals.h"
#include <stdlib.h>
#include <string.h>

char end_error = 0;

char * copyString(char * s)
{ int n;
  char * t;
  if (s==NULL) return NULL;
  n = strlen(s)+1;
  t = malloc(n);
  if (t!=NULL) strcpy(t,s);
  return t;
}

int checkImm8(int x, int lc) {
  if (x > 127 || x < -128) {
    printf("Warning: 8-bit Immediate value out of range at line number %d\n", lc);
    return 1;
  }
  return 0;
}

int checkImm16(int x, int lc) {
  if (x > 32767 || x < -32768) {
    printf("Warning: 16-bit Immediate value out of range at line number %d\n", lc);
    return 1;
  }
  return 0;
}

int checkDirAddr(int x, int lc) {
  if ((x >= 0 && x < 128) || (x == ACC_REG || x == B_REG || x == PSW_REG || x == SP_REG || x == DPL_REG || x == DPH_REG || x == P0_REG || x == P1_REG || x == TL0_REG || x == TL1_REG || x == TH0_REG || x == TH1_REG || x == IE_REG || x == IP_REG || x == TCON_REG || x == TMOD_REG || x == SCON_REG || x == SBUF_REG)) {
    return 0;
  }
  else {
    printf("Warning: 8-bit Direct address out of range at line number %d\n", lc);
    return 1;
  }
}

int checkAbsAddr(int x, int lc) {
  if (x < 0 || x > 2048) {
    printf("Warning: 11-bit Absolute address out of range at line number %d\n", lc);
    return 1;
  }
  return 0;
}

int checkLongAddr(int x, int lc) {
  if (x < 0 || x > 65536) {
    printf("Warning: 16-bit Long address value out of range at line number %d\n", lc);
    return 1;
  }
  return 0;
}

int checkBitAddr(int x, int lc) {
  if ((x >= 0 && x < 16) || ((x >= ACC_REG && x < ACC_REG + 8) || (x >= B_REG && x < B_REG + 8) || (x >= PSW_REG && x < PSW_REG + 8) || (x >= P0_REG && x < P0_REG + 8) || (x >= P1_REG && x < P1_REG + 8) || (x >= IE_REG && x < IE_REG + 8) || (x >= IP_REG && x < IP_REG + 8) || (x >= TCON_REG && x < TCON_REG + 8) || (x >= SCON_REG && x < SCON_REG + 8))) {
    return 0;
  }
  else {
    printf("Warning: 8-bit Bit address out of range at line number %d\n", lc);
    return 1;
  }
}

int checkReg(int x, int lc) {
  if (x < 0 || x > 7) {
    printf("Warning: Direct Register index out of range at line number %d\n", lc);
    return 1;
  }
  return 0;
}

int checkRegI(int x, int lc) {
  if (x < 0 || x > 1) {
    printf("Warning: Indirect Register index out of range at line number %d\n", lc);
    return 1;
  }
  return 0;
}

int checkRelAddr(int x, int lc) {
  if (x > 127 || x < -128) {
    printf("Warning: 8-bit RElative address out of range at line number %d\n", lc);
    return 1;
  }
  return 0;
}