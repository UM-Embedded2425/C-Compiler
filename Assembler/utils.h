#ifndef _UTILS_
#define _UTILS_

/* Function to copy a string
    * @param s The string to copy
    * @return A pointer to the copied string
*/
char * copyString(char * s);

/* Function to print the code
    * @param code Byte code to print 
    * @param N Number of bytes to print
    * @param lc Current value of the location counter
    * @return A pointer to the copied string
*/
void print_code(int code, int N, int lc);

#endif // _UTILS_