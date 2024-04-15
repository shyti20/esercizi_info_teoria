#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue {
    private:
        Node* front;
        Node* rear;
    public:
        Queue();
        Queue(int info, int priority);
        Queue(const Queue& coda);
        ~Queue();
        bool insert(int info, int priority);
        bool remove(int info, int priority);
};

#endif