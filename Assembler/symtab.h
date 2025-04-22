#ifndef _SYMTAB_H
#define _SYMTAB_H

// Define Symbol Table size
#define MAX_SYMBOL_TABLE_SIZE 100
#define MAX_LABEL_SIZE 10
#define MAX_LINE_LENGTH 255

//Define IR table size
#define MAX_IR_TABLE_SIZE 300
#define MAX_HASH_TABLE_SIZE 100
#define MAX_NAME_LABEL 20

#define PRIME 21
enum init_mode{
    DB_MODE,
    DW_MODE,
    DD_MODE,
} typedef init_mode_t;

// Define instruction structure for the IR table 
typedef struct {
    int op_type;
    int op_code;
    int op_1;
    int op_2;
    int *op_3;
    int info;
    int N;
} instruction;

// Hash table containing symbols
extern instruction *IR;
extern int size;
extern init_mode_t init_mode;

enum segments {
    CODE_SEGMENT,
    DATA_SEGMENT,
    XDATA_SEGMENT,
    IDATA_SEGMENT,
    BIT_SEGMENT,
    UNDEF_SEGMENT,
    INMEDIATE,
    REGISTER,
}typedef segment_t;


//Define location counter structure
typedef struct {
    int value[5];
    segment_t segment;
} location_counter_t;

// Define location counter
extern location_counter_t lc;

// Define the maximum size of each segment
#define MAX_CODE_LENGTH 0xFFFF
#define MAX_DATA_LENGTH 0xFF
#define MAX_XDATA_LENGTH 0xFFFF
#define MAX_IDATA_LENGTH 0xFF
#define MAX_BIT_LENGTH 0x7F

extern int max_seg[5];

// Define buckets registers for the hash table
typedef struct bucketReg{
    char label[MAX_NAME_LABEL];
    int value;
    segment_t segment;
    struct  bucketReg *next;
} bucketList;

// Hash table containing symbols
extern bucketList *symbol_table[MAX_HASH_TABLE_SIZE];

// IR table utils

/* Function to initialize a the IR table
    */

void initIR();

/* Function to add a statement to the IR table
    * @param operation The type of the operation
    * @param opcode The instruction opcode associated to the operation
    * @param op1 The first operand
    * @param op2 The second operand
    * @param op3 The third operand
    * @param op_type Specifies type of operand
    * @param n The number of bytes the instruction uses
    */
void add_stmt(int operation, int opcode, long int op1, int op2, int *op3, int op_type ,int n);

// Symbol Table utils

/* Function to calculate the hash value of a string
    * @param str The string to hash
    * @return The hash value of the string
    */
unsigned int hash(const char *str);

/* Function to insert a label in the hash table with a value
    * @param label The label to insert
    * @param value The value associated with the label
    * @param segment The segment type of the label
    * @return A pointer to the bucketList structure containing the label
    */
bucketList * insertSymbol(const char *label, int value, segment_t segment);

/* Function to insert a label in the hash table with an empty value
    * @param label The label to insert
    * @return A pointer to the bucketList structure containing the label
    */
bucketList * insertSymbolempty(const char *label);

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