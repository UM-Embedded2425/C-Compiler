#include "symtab.h"
#include "utils.h"
#include "globals.h"

// Declare the IR table
instruction *IR;
int size;
int lineno;

init_mode_t init_mode;

// Hash table containing symbols
bucketList *symbol_table[MAX_HASH_TABLE_SIZE];

// Utils to deal with the IR table
int current_ir;
location_counter_t lc;

// Table with max bytes for each segment
int max_seg[5] = {MAX_CODE_LENGTH, MAX_DATA_LENGTH, MAX_XDATA_LENGTH, MAX_IDATA_LENGTH, MAX_BIT_LENGTH};

void initIR() {

    size = MAX_CODE_LENGTH;
    IR = malloc(sizeof(instruction)*size);
    int i;
    for (i=0; i < size; i++) {
        IR[i].op_type = 0;
        IR[i].op_code = 0;
        IR[i].op_1 = 0;
        IR[i].op_2 = 0;
        IR[i].op_3 = NULL;
        IR[i].info = NO_TYPE;
        IR[i].N = 0;
    }
    current_ir = 0;
    lc.segment = 0;
    for (size_t i = 0; i < 5; i++)
        lc.value[i] = 0;
}

void add_stmt(int operation, int opcode, long int op1, int op2, int *op3, int op_type ,int n) {

    if (current_ir >= size) {
        size *= 2;
        IR = realloc(IR, size*sizeof(instruction));
    } 
    IR[current_ir].op_type = operation;
    IR[current_ir].op_code = opcode;
    IR[current_ir].op_1 = op1;
    IR[current_ir].op_2 = op2;
    IR[current_ir].op_3 = op3;
    IR[current_ir].info = op_type;
    IR[current_ir].N = n;
    current_ir++;
    lc.value[CODE_SEGMENT] += n;
}

// Utils to deal with symbol table

unsigned int hash(const char *str) {
    unsigned int hash = 0;
    for (unsigned int i = 0; str[i] != '\0'; i++) hash = hash * PRIME + (unsigned int)str[i];
    hash = hash % MAX_HASH_TABLE_SIZE;
    return hash;
}

void initSymbolTable() {
    for (int i = 0; i < MAX_HASH_TABLE_SIZE; i++) {
        symbol_table[i] = NULL;
    }
}

bucketList * insertSymbol(const char *label, int value, segment_t segment) {
    unsigned int index = hash(label);

    if (symbol_table[index] == NULL) //Empty bucket
    {
        symbol_table[index] = (bucketList *)malloc(sizeof(bucketList));
        strcpy(symbol_table[index]->label, label);
        symbol_table[index]->value = value;
        symbol_table[index]->segment = segment;
        symbol_table[index]->next = NULL;
        return symbol_table[index];
    }
    else if (strcmp(symbol_table[index]->label, label) == 0) //Same symbol
    {
        symbol_table[index]->value = value;
        symbol_table[index]->segment = segment;
        return symbol_table[index];
    }
    else
    {
        bucketList *current = symbol_table[index];
        int done = 0;
        for (; current->next != NULL; current = current->next) //Search through bucket
        {
            if (strcmp(current->next->label, label) == 0) //Same symbol
            {
                done = 1;
                current->next->value = value;
                return current->next;
            }
        }
        if (!done) //Symbol not found, insert new symbol
        {
            current->next = (bucketList *)malloc(sizeof(bucketList));
            strcpy(current->next->label, label);
            current->next->value = value;
            current->next->next = NULL;
            return current->next;
        }
    }
    return NULL; // This line should never be reached

}

bucketList * insertSymbolempty(const char *label) {
    unsigned int index = hash(label);

    if (symbol_table[index] == NULL) //Empty bucket
    {
        symbol_table[index] = (bucketList *)malloc(sizeof(bucketList));
        strcpy(symbol_table[index]->label, label);
        symbol_table[index]->value = 0;
        symbol_table[index]->next = NULL;
        symbol_table[index]->segment = UNDEF_SEGMENT;
        return symbol_table[index];
    }
    else if (strcmp(symbol_table[index]->label, label) == 0) //Same symbol
    {
        return symbol_table[index];
    }
    else
    {
        bucketList *current = symbol_table[index];
        int done = 0;
        for (; current->next != NULL; current = current->next) //Search through bucket
        {
            if (strcmp(current->next->label, label) == 0) //Same symbol
            {
                done = 1;
                return current->next;
            }
        }
        if (!done) //Symbol not found, insert new symbol
        {
            current->next = (bucketList *)malloc(sizeof(bucketList));
            strcpy(current->next->label, label);
            current->next->value = 0;
            current->next->segment = UNDEF_SEGMENT;
            current->next->next = NULL;
            return current->next;
        }
    }
    return NULL; // This line should never be reached

}

bucketList * searchBucket(const char *label) {
    unsigned int index = hash(label);
    bucketList *current = symbol_table[index];

    while (current != NULL) {
        if (strcmp(current->label, label) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL; // Not found
}

void printSymbolTable() {
    printf("Symbol Table:\n");
    for (int i = 0; i < MAX_HASH_TABLE_SIZE; i++) {
        if (symbol_table[i] != NULL) {
            bucketList *current = symbol_table[i];
            printf("\nBucket %d: ", i);
            while (current != NULL) {
                printf("Label: %s, Value: %d -", current->label, current->value);
                current = current->next;
            }
        }
    }
}

int getValue(const char *label) {
    bucketList *bucket = searchBucket(label);
    if (bucket != NULL) {
        return bucket->value;
    }
    return -1; // Not found
}