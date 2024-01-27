#ifndef NODO_H
#define NODO_H

#include <iostream>
class Node {
    private:
        int info; //informazione memorizzata nel nodo
        Node* ptrNext; //puntatore al nodo successivo
    public:
        Node();
        Node(int data);
        Node(int data, Node* next);
        int getInfo();
        Node* getPtrNext();
        void setInfo(int data);
        void setPtrNext(Node* next);
        void setNode(int data, Node* next);
};
#endif