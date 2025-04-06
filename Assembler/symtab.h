#ifndef _SYMTAB_H
#define _SYMTAB_H

#include "globals.h"

// Define location counter
int lc = 0;

// Define the current statement value
int current_ir = 0;

// Define Symbol Table size
#define MAX_SYMBOL_TABLE_SIZE 100
#define MAX_LABEL_SIZE 10
#define MAX_LINE_LENGTH 255
#define MAX_CODE_LENGTH 500

//Define IR table size
#define MAX_IR_TABLE_SIZE 300
#define MAX_HASH_TABLE_SIZE 100
#define MAX_NAME_LABEL 20

// Define instruction structure for the IR table 
typedef struct {
    int op_type;
    int op_code;
    int op_1;
    int op_2;
    int op_3;
    int info;
    int N;
} instruction;

// Declare the IR table
instruction IR[MAX_IR_TABLE_SIZE];

// Define buckets registers for the hash table
typedef struct bucketReg{
    char label[MAX_NAME_LABEL];
    int value;
    struct  bucketReg *next;
} bucketList;

// Hash table containing symbols
bucketList *symbol_table[MAX_HASH_TABLE_SIZE];


// IR table utils

/* Function to add a statement to the IR table
    * @param operation The type of the operation
    * @param opcode The instruction opcode associated to the operation
    * @param op1 The first operand
    * @param op2 The second operand
    * @param op3 The third operand
    * @param op_type Specifies type of operand
    * @param n The number of bytes the instruction uses
    */
void add_stmt(int operation, int opcode, int op1, int op2, int op3, int op_type ,int n);

// Symbol Table utils

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