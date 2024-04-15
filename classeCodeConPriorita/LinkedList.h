#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
    private:
        Node* head;
    public:
        LinkedList();
        ~LinkedList();
        LinkedList(int info, int priority);
        LinkedList(const LinkendList& newList);
        bool insertHead(int info, int priority);
        bool insertTail(int info, int priority);
        bool removeElement(int info, int priority);
};
#endif