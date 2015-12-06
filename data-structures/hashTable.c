//
// Created by Jeff Schulthies on 12/5/15.
//

#include <stdlib.h>
#include "hashTable.h"

struct hashTable* createHashTable(int buckets) {
    struct hashTable *hTable = malloc(sizeof(struct hashTable));
    hTable->size = buckets;
    for(int i = 0; i < buckets; i++) {
        hTable->buckets = malloc(buckets * sizeof(struct hashTable));
    }

    for(int i = 0; i < buckets; i++) {
        hTable->buckets[i] = linkedList_init();
    }

}