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
    if(array_size >= 1){
        int middle = 1 + array_size / 2;
        if(A[middle] == key){ // if key is in middle of array
            return middle;
        }
        else if(A[middle] > key){ // key mst be to the left
            return binarySearchR(A, (middle-1), key);
        }
        else{ // key must be to the right
            return binarySearchR(A, (middle+1), key);
        }
    }
    return 0;
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
        int index = binarySearchR(words, count, key);
        if(index != -1){
            cout << "Found key " << key << " at index " << index << "!" << endl;
        }
        else{
            cout << "They key " << key << "was not found in the array!" << endl;
        }
        
    }
    else{
        cout << "The array is not sorted!" << endl;
        return 0;
    }
    return 0;
}