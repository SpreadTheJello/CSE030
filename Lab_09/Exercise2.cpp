#include <iostream>
#include "Stack_char.h"

using namespace std;

int main(){
    Stack stack;
    cout << "Function call" << "\t\tOutput" << "\t\tStack Contents\n" << endl;
    cout << "isEmpty()";
    if(stack.isEmpty()){
        cout << "\t\ttrue ";
    }
    else{
        cout << "\t\tfalse ";
    }
    cout << "\t\t"; 
    stack.print();
    
    cout << "\npush(A)";
    stack.push('A');
    cout << "\t\t\t\t\t";
    stack.print();

    cout << "\npush(Y)";
    stack.push('Y');
    cout << "\t\t\t\t\t";
    stack.print();
    
    cout << "\nsize()\t\t\t";
    cout << stack.size() << "\t\t";
    stack.print();

    cout << "\npop()\t\t\t" << stack.top();
    stack.pop();
    cout << "\t\t";
    stack.print();

    cout << "\nisEmpty()";
    if(stack.isEmpty()){
        cout << "\t\ttrue ";
    }
    else{
        cout << "\t\tfalse ";
    }
    cout <<"\t\t";
    stack.print();
    
    cout << "\npush(D)";
    stack.push('D');
    cout << "\t\t\t\t\t";
    stack.print();
    
    cout << "\ntop()\t\t\t" << stack.top() << "\t\t";
    stack.print();
    
    cout << "\npush(T)";
    stack.push('T');
    cout << "\t\t\t\t\t";
    stack.print();

    cout << "\npop()" << "\t\t\t" << stack.top();
    stack.pop();
    cout << "\t\t";
    stack.print();
    cout << "\n\n";
}