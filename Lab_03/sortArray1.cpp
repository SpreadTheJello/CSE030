#include <iostream>

using namespace std;
int arr_size;

void sort(int arr[]){
    cout << "This is the sorted array in descending order: ";
    for(int i = 0; i < arr_size; i++){
        int indx = 0;
        int max = arr[i];
        for(int j = i; j < arr_size - 1; j++){
            if(max <= arr[j + 1]){
                max = arr[j + 1];
                indx = j + 1;
            }
        }
        int temp = arr[i];
        arr[i] = max;
        arr[indx] = temp;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The algorithm selected the maximum for the traverse of the array." << endl;
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
