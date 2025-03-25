#include "utils.h"

#define PRIME 21
#define MAX_HASH_TABLE_SIZE 100

unsigned int hash(const char *str) {
    unsigned int hash = 0;

    for (unsigned int i = 0; str[i] != '\0'; i++) hash = hash * PRIME + (unsigned int)str[i];

    hash = hash % MAX_HASH_TABLE_SIZE;
    return hash;
}