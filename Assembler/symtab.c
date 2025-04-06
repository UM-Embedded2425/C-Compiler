#include "utils.h"
#include "globals.h"
#include "symtab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Utils to deal with the IR table

void add_stmt(int operation, int opcode, int op1, int op2, int op3, int op_type ,int n) {
    IR[current_ir].op_type = operation;
    IR[current_ir].op_code = opcode;
    IR[current_ir].op_1 = op1;
    IR[current_ir].op_2 = op2;
    IR[current_ir].op_3 = op3;
    IR[current_ir].info = op_type;
    IR[current_ir].N = n;
    current_ir++;

    if (operation == ORG_OP) {
        lc = symbol_table[op1]->value;
    }
    else {
        lc += n;
    }

    if (current_ir > MAX_IR_TABLE_SIZE) {
        printf("Max IR table size reached. Exiting...");
        exit(1);
    }
}

// Utils to deal with symbol table

void initSymbolTable() {
    for (int i = 0; i < MAX_HASH_TABLE_SIZE; i++) {
        symbol_table[i]->next = NULL;
        symbol_table[i]->label[0] = '\0';
        symbol_table[i]->value = 0;
    }
}

void insertSymbol(const char *label, int value) {
    unsigned int index = hash(label);

    if (symbol_table[index] == NULL) //Empty bucket
    {
        symbol_table[index] = (bucketList *)malloc(sizeof(bucketList));
        strcpy(symbol_table[index]->label, label);
        symbol_table[index]->value = value;
        symbol_table[index]->next = NULL;
    }
    else if (strcmp(symbol_table[index]->label, label) == 0) //Same symbol
    {
        symbol_table[index]->value = value;
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
                return;
            }
        }
        if (!done) //Symbol not found, insert new symbol
        {
            current->next = (bucketList *)malloc(sizeof(bucketList));
            strcpy(current->next->label, label);
            current->next->value = value;
            current->next->next = NULL;
        }
    }

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
            while (current != NULL) {
                printf("Label: %s, Value: %d\n", current->label, current->value);
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