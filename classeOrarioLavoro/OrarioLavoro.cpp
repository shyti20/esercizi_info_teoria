#include "OrarioLavoro.h"

OrarioLavoro::OrarioLavoro() {
    head = nullptr;
}

OrarioLavoro::OrarioLavoro(const OrarioLavoro newOrario) {
    Node* pAux = newOrario.head;
    head = nullptr;
    while (!pAux) {
        insertTail(newOrario.getDipendente());
        pAux = pAux->getPtrNext();
    }
}

OrarioLavoro::~OrarioLavoro() {
    Node* pAux = head;

    while (!pAux) {
        head = head->getPtrNext();
        delete pAux;
        pAux = head;
    }

    head = nullptr;
}