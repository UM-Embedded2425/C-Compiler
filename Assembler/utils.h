#ifndef _UTILS_
#define _UTILS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Function to calculate the hash value of a string
    * @param str The string to hash
    * @return The hash value of the string
*/
unsigned int hash(const char *str);

/* Function to copy a string
    * @param s The string to copy
    * @return A pointer to the copied string
*/
char * copyString(char * s);

#endif // _UTILS_