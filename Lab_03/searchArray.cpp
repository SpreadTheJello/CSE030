#include <iostream>

using namespace std;
int arr_size;
int v;

void search(int arr[], int key){
    int count = 0;
    for(int i = 0; i < arr_size; i++){
        count++;
        if(arr[i] == key){ // checks if key has been found
            cout << "Found value " << key << " at index " << i << ", which took " << count << " checks." << endl;
            if(count == 1){ // best scenario
                cout << "We ran into the best case scenario!" << endl;
            }
            if(count == arr_size){ // worst scenario
                cout << "We ran into the worst case scenario!" << endl;
            }
            break;
        }
        if(i == arr_size-1 && arr[i] != key){ // checks if value is not in array
            cout << "The value " << key << " was not found in the array!" << endl;
        }
    }
}


int main(){
    cout << "Enter the size of the array: ";
    cin >> arr_size;

    if(arr_size < 0){ // error handling
        cout << "ERROR: you entered an incorrect value for the array size!" << endl;
        return 0;
    }

    // gets array from user
    cout << "Enter the numbers in the array, seperated by a space, and press enter: " << endl;
    int arr[arr_size];

    for(int i = 0; i < arr_size; i++){
        scanf("%d", &arr[i]); // accepts integers (+ -) and inputs them into array
    }

    cout << "Enter a number to seach for in the array: " << endl;
    cin >> v;

    search(arr, v);
    return 0;  
}
