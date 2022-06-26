#include <stdio.h>
#include <stdlib.h>

const MODULUS_SIZE = 10;
const START_SIZE = 10;

struct HashTable {
    int *table[10 + 1];
    int initialized[10 + 1];
    int capacity[10 + 1];
    int currentSize[10 + 1];
};

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
        ht->initialized[index] = 1;
    } else if (ht->initialized[index] == 1 && ht->currentSize[index] < ht->capacity[index]) {
        ht->table[index][ht->currentSize[index]] = val;
        ht->currentSize[index] += 1;
    } else {

    }
}

int search(struct HashTable *ht, int val) {
    int index = getIndex(val);

    if (ht->initialized[index] == 0) {
        return 0;
    }

    for (int i = 0; i < ht->currentSize[index]; i++) {
        if (ht->table[index][i] == val) {
            return 1;
        }
    }

    return 0;
}

int main() {
    struct HashTable hashTable;

    insert(&hashTable, 2);
    insert(&hashTable, 3);
    insert(&hashTable, 4);
    insert(&hashTable, 15);

    printf("%d\n", search(&hashTable, 2));
    printf("%d\n", search(&hashTable, 3));
    printf("%d\n", search(&hashTable, 4));
    printf("%d\n", search(&hashTable, 15));
    printf("%d\n", search(&hashTable, 20));
}
