#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"

class Queue {
    private:
        Node* front;
        Node* rear;
    public:
        Queue();
        Queue(BarattoloDiMarmellata info);
        ~Queue();
        void insert(BarattoloDiMarmellata info);
        void remove();
        Node* getFornt();
        Node* getRear();
        bool isEmpty();
};
#endif