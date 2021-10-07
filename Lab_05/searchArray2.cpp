#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int checkArraySort(string *A, int array_size){
    int count = 0;
    for(int i = 0; i < array_size; i++){ // see if array is ascending.
        if(A[i] < A[i+1]){
            count++;
        }
    }
    if(count+1 == array_size){
        return 1;
    }

    count = 0; // reset count
    for(int i = 0; i < array_size; i++){ // see if array is descending.
        if(A[i] > A[i+1]){
            count++;
        }
    }
    if(count == array_size){
        return -1;
    }

    return 0;
}

int binarySearchR(string *A, int array_size, string key){
    int num = 0;
    if(A[0] < A[1]){
        while(num <= array_size){
            int middle = num + (array_size - num) / 2;
            if(A[middle] == key){ // if key is in middle of array
                return middle;
            }
            if(A[middle] < key){ // key must be to the right
                num = middle + 1;
            }
            else{ // key must be to the left
                array_size = middle - 1;
            }
        }   
    }
    else{
        while(num <= array_size){
            int middle = num + (array_size - num) / 2;
            if(A[middle] == key){ // if key is in middle of array
                return middle;
            }
            if(A[middle] > key){ // key must be to the left
                num = middle + 1;
            }
            else{ // key must be to the right
                array_size = middle - 1;
            }
        }   
    }
    return -1;
}

int main(){
    string dummyVar;
    string key;
    int count = 0;

    ifstream inFile;

    inFile.open ("words_in.txt");
    if(inFile.eof()){ // checks for error if no words.
        return 0;
    }

    while(!inFile.eof()){ // gets how many words
        inFile >> dummyVar;
        count++;
    }
    inFile.close();

    string *words = new string[count]; // dynamic memory from count

    inFile.open ("words_in.txt"); // get words from file
    for(int i = 0; i < count; i++){
        inFile >> words[i];
    }
    inFile.close();

    int result = checkArraySort(words, count);
    if(result == -1 || result == 1){
        cout << "Enter the input search key: ";
        cin >> key;
        int index = binarySearchR(words, count - 1, key);
        if(index != -1){
            cout << "Found key " << key << " at index " << index << "!" << endl;
        }
        else{
            cout << "They key " << key << " was not found in the array!" << endl;
        }
    }
    else{
        cout << "The array is not sorted!" << endl;
        return 0;
    }
    return 0;
}