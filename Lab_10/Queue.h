#ifndef QUEUE_H 
#define QUEUE_H

#include "LinkedList.h"

class Queue : public LinkedList{
    public:
    Queue();
    ~Queue();
    void enqueue(int value);
    int dequeue();
    int& front();
};

#endif