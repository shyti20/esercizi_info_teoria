#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "Node.h"

using namespace std;

class Stack {
    private:
        Node* top;
        bool insertTail(int info);
    public:
        Stack();
        Stack(int info);
        ~Stack();
        Stack(const Stack& pringles);
        bool push(int info);
        bool pop();
        Node* getTop();
        bool isEmpty();
};
#endif