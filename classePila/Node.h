#ifndef NODE_H
#define NODE_H

class Node {
    private:
        Node* ptrNext;
        int info;
    public:
        Node();
        Node(int info);
        Node(Node* ptrNext);
        Node(Node* pnode, int info);
        ~Node();
        void setPtrNext(Node* pnode);
        Node* getPtrNext();
        int getInfo();
        void setInfo(int info);
};
#endif