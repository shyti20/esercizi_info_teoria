#include "Playlist.h"

Playlist::Playlist() {
    head = nullptr;
}

Playlist::~Playlist() {
    Node* pAux = head;
    while (pAux) {
        head = head->getPtrNext();
        delete pAux;
        pAux = head;
    }
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

Node* Playlist::ricercaBrano() {
    string title;

    do {
        cout << endl << "Inserisci il brano da ricercare: ";
        cin >> title;
    } while (title != "");

    Node* pAux = head;

    while (!pAux && pAux->getBrano().getTitolo() != title) {
        pAux = pAux->getPtrNext();
    }

    return pAux;
}

Brano& Playlist::maxDurata() {
    Node* pAux = head;
    Brano max = head->getBrano();

    while (!pAux) {
        if (max.getDurata() < pAux->getBrano().getDurata()) {
            max = pAux->getBrano();
            pAux = pAux->getPtrNext();
        }
        pAux = pAux->getPtrNext();
    }

    return max;
}

void Playlist::prossBrano() {
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