#include "ItinerarioViaggio.h"

ItinerarioViaggio::ItinerarioViaggio() {
    head = new Node;
}

ItinerarioViaggio::ItinerarioViaggio(Tappa newTappa) {
    head = new Node(newTappa);
}

ItinerarioViaggio::ItinerarioViaggio(const ItinerarioViaggio& ite) {
    head = nullptr;
    Node* pAux = ite.head;

    while (pAux) {
        insertHead(pAux->getTappa());
        pAux = pAux->getPtrNext();
    }
}

ItinerarioViaggio::~ItinerarioViaggio() {
    Node* pAux = head;

    while (pAux) {
        head = head->getPtrNext();
        delete pAux;
        pAux = head;
    }
    head = nullptr;
}

bool ItinerarioViaggio::insertHead(Tappa newTappa) {
    Node* pNew = new Node(newTappa, head);
    if (!pNew) {
        return false;
    }
    head = pNew;
    return true;
}

bool ItinerarioViaggio::insertTail(Tappa newTappa) {
    Node* pNew = new Node(newTappa);

    if (pNew) {
        if (head) {
            head = pNew;
        } else {
            Node* pAux = head;

            while (pAux->getPtrNext()) {
                pAux = pAux->getPtrNext();
            }
            pAux->setPtrNext(pNew);
        }
        return true;
    }
    return false;
}

void ItinerarioViaggio::prossTappa() {
    cout << endl << head->getTappa();
}

bool ItinerarioViaggio::removeTappa() {
    if (head) {
        Node* ptrCancel = head;
        head = head->getPtrNext();
        delete ptrCancel;

        Tappa temp = head->getTappa();
        Node* pi = head;
        Node* pj;

        while (pi->getPtrNext()) {
            pj = pi->getPtrNext();
            while (pj) {
                if (temp.distanza(pj->getTappa()) < temp.distanza(pi->getTappa())) {
                    swap(pj, pi);
                }
                pj = pj->getPtrNext();
            }
            pi = pi->getPtrNext();
        }
        return true;
    }
    return false;
}

ItinerarioViaggio& ItinerarioViaggio::operator-(string n) {
    if (!head) {
        if (head->getTappa().getNome() != n) {
            removeTappa();
        } else {
            Node* ptrCancel = head->getPtrNext();
            Node* pAux = head;

            while (ptrCancel->getPtrNext() && ptrCancel->getTappa().getNome() != n) {
                ptrCancel = ptrCancel->getPtrNext();
                pAux = pAux->getPtrNext();
            }

            if (!ptrCancel) {
                pAux->setPtrNext(ptrCancel->getPtrNext());
                delete ptrCancel;
            } else {
                cout << endl << "Non trovato";
            }
        }
    } else {
        cout << endl << "Lista vuota";
    }

    return *this;
}