#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int checkArraySort(string *A, int array_size){
    bool ascending, descending;
    int count = 0;
    for(int i = 0; i < array_size; i++){ // see if array is ascending.
        for(int j = i + 1; j < array_size; j++){
            if(A[i] < A[j]){
                count++;
            }
        }
    }
    if(count == array_size){
        ascending = true;
    }

    count = 0; // reset count
    for(int i = 0; i < array_size; i++){ // see if array is descending.
        for(int j = i + 1; j < array_size; j++){
            if(A[i] > A[j]){
                count++;
            }
        }
    }
    if(count == array_size){
        descending = true;
    }

    if(ascending){ // returns as needed
        return 1;
    }
    else if(descending){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    int array_size;
    cout << "Enter the size of the string array: ";
    cin >> array_size;
    string *str = new string;

    cout << "Enter the values of the array, seperated with a space: ";
    for(int i = 0; i < array_size; i++){
        cin >> str[i];
    }

    int result = checkArraySort(str, array_size);
    if(result == -1){
        cout << "The array is sorted in descending order!" << endl;
    }
    else if(result == 1){
        cout << "The array is sorted in ascending order!" << endl;
    }
    else{
        cout << "The array is not sorted!" << endl;
    }

    return 0;
}