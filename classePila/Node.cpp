#include "Node.h"

Node::Node() {
    ptrNext = nullptr;
}

Node::Node(int info) {
    this->info = info;
    ptrNext = nullptr;
}

Node::Node(Node* pnode, int info) {
    ptrNext = pnode;
    this->info = info;
}

Node::~Node() {

}

void Node::setPtrNext(Node* pnode) {
    ptrNext = pnode;
}

Node* Node::getPtrNext() { return ptrNext; }

int Node::getInfo() { return info; }

void Node::setInfo(int info) {
    this->info = info;
}