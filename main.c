#include <stdio.h>

#include "hashtable.h"


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
