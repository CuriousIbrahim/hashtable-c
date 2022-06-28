#include <stdlib.h>

#include "hashtable.h"

int getIndex(int val) {
    return MODULUS_SIZE % val;
}

void insert(struct HashTable *ht, int val) {
    int index = getIndex(val);

    if (ht->initialized[index] == 0) {
        ht->table[index] = malloc(sizeof(int) * START_SIZE);
        ht->table[index][0] = val;

        ht->capacity[index] = START_SIZE;
        ht->currentSize[index] = 1;
        ht->initialized[index] = TRUE;
    } else if (ht->initialized[index] == 1 && ht->currentSize[index] < ht->capacity[index]) {
        ht->table[index][ht->currentSize[index]] = val;
        ht->currentSize[index] += 1;
    } else {

    }
}

// TODO
void remove(struct HashTable *ht, int val) {
    int index = getIndex(val);

    if (ht->initialized[index] == TRUE) {
        int i = 0;
        int found = FALSE;

        while (i < ht->currentSize[index]) {
            if (ht->table[index][i] == val) {
                found = TRUE;
                break;
            }
        }

        if (found == TRUE) {

        }
    }
}

int search(struct HashTable *ht, int val) {
    int index = getIndex(val);

    if (ht->initialized[index] == 0) {
        return FALSE;
    }

    for (int i = 0; i < ht->currentSize[index]; i++) {
        if (ht->table[index][i] == val) {
            return TRUE;
        }
    }

    return 0;
}