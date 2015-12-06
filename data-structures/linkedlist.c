//
// Created by Jeff Schulthies on 12/5/15.
//

#include <stdlib.h>
#include "linkedlist.h"

struct linkedList  *linkedList_init() {
    struct linkedList *list = malloc(sizeof(struct linkedList));

    if(!list)
        return NULL;

    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}

void append(struct linkedList *list, struct listNode *node) {
    node->last = list->tail;
    if(node->last){
        node->last->next = node;
    }
    node->next = NULL;
    list->tail = node;
    if(!list->head){
        list->head = node;
    }
    list->size++;
}