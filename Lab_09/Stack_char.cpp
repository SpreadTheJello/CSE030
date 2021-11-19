#include "Stack_char.h"

Stack::Stack(){

}

Stack::~Stack(){

}

void Stack::push(char value){
    insertAtBack(value);
}

char Stack::pop(){
    char item = first->val;
    removeFromBack();
    return item;
}

char& Stack::top(){
    return last->val;
}