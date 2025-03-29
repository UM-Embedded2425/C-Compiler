#include "utils.h"
#include "globals.h"
#include "symtab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Declare the IR table
instruction IR[MAX_IR_TABLE_SIZE];

// Hash table containing symbols
bucketList *symbol_table[MAX_HASH_TABLE_SIZE];

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
        bool done = 0;
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
        return bucket->value
    }
    return -1; // Not found
}