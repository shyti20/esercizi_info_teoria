#include "Node.h"

Node::Node() {
    ptrNext = nullptr;
    b.setAll("Undefined", 0, 0);
}

Node::Node(Brano brano, Node* pnode) {
    ptrNext = pnode;
    this->b.setAll(brano.getTitolo(), brano.getDurata(), brano.getPunt());
}

Node::Node(Brano brano) {
    this->b.setAll(brano.getTitolo(), brano.getDurata(), brano.getPunt());
}

Brano Node::getBrano() { return b; }

Node* Node::getPtrNext() { return ptrNext; }

void Node::setBrano(Brano brano) {
    this->b.setAll(brano.getTitolo(), brano.getDurata(), brano.getPunt());
}

void Node::setPtrNext(Node* ptrNext) {
    this->ptrNext = ptrNext;
}

void Node::setAll(Brano brano, Node* pnode) {
    ptrNext = pnode;
    this->b.setAll(brano.getTitolo(), brano.getDurata(), brano.getPunt());
}