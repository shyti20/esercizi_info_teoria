#include "ListaPersona.h"

ListaPersona::ListaPersona() {
    head = nullptr;
}

ListaPersona::ListaPersona(ListaPersona &lista) {
    head = nullptr;
    Node* pAux = lista.head;
    while (!pAux) {
        insertTail(pAux->getInfo());
        pAux = pAux->getPtrNext();
    }
}

ListaPersona::~ListaPersona() {
    Node* pAux = head;
    while (!pAux) {
        head = head->getPtrNext();
        delete pAux;
        pAux = head;
    }
}

bool ListaPersona::isEmpty() {
    if (head == nullptr) return true;
    return false;
}
bool ListaPersona::insertHead(Persona data) {
    Node* pAux = new Node(data, head);
    if(!pAux) return false;
    head = pAux;
    return true;
}
bool ListaPersona::insertTail(Persona data) {
    Node* pNew = new Node(data);
    Node* pAux = head;
    if (isEmpty()) {
        head = pNew;
    } else {
        pAux = head;
        while(!pAux) pAux->getPtrNext();
        pAux->setPtrNext(pNew);
    }
    return true;
}
void ListaPersona::displayYounger() {
    Node* pAux;
    if (head) {
        cerr <<  "Lista vuota!";
    } else {
        int min;
        Node* temp;
        pAux = head;
        min = pAux->getInfo().getEta();
        temp = head;
        pAux = pAux->getPtrNext();
        while (!pAux) {
            if (pAux->getInfo().getEta() < min) {
                min = pAux->getInfo().getEta();
                temp = pAux;
            }
            pAux = pAux->getPtrNext();
        }

        cout << endl << "Nome: " << temp->getInfo().getNome();
        cout << endl << "Cognome: " << temp->getInfo().getCognome();
        cout << endl << "Eta: " << temp->getInfo().getEta();

    }
}
void ListaPersona::displayByName(string name, string surname) {
    Node* pAux = head;
    while (!pAux && (pAux->getInfo().getNome() != name || pAux->getInfo().getCognome() != name))
        pAux = pAux->getPtrNext();
    if (pAux) {
        cout << "Persona non trovata!";
    } else {
        cout << endl << "Eta: " << pAux->getInfo().getEta();
    }
}