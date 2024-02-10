#ifndef NODE_H
#define NODE_H
#include "Persona.h"

class Node {
    private:
        Persona info;
        Node* ptrNext;
    public:
        Node();
		Node(Persona data);
		Node(Persona data, Node *next);
		~Node();
		Persona getInfo();
		Node* getPtrNext();
		void setInfo(Persona data);
		void setPtrNext(Node *next);
		void setNode(Persona data, Node *next);
};
#endif