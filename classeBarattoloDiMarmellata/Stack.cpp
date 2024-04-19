#include "Stack.h"

Stack::Stack() {
    top = nullptr;
}

Stack::Stack(BarattoloDiMarmellata info) {
    top->setInfo(info);
}

Stack::Stack(Stack& stack) {

}

Stack::~Stack() {
    Node* pDel = top;

    while(top) {
        pDel = top;
        top = top->getPtrNext();
        delete pDel;
    }
}

bool Stack::push(BarattoloDiMarmellata info) {
    Node* pNew = new Node(info, top);
    
    top = pNew;
    return true
}

bool Stack::pop() {
    Node* pDel = top;
    top = top->getPtrNext();
    delete pDel;
}

Node* Stack::getTop() {
    return top;
}