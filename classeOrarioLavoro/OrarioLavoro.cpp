#include "OrarioLavoro.h"

OrarioLavoro::OrarioLavoro() {
    head = nullptr;
}

OrarioLavoro::OrarioLavoro(const OrarioLavoro newOrario) {
    Node* pAux = newOrario.head;
    head = nullptr;
    while (!pAux) {
        insertTail(pAux->getDipendente());
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

bool OrarioLavoro::insertTail(Dipendente newDip) {
    Node* pNew = new Node(newDip);

    if (!pNew) {
        return false;
    }

    if (!head) {
        Node* pAux = head;

        while (pAux->getPtrNext() != nullptr) {
            pAux = pAux->getPtrNext();
        }

        pAux->setPtrNext(pNew);

        return true;
    } else {
        head = pNew;
    }
}

bool OrarioLavoro::insertHead(Dipendente newDip) {
    Node* pNew = new Node(newDip, head);

    if (!pNew) {
        return false;
    }

    head = pNew;
    return true;
}

bool OrarioLavoro::isEmpty() {
    return !(head);
}

void OrarioLavoro::cronologia() {

    if (!head) {
        cout << endl << "Lista vuota";
    } else {
        OrarioLavoro temp;
        Node* pAux = head;

        while (pAux) {
            temp.insertTail(pAux->getDipendente());
            pAux = pAux->getPtrNext();
        }

        Node* pi = head, *pj;
        Dipendente temp;

        while (!pi->getPtrNext()) {
            pj = pi->getPtrNext();
            while (!pj) {
                if (pi->getDipendente().getOrario() > pj->getDipendente().getOrario()) {
                    temp = pi->getDipendente();
                    pi->setDipendente(pj->getDipendente());
                    pj->getDipendente(temp);
                }
                pj = pj->getPtrNext();
            }
            pi = pi->getPtrNext();
        }

        pAux = temp.head;

        while(pAux) {
            cout << endl << "Nome: " << temp.getDipendente().getNome();
            cout << endl << "Cognome: " << temp.getDipendente().getCognome();
            cout << endl << "Orario entrata: " << temp.getDipendente().getOrario();
            pAux = pAux->getPtrNext();
        }
    }
}

void OrarioLavoro::stampaFascia() {
    Ora min, max;
    int massimoMin, minimoMin, minimOre, massimOre;

    cout << endl << "Inserisci il primo estremo delle ore dell'entrata: ";
    cin >> minimOre;
    cout << endl << "Inserisci i minuti: ";
    cin >> minimoMin;
    min.setAll(minimOre, minimoMin);

    cout << endl << "Inserisci il secondo estremo delle ore dell'entrata: ";
    cin >> massimOre;
    cout << endl << "Inserisci i minuti: ";
    cin >> massimoMin;
    max.setAll(minimOre, minimoMin);

    Node* pAux = head;

    while (pAux) {
        if (pAux->getDipendente.getOrario() >= min || pAux->getDipendente().getOrario() <= max) {
            cout << endl << "Nome: " << pAux->getDipendente().getNome();
            cout << endl << "Cognome: " << pAux->getDipendente().getCognome();
            cout << endl << "Orario entrata: " << pAux->getDipendente().getOrario();
        }
        pAux = pAux->getPtrNext();
    }
}

Ora OrarioLavoro::ricerca(Dipendente temp) {
    Node* pAux = head;

    while (!pAux && pAux->getDipendente() != temp) {
        pAux = pAux->getPtrNext();
    }

    if (pAux) {
        return pAux->getDipendente().getOrario();
    } else {
        cout << endl << "Dipendente non trovato";
        return pAux->getDipendente().getOrario();
    }
}

bool OrarioLavoro::nextEquals(Dipendente newDip) {
    int j = 0;
    Node* pAux = head;
    for (int i = 0; pAux; i++) {
        if (pAux->getDipendente().getOrario() >= newDip.getOrario()) {
            j++;
        }
        pAux = pAux->getPtrNext();
    }

    if (j == i) {
        return true;
    } else {
        return false;
    }
}

bool OrarioLavoro::insertEqNext(Dipendente newDip) {
    if (nextEquals(newDip)) {
        insertTail(newDip);
    }
}

bool OrarioLavoro::insertNew() {
    if (head) {
        int n;
        Dipendente newDip;

        cin >>  n;

        for (int i = 0; i < n; i++) {
            cin >> newDip;
            insertTail(newDip);
        }
        return true;
    } else {
        return false;
    }
}


