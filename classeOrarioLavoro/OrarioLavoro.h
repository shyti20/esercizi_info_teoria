#ifndef ORARIOLAVORO_H
#define ORARIOLAVORO_H

#include "Node.h"

class OrarioLavoro {
    private:
        Node* head;
    public:
        OrarioLavoro();
        OrarioLavoro(const OrarioLavoro newOrario);
        ~OrarioLavoro();
        bool insertTail(Dipendente newDip);
        bool insertHead(Dipendente newDip);
        void cronologia();
        void stampaFascia();
        Ora ricerca(Dipendente temp);
        bool insertEqNext(Dipendente newDip);
        bool nextEquals(Dipendente newDip);
        bool  insertNew();
        bool isEmpty();
};
#endif