//
// Created by Jeff Schulthies on 12/5/15.
//

#include "linkedlist.h"

#ifndef CSCI2461_SEARCHENGINE_HASHTABLE_H
#define CSCI2461_SEARCHENGINE_HASHTABLE_H

typedef struct hashTable {
    int size;
    linkedList **buckets;
}hashTable;

hashTable* createHashTable(int buckets);
#endif //CSCI2461_SEARCHENGINE_HASHTABLE_H