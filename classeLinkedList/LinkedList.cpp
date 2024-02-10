#include "LinkedList.h"
#include <iostream>

using namespace std;

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

LinkedList::LinkedList(const LinkedList& lista) {
    head = nullptr;
    Node* pAux = lista.head;
    while (pAux != nullptr) {
        insertTail(pAux->getInfo());
        pAux = pAux->getPtrNext();
    }
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

bool LinkedList::insertHead(int element) {
    Node* pNew = new Node(element, head);
    if (!pNew) { 
        return false;
    }

    head = pNew;
    return true;
}

bool LinkedList::insertTail(int element) {
    Node* pNew = new Node(element);

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

bool LinkedList::removeElement(int element) {
    if (!isEmpty()) {
        Node* ptrCancel;
        if (element == head->getInfo()) {
            ptrCancel = head;
            head = head->getPtrNext();
            delete ptrCancel;
            return true;
        } else {
            Node* pCurrent = head;
            ptrCancel = head->getPtrNext();

            while (ptrCancel->getPtrNext() != nullptr && ptrCancel->getInfo() != element) {
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
void LinkedList::displayHelper() {
    displayRec(head);
}

void LinkedList::displayRec(Node* head) {
    if (head != nullptr) {
        cout << endl << " " << head->getInfo();
        displayRec(head->getPtrNext());
    }
}

/*Node* LinkedList::getHead() {
    return head;
}*/

Node* LinkedList::search(int element) {
    Node* pAux = head;
    while (!pAux && pAux->getInfo() != element) {
        pAux = pAux->getPtrNext();
    }
    
    return pAux;
}

float LinkedList::avg() {
    Node* pAux = head;
    float avg = 0;
    int i = 0;

    while (!pAux) {
        pAux = pAux->getPtrNext();
        avg += pAux->getInfo();
        i++;
    }

    return (avg / i);
}

int LinkedList::counter() {
    Node* pAux = head;
    int i = 0;
    while (!pAux) {
        pAux = pAux->getPtrNext();
        i++;
    }
    return i;
}

int LinkedList::max() {
    Node* pAux;
    int max;
    
    if (!pAux) {
        max = pAux->getInfo();
        pAux = pAux->getPtrNext();
    }

    while (!pAux) {
        if (pAux->getInfo() > max) {
            max = pAux->getInfo();
        }
        pAux = pAux->getPtrNext();
    }

    return max;
}

int LinkedList::sumEven() {
    Node* pAux = head;
    int sum = 0;

    while (!pAux) {
        if (pAux->getInfo() % 2 == 0) {
            sum += pAux->getInfo();
        }
        pAux = pAux->getPtrNext();
    }
    return sum;
}

int LinkedList::sumOdd() {
    Node* pAux = head;
    int sum = 0;

    while (!pAux) {
        if (pAux->getInfo() % 2 != 0) {
            sum += pAux->getInfo();
        }
        pAux = pAux->getPtrNext();
    }
    return sum;
}

LinkedList& LinkedList::sqList(int element) {
    LinkedList temp;
    Node* pAux = head;

    while (!pAux) {
        temp.insertTail(pow(pAux->getInfo(), 2));
        pAux = pAux->getPtrNext();
    }

    return temp;
}

bool LinkedList::removeEvenHead() {
    Node* ptrCancel;
    if (!head && head->getInfo() % 2 == 0) {
        ptrCancel = head;
        head = head->getPtrNext();
        delete ptrCancel;
        return true;
    }
    return false;
}

void LinkedList::multiplyNeg() {
    Node* pAux = head;

    while (!pAux) {
        if (pAux->getInfo() < 0) {
            pAux->setInfo(pAux->getInfo() * -1);
        }
        pAux = pAux->getPtrNext();
    }
}