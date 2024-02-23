#include "Node.h"

Node::Node() {
    ptrNext = nullptr;
}

Node::Node(Tappa newTappa) {
    infoTappa = newTappa;
    ptrNext = nullptr;
}

Node::Node(Tappa newTappa, Node* node) {
    infoTappa = newTappa;
    ptrNext = node;
}

void Node::setPtrNext(Node* node) {
    ptrNext = node;
}

void Node::setTappa(Tappa newTappa) {
    infoTappa = newTappa;
}

Node* Node::getPtrNext() {
    return ptrNext;
}

Tappa Node::getTappa() {
    return infoTappa;
}