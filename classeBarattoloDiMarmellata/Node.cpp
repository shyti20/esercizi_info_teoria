#include "Node.h"

Node::Node() {
    Data scadenza;
    Data arrivo;
    ptrNext = nullptr;
    setInfo(scadenza, 0, "Undefined", arrivo, 0.0);
}

Node::Node(BarattoloDiMarmellata info, Node* pnode) {
    this->info = info;
    ptrNext = pnode;
}

Node::Node(BarattoloDiMarmellata info) {
    this->info = info;
}

Node::~Node() {

}

void Node::setPtrNext(Node* pnode) {
    ptrNext = pnode;
}

void Node::setInfo(BarattoloDiMarmellata info) {
    this->info = info;
}

Node* Node::getPtrNext() {
    return ptrNext;
}

BarattoloDiMarmellata Node::getInfo() {
    return info;
}