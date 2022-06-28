#ifndef HASTABLE_H_
#define HASTABLE_H_

#define MODULUS_SIZE 10
#define START_SIZE 10

#define FALSE 0
#define TRUE 1

struct HashTable {
    int *table[10 + 1];
    int initialized[10 + 1];
    int capacity[10 + 1];
    int currentSize[10 + 1];    
};

void insert(struct HashTable *ht, int val);

int search(struct HashTable *ht, int val);

void remove(struct HashTable *ht, int val);

#endif