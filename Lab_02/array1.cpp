#include <iostream>

using namespace std;
int arr_size;
bool increasing = true;

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
        if(i != 0){ // checks if arr is increasing
            if(arr[i] <= arr[i-1]){
                increasing = false;
            }
        }
        cout << arr[i] << " "; // prints array
    }
    cout << endl;

    // tells user if arr is increasing
    if(increasing){ 
        cout << "This IS an increasing array!" << endl;
    }
    else{
        cout << "This is NOT an increasing array!" << endl;
    }
    return 0;  
}

