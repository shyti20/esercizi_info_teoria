#include "Queue.h"

Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}

Queue::Queue(BarattoloDiMarmellata info) {
    front = nullptr;
    rear = nullptr;
}

Queue::~Queue() {
    Node* pDel;
    while (front) {
        pDel = front;
        front = front->getPtrNext();
        delete pDel;
    }
}

void Queue::insert(BarattoloDiMarmellata info) {
    Node* pNew = new Node(info);
    if (!pNew) {
        return false;
    }

    if (isEmpty()) {
        front = rear = pNew;
    } else {
        rear->setPtrNext(pNew);
        rear = pNew;
    }
    rear->setPtrNext(front);
    return true;
}

void Queue::remove() {
    if (isEmpty()) {
        return false;
    } else {
        rear->setPtrNext(front->getPtrNext());
        delete front;
        front = rear;
        return true;
    }
}

Node* Queue::getFornt() {
    return front;
}

Node* Queue::getRear() {
    return rear;
}

bool Queue::isEmpty() {
    return (!fornt && !rear);
}