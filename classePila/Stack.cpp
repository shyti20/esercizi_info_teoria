#include "Stack.h"

Stack::Stack() {
    top = nullptr;
}

Stack::Stack(int info) {
    top = nullptr;
    top->setInfo(info);
}

Stack::~Stack() {
    Node* pAux = top;

    while(pAux) {
        top = top->getPtrNext();
        delete pAux;
        pAux = top;
    }
}

Stack::Stack(const Stack& pringles) {

}

bool Stack::push(int info) {
    Node *pNew = new Node(info);
    if(!pNew){
        cerr << "Allocazione fallita. " << endl;
        return false;
    }
    pNew->setPtrNext(top);
    top = pNew;
    return true;
}

bool Stack::pop() {
    Node *pCancel = top;
    if(!isEmpty()){
        cout << endl << top->getInfo();
        top = top->getPtrNext();
        delete pCancel;
        return true;
    }
    cout << endl << "Stack vuoto";
    return false;
}

Node* Stack::getTop() { return top; }

bool Stack::isEmpty() { return !(top); }

bool Stack::insertTail(int info) {
    Node* pNew = new Node(nullptr, info);
    Node* pAux = top;

    if (!top) {
        return false;
    } else {
        while(pAux->getPtrNext()) {
            pAux = pAux->getPtrNext();
        }

        pAux->setPtrNext(pNew);
        return true;
    }
}