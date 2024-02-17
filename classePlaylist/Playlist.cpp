#include "Playlist.h"

Playlist::Playlist() {
    head = nullptr;
}

Playlist::~Playlist() {
    Node* pAux = head;
    while (!pAux) {
        head = head->getPtrNext();
        delete pAux;
        pAux = head;
    }
    head = nullptr;
}

Playlist::Playlist(const Playlist& newPlalist) {
    head = nullptr;
    Node* pAux = newPlalist.head;
    while (!pAux) {
        insertTail(pAux->getBrano());
        pAux = pAux->getPtrNext();
    }
}

void Playlist::insertTail(Brano& newBrano) {
    Node* pNew = new Node(newBrano);
    if (!head) {
        Node* pAux = head;
        while(!pAux->getPtrNext()) {
            pAux = pAux->getPtrNext();
        }
        pAux->setPtrNext(pNew);
    } else {
        pNew = head;
    }
}

Node* Playlist::ricercaBrano(string t) {

    Node* pAux = head;

    while (!pAux && pAux->getBrano().getTitolo() != t) {
        pAux = pAux->getPtrNext();
    }

    return pAux;
}

Brano Playlist::maxDurata() {
    Node* pAux = head;
    Brano max;

    while (!pAux) {
        if (max.getDurata() < pAux->getBrano().getDurata()) {
            max = pAux->getBrano();
        }
        pAux = pAux->getPtrNext();
    }

    return max;
}

void Playlist::ascolta() {
    if (!head) {
        Node* ptrCancel;
        ptrCancel = head;
        head = head->getPtrNext();
        delete ptrCancel;
    } else {
        cout << endl << "Lista vuota";
    }
}

istream& operator>>(istream& in, Playlist& newPlaylist) {
    int n;
    Brano newBrano;
    newPlaylist.clear();
    in >> n;

    for (int i = 0; i < n; i++) {
        in >> newBrano;
        newPlaylist.insertTail(newBrano);
    }

    return in;
}

ostream& operator<<(ostream& out, Playlist& newPlaylist) {
    Node* pAux = newPlaylist.head;
    int i = 0;

    while (!pAux) {
        out << endl<< "Brano nr" << i + 1;
        out << pAux->getBrano();
        pAux = pAux->getPtrNext();
        i++;
    }

    return out;
}

void Playlist::prossBrano() {
    cout << head;
}

Brano Playlist::operator-(string t) {
    Node* ptrCancel = ricercaBrano(t);
    Node* pAux = head;

    while (pAux->getPtrNext() != ptrCancel) {
        pAux = pAux->getPtrNext();
    }

    pAux->setPtrNext(ptrCancel->getPtrNext());
    Brano temp = ptrCancel->getBrano();
    delete ptrCancel;
    return temp;
}

void Playlist::operator!() {
    Node* pi = head, *pj;

    while (!pi->getPtrNext()) {
        pj = pi->getPtrNext();
        while (!pj) {
            if (pi->getBrano().getPunt() > pj->getBrano().getPunt()) {
                swap(pi, pj); 
            }
            pj = pj->getPtrNext();
        }
        pi = pi->getPtrNext();
    }
}

void swap(Node* a, Node* b) {
    Brano temp;

    temp = a->getBrano();
    a->setBrano(b->getBrano());
    b->setBrano(temp);
}

Playlist& Playlist::operator+(Brano& newBrano) {
    insertTail(newBrano);
    !(*this);

    return *this;
}

void Playlist::clear() {
    Node* pAux = head;
    while (pAux) {
        head = head->getPtrNext();
        delete pAux;
        pAux = head;
    }
}