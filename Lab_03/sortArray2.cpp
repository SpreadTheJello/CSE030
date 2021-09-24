#include <iostream>

using namespace std;
int arr_size;

void sort(int arr[]){
    int swap = 0;
    cout << "This is the sorted array in ascending order: ";
    for(int i = 0; i < arr_size; i++){
        int indx = 0;
        int min = arr[i];
        for(int j = i + 1; j < arr_size - 1; j++){
            if(min >= arr[j + 1]){
                min = arr[j + 1];
                indx = j + 1;
                swap++;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[indx] = temp;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the minimum for the traverse of the array." << endl;
    cout << "It took " << swap << " swaps to sort the array..." << endl;
}


int main(){
    cout << "Enter the size of the array: ";
    cin >> arr_size;

    if(arr_size < 0){ // error handling
        cout << "ERROR: you entered an incorrect value for the array size!" << endl;
        return 0;
    }

    // gets array from user
    cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
    int arr[arr_size];
    for(int i = 0; i < arr_size; i++){
        scanf("%d", &arr[i]); // accepts integers (+ -) and inputs them into array
    }
    sort(arr);
    return 0;  
}
