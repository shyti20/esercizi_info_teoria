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
        void insertTail(Dipendente newDip);
        void insertHead(Dipendente newDip);
        void cronologia();
        void stampaFascia();
        Ora ricerca();
        void insertEqNext(Dipendente newDip);
        void insertNew(Dipendente newDip);
};
#endif