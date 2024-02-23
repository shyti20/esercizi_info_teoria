#ifndef NODE_H
#define NODE_H

#include "Tappa.h"

class Node {
    private:
        Node* ptrNext;
        Tappa infoTappa;
    public:
        Node();
        Node(Tappa newTappa);
        Node(Tappa newTappa, Node* node);
        void setPtrNext(Node* node);
        void setTappa(Tappa newTappa);
        Node* getPtrNext();
        Tappa getTappa();
};

#endif