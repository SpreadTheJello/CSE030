#include <iostream>

using namespace std;
int arr_size;
int order;

void sortArr(int arr[]){
    int temp = 0;
    int swap_index = 0;

    if(order == 0){ // ascending sort
        for(int i = 0; i < arr_size; i++){
            swap_index = i;
            for(int j = i; j < arr_size; j++){
                if(arr[j] < arr[swap_index]){
                    swap_index = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[swap_index];
            arr[swap_index] = temp;
        }
        cout << "This is the sorted array in ascending order: ";
    }

    if(order == 1){ // descending sort
        for(int i = 0; i < arr_size; i++){
            swap_index = i;
            for(int j = i; j < arr_size; j++){
                if(arr[swap_index] < arr[j]){
                    swap_index = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[swap_index];
            arr[swap_index] = temp;
        }
        cout << "This is the sorted array in descending order: ";
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
    cout << "Enter the numbers in the array, seperated by a space, and press enter: ";
    int arr[arr_size];
    for(int i = 0; i < arr_size; i++){
        scanf("%d", &arr[i]); // accepts integers (+ -) and inputs them into array
    }

    cout << "Sort in ascending (0) or descending (1) order? ";
    cin >> order;

    sortArr(arr);
    for(int i = 0; i < arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;  
}
