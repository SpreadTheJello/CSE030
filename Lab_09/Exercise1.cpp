#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    Stack stack;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 10; i++){
        stack.push(arr[i]);
    }
    cout << "Top of stack: " << stack.top() << endl;
    cout << "Size of stack: " << stack.size() << endl;
    if(stack.isEmpty()){
        cout << "Stack is empty." << endl;
    }
    else{
        cout << "Stack is empty." << endl;
    }
    cout << "Values of stack: [";
    stack.print();
    cout << "]" << endl;

}