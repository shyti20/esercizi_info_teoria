#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {

}

LinkedList::LinkedList(const LinkedList& lista) {

}

bool LinkedList::isEmpty() {
    bool flag = (!head) ?  true : false;
    return flag;
}

void LinkedList::display() {
    Node *pAux = head;
    if (isEmpty()) {
        cout << endl << "Lista vuota";
    } else {
        while (pAux != nullptr) {
            cout << endl << " " << pAux->getInfo();
            pAux = pAux->getPtrNext();
        }
    }
}

bool LinkedList::insertHead(int data) {
    Node* pNew = new Node(data, head);
    if (!pNew) { 
        return false;
    }

    head = pNew;
    return true;
}

bool LinkedList::insertTail(int data) {
    Node* pNew = new Node(data);

    if (!pNew) {
        return false;
    }

    if (isEmpty()) {
        head = pNew;
    } else {
        Node* pAux = head;
        while (pAux->getPtrNext() != nullptr) {
                pAux = pAux->getPtrNext();
        }
        pAux->setPtrNext(pNew);
        return true;
    }
}

bool LinkedList::removeElement(int data) {
    if (!isEmpty()) {
        Node* ptrCancel;
        if (data == head->getInfo()) {
            ptrCancel = head;
            head = head->getPtrNext();
            delete ptrCancel;
            return true;
        } else {
            Node* pCurrent = head;
            ptrCancel = head->getPtrNext();

            while (ptrCancel->getPtrNext() != nullptr && ptrCancel->getInfo() != data) {
                ptrCancel = ptrCancel->getPtrNext();
                pCurrent = pCurrent->getPtrNext();
            }

            if (ptrCancel != nullptr) {
                pCurrent->setPtrNext(ptrCancel->getPtrNext());
                delete ptrCancel;
                return true;
            } else {
                return false;
            }
        }
    }
    return false;
}





