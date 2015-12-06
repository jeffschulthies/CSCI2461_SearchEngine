//
// Created by Jeff Schulthies on 12/5/15.
//

#include "linkedlist.h"

#ifndef CSCI2461_SEARCHENGINE_HASHTABLE_H
#define CSCI2461_SEARCHENGINE_HASHTABLE_H

struct hashTable {
    int size;
    struct linkedList **buckets;
};

struct hashTable* createHashTable(int buckets);

#endif //CSCI2461_SEARCHENGINE_HASHTABLE_H