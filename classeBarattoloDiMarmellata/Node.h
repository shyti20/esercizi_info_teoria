#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "BarattoloDiMarmellata.h"

using namespace std;

class Node {
    private:
        Node* ptrNext;
        BarattoloDiMarmellata info;
    private:
        Node();
        Node(BarattoloDiMarmellata info, Node* pnode);
        Node(BarattoloDiMarmellata info);
        ~Node();
        void setPtrNext(Node* pnode);
        void setInfo(BarattoloDiMarmellata info);
        void setInfo(Data scadenza, int code, string nome, Data arrivo, float prezzo);
        Node* getPtrNext();
        BarattoloDiMarmellata getInfo();
};

#endif