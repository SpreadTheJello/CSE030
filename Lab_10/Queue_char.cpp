#include "Queue_char.h"

Queue::Queue(){

}

Queue::~Queue(){

}

void Queue::enqueue(char value){
    insertAtBack(value);
}

char Queue::dequeue(){
    int item = first->val;
    removeFromFront();
    return item;
}

char& Queue::front(){
    return first->val;
}