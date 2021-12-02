#include <iostream>
#include "LinkedList.h"
#include "Queue.h"

using namespace std;

int main(){
    Queue queue;

    int arr[10] = {0,1,2,3,4,5,6,7,8,9}; // 10 values will be added to queue
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
        queue.enqueue(arr[i]);
    }

    if(!queue.isEmpty()){ // check if queue is empty
        cout << "Queue is NOT empty" << endl;
    }

    else{
        cout << "Queue IS empty" << endl;
    }

    cout << "The Queue: "; queue.print(); cout << endl;


    cout << "Removing front value from Queue: "; // dequeue exception
    try{
        if(queue.isEmpty()){
            throw 1;
        }
        else{
            cout << "(Value " << queue.dequeue() << ")" << endl;
        }
    }
    catch(...){
        cout << "Call to dequeue() generated an exception, because the queue is empty" << endl;
    }


    cout << "Getting front value from Queue: "; // front exception
    try{
        if(queue.isEmpty()){
            throw 1;
        }
        else{
            cout << queue.front() << endl;
        }
    }
    catch(...){
        cout << "Call to front() generated an exception, because the queue is empty" << endl;
    }


    cout << "Inseting a new value to the Queue: " << endl; // add a value to the queue
    queue.enqueue(11);
    cout << "The Queue: "; queue.print(); cout << endl;
}