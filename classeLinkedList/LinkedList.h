#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "node.h"
class LinkedList {
    private:
        Node* head; //puntatore al nodo testa della lista
    public:
        LinkedList();
        LinkedList(int info);
        LinkedList(const LinkedList& lkList);
        ~LinkedList();
        Node* getHead();
        bool insertHead(int element);
        bool insertTail(int element);
        bool removeElement(int element);
        void display();
        bool isEmpty();
};
#endif