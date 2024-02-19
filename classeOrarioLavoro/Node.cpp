#include "Node.h"

Node::Node() {
    setAll("Undefined", "Undefined", 0, 0);
    ptrNext = nullptr;
}

Node::Node(Node* pnext, Dipendente info) {
    this->info = info;
    ptrNext = pnext
}

Node::Node(Dipendente info) {
    this->info = info;
}

Node::~Node() {

}

void Node::setDipendente(Dipendente info) {
    this->info = info;
}

void Node::setPtrNext(Node* pnext) {
    ptrNext = pnext;
}

Node* Node::getPtrNext() { return ptrNext; }

Dipendente Node::getDipendente() { return info; }

void setAll(Node* pnext, Dipendente info) {
    ptrNext = pnext;
    this->info = info;
}