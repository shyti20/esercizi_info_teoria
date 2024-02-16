#ifndef NODE_H
#define NODE_H

#include "Brano.h"

class Node {
    private:
        Brano b;
        Node* ptrNext;
    public: 
        Node();
        Node(Brano brano, Node* pnode);
        Node(Brano brano);
        Brano getBrano();
        Node* getPtrNext();
        void setBrano(Brano brano);
        void setPtrNext(Node* ptrNext);
        void setAll(Brano b, Node* pnode);
};
#endif