#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* pAux = head;
    while (pAux != nullptr) {
        head = head->getPtrNext();
        delete pAux;
        pAux = head;
    }
}

LinkedList::LinkedList(int info, int priority) {
    head = nullptr;
    head->setInfo(info);
    head->setPriority(priority);
}

LinkedList::LinkedList(const LinkedList& newList) {
    head = nullptr;
    Node* pAux = newList.head;
    while (pAux) {
        insertTail(pAux->getInfo(), pAux->getPriority());
        pAux = pAux->getPtrNext();
    }
}

bool LinkedList::insertHead(int info, int priority) {
    Node* pNew = new Node(info, priority, head);
    if (!pNew) {
        return false;
    }

    pNew->setPtrNext(head);
    head = pNew;
    return true;
}

bool LinkedList::insertTail(int info, int priority) {
    Node* pNew = new Node(info, priority, head);
    if (!pNew) {
        return false;
    }
    
    if (!head) {
        insertHead(info, priority);
    } else {
        Node* pAux = head;

        while (pAux->getPtrNext()) {
            pAux = pAux->getPtrNext();
        }

        pAux->setPtrNext(pNew);
    }
    return true;
}

bool LinkedList::removeElement(int info, int priority) {
    if (!head) {
        return false;
    } else if (head->getInfo() == info && head->getPriority() == priority) {
        delete head;
    } else {
        Node* pAux1, *pAux2, *pAux3;
        pAux1 = head;
        while (pAux1->getPtrNext() && pAux1->getPtrNext()->getInfo() != info && pAux1->getPtrNext()->getPriority() != priority) {
            pAux1 = pAux1->getPtrNext();
        }
        if (pAux1) {
            pAux2 = pAux1->getPtrNext();
            pAux3 = pAux2->getPtrNext();
            delete pAux2;
            pAux1->setPtrNext(pAux3);
        }
    }
    return true;
}