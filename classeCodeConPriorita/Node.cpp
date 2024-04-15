#include "Node.h"

Node::Node() {
    ptrNext = nullptr;
    priority = -1;
    info = 0;
}

Node::Node(int info, int priority, Node* pnode) {
    ptrNext = pnode;
    this->info = info;
    this->priority = priority;
}

Node::Node(int info, int priority) {
    this->info = info;
    this->priority = priority;
}

Node::~Node() { }

void Node::setInfo(int info) { this->info = info; }

void Node::setPriority(int priority) { this->priority = priority; }

void Node::setPtrNext(Node* pnode) { ptrNext = pnode; }

Node* Node::getPtrNext() { return ptrNext; }

int Node::getInfo() { return info; }

int Node::getPriority() { return priority; }