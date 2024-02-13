#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <cmath>
#include "node.h"

class LinkedList {
    private:
        Node* head; //puntatore al nodo testa della lista
        void displayRec(Node* head);
        void swap(Node* a, Node* b);
    public:
        LinkedList();
        LinkedList(int info);
        LinkedList(const LinkedList& lkList);
        ~LinkedList();
        bool insertHead(int element);
        bool insertTail(int element);
        void display();
        bool isEmpty();
        void displayHelper();
        bool removeElement(int element);
        Node* search(int element);
        int counter();
        float avg();
        int max();
        int sumEven();
        int sumOdd();
        LinkedList& sqList(int element);
        bool removeEvenHead();
        void multiplyNeg();
        void sort();
        LinkedList& operator+(LinkedList& newList);
    friend istream& operator>>(istream& in, LinkedList& newList);
    friend LinkedList merge(const LinkedList& firstList, const LinkedList& secondList);
};
#endif