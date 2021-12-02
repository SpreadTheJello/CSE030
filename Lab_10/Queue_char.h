#ifndef QUEUE_CHAR_H 
#define QUEUE_CHAR_H

#include "LinkedList_char.h"

class Queue : public LinkedList{
    public:
    Queue();
    ~Queue();
    void enqueue(char value);
    char dequeue();
    char& front();
};

#endif