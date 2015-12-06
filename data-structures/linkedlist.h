//
// Created by Jeff Schulthies on 12/5/15.
//

#ifndef CSCI2461_SEARCHENGINE_LINKEDLIST_H
#define CSCI2461_SEARCHENGINE_LINKEDLIST_H

#endif //CSCI2461_SEARCHENGINE_LINKEDLIST_H

typedef struct listNode {
    void *data;
    struct node *next;
    struct node *last;
}listNode;

typedef struct linkedList {
    struct ll_node *head;
    struct ll_node *tail;
    int size;
}linkedList;

linkedList  * linkedList_init();

void ll_append(linkedList *list, listNode *node);
