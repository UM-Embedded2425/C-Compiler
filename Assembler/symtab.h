#ifndef _SYMTAB_H
#define _SYMTAB_H

#include "globals.h"

/* Function to insert a label in the hash table
    * @param label The label to insert
    * @param value The value associated with the label
    */
void insertSymbol(const char *label, int value);

/* Function to search for a label in the hash table
    * @param label The label to search for
    * @return A pointer to the bucketList structure containing the label, or NULL if not found
    */
bucketList * searchBucket(const char *label);

/* Function to print the symbol table
    */
void printSymbolTable();

/* Function to initialize the symbol table
    */
void initSymbolTable();

/* Function to get the value associated with a label
    * @param label The label to search for
    * @return The value associated with the label, or -1 if not found
    */
int getValue(const char *label);


#endif // _SYMTAB_H