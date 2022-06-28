#include <assert.h>

#include "hashtable.h"


int main() {
    struct HashTable hashTable;

    insert(&hashTable, 2);
    insert(&hashTable, 3);
    insert(&hashTable, 4);
    insert(&hashTable, 15);
    
    assert(1 == search(&hashTable, 2));
    assert(1 == search(&hashTable, 3));
    assert(1 == search(&hashTable, 4));
    assert(1 == search(&hashTable, 15));
    assert(0 == search(&hashTable, 20));
}