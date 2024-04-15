#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node {
    private:
        Node* ptrNext;
        int priority;
        int info;
    public:
        Node();
        Node(int info, int priority, Node* pnode);
        Node(int info, int priority);
        ~Node();
        void setInfo(int info);
        void setPriority(int priority);
        void setPtrNext(Node* pnode);
        Node* getPtrNext();
        int getPriority();
        int getInfo();
};
#endif