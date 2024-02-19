#ifndef NODE_H
#define NODE_H
#include "Dipendente.h"

class Node {
    private:
        Node *ptrNext;
        Dipendente info;
    public:
        Node();
        Node(Node* pnext, Dipendente info);
        Node(Dipendente info);
        ~Node();
        void setDipendente(Dipendente info);
        void setPtrNext(Node* pnext);
        Node* getPtrNext();
        Dipendente getDipendente();
        void setAll(Node* pnext, Dipendente info);   
};
#endif