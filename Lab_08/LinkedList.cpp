#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList(){ // Constructor
    first = NULL;
    last = NULL;
}

LinkedList::~LinkedList(){ // Destructor
    while(!isEmpty()){
        removeFromBack();
    }
}

void LinkedList::insertAtBack(int value){ // insert back
    Node* v = new Node;
    v->val = value;
    if(first == NULL){
        v->next = NULL;
        first = v;
        last = v;
    }
    else{
        v->next = NULL;
        last->next = v;
        last = v;
    }
}

bool LinkedList::removeFromBack(){
    if(first == NULL){
        return false;
    }
    if(first == last){
        delete first;
        first = NULL;
        last = NULL;
        return true;
    }
    else{
        Node* old = first;
        while(old->next != last){
            old = old->next;
        }
        delete last;
        last = old;
        return true;
    }
}

void LinkedList::print(){
    if(first != NULL){
        Node* n = first;
        while(n != last){
            cout << n->val << ",";
            n = n->next;
        }
        if(n != NULL){
            cout << n->val;
        }
    }
}

bool LinkedList::isEmpty(){
    if(first == NULL){
        return true;
    }
    else{
        return false; 
    }
}

int LinkedList::size(){
    Node* tempNode = first;
    int count = 1;
    if(!isEmpty()){
        while(tempNode != last){
            count++;
            tempNode = tempNode->next;
        }
        return count;
    }
    else{
        return 0;
    }
}

void LinkedList::clear(){
    while(!isEmpty()){
        removeFromBack();
    }
}