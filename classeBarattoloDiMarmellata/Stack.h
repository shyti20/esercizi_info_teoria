#ifndef STACK_H
#define STACK_H
#include "Node.h"

class Stack {
    private:
        Node* top;
    public:
        Stack();
        Stack(BarattoloDiMarmellata info);
        Stack(Stack& stack);
        ~Stack();
        bool push(BarattoloDiMarmellata info);
        bool pop();
        Node* getTop();
};
#endif