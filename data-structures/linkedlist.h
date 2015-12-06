//
// Created by Jeff Schulthies on 12/5/15.
//

#ifndef CSCI2461_SEARCHENGINE_LINKEDLIST_H
#define CSCI2461_SEARCHENGINE_LINKEDLIST_H

#endif //CSCI2461_SEARCHENGINE_LINKEDLIST_H

struct listNode {
    void *data;
    struct listNode *next;
    struct listNode *last;
};

struct linkedList {
    struct listNode *head;
    struct listNode *tail;
    int size;
};

struct linkedList  *linkedList_init();

void append(struct linkedList *list, struct listNode *node);
