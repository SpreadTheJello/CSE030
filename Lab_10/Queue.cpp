#include "Queue.h"

Queue::Queue(){

}

Queue::~Queue(){

}

void Queue::enqueue(int value){
    insertAtBack(value);
}

int Queue::dequeue(){
    int item = first->val;
    removeFromFront();
    return item;
}

int& Queue::front(){
    return first->val;
}