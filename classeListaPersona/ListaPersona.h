#ifndef LISTAPERSONA_H
#define LISTAPERSONA_H

#include "Node.h"

class ListaPersona {
    private:
        Node* head;
    public:
        ListaPersona();
        ListaPersona(ListaPersona &lista);
        ~ListaPersona();
        bool isEmpty();
        bool insertHead(Persona data);
        bool insertTail(Persona data);
        void displayYounger();
        void displayByName(string name, string surname);
};
#endif