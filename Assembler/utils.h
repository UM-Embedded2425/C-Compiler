#ifndef _UTILS_
#define _UTILS_

extern char end_error;

/* Function to copy a string
    * @param s The string to copy
    * @return A pointer to the copied string
*/
char * copyString(char * s);

/* Function to check a 8-bit immediate value compliance
    * @param x The 8-bit immediate value to check
    * @return True or False for compliance
*/
int checkImm8(int x, int lc);

/* Function to check a 16-bit immediate value compliance
    * @param x The 16-bit immediate value to check
    * @return True or False for compliance
*/
int checkImm16(int x, int lc);

/* Function to check a direct address compliance with the possible range 
    * @param x The 8-bit direct address value to check
    * @return True or False for compliance
*/
int checkDirAddr(int x, int lc);

/* Function to check an absolute address compliance with the possible range 
    * @param x The 11-bit direct address value to check
    * @return True or False for compliance
*/
int checkAbsAddr(int x, int lc);

/* Function to check a long address compliance with the possible range 
    * @param x The 16-bit long address value to check
    * @return True or False for compliance
*/
int checkLongAddr(int x, int lc);

/* Function to check a bit address compliance with the possible range 
    * @param x The 8-bit bit address value to check
    * @return True or False for compliance
*/
int checkBitAddr(int x, int lc);

/* Function to check a direct register index with the possible range 
    * @param x The direct register index to check
    * @return True or False for compliance
*/
int checkReg(int x, int lc);

/* Function to check an indirect register index with the possible range 
    * @param x The indirect register index to check
    * @return True or False for compliance
*/
int checkRegI(int x, int lc);

/* Function to check a relative address compliance with the possible range 
    * @param x The 8-bit relative address value to check
    * @return True or False for compliance
*/
int checkRelAddr(int x, int lc);

#endif // _UTILS_