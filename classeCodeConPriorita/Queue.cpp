#include "Queue.h"

Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}

Queue::Queue(int info, int priority) {
    front->setInfo(info);
    front->setPriority(priority);
    front->setPtrNext(rear);
    rear = front;
    rear->setPtrNext(front);
}

Queue::Queue(const Queue& coda) {
    Node* pAux = coda.front;
    while (pAux != coda.rear) {
        insert(pAux->getInfo(), pAux->getPriority());
        pAux = pAux->getPtrNext();
    }
    
}

Queue::~Queue() {
    Node* pDel = front;

    while (front != rear) {
        front = front->getPtrNext();
        delete pDel;
        pDel = front;
    }
}

bool Queue::insert(int info, int priority) {
    Node* pNew = new Node(info, priority);
    if (!pNew) {
        return false;
    }

    if (!front && !rear) {
        front = rear = pNew;
    } else {
        rear->setPtrNext(pNew);
        rear = pNew;
    }
    rear->setPtrNext(front);
    return true;
}

bool Queue::remove(int info, int priority) {
    if (!front && !rear) {
        return false;
    } else {
        rear->setPtrNext(front->getPtrNext());
        delete front;
        front = rear;
        return true;
    }
}

