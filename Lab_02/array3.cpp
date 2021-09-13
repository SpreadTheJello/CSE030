#include <iostream>
#include <string>
using namespace std;

int arr_size;
int neg;

int main(){
    cout << "Enter the size of a 2D array: ";
    cin >> arr_size;
    if(arr_size <= 0){ // stops program if size is negative or greater than 10
        cout << "ERROR: you entered an incorrect value for the array size!" << endl;
        return 0;
    }
    if(arr_size > 10){
        cout << "ERROR: your array is too large! Enter 1 to 10." << endl;
        return 0;
    }

    int arr[arr_size][arr_size];
    for(int i = 0; i < arr_size; i++){ // creates 2D array from user
        cout << "Enter the values in the array for row " << (i + 1) << ", separated by a space, and press enter: ";
        for(int j = 0; j < arr_size; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < arr_size; i++){ // find negatives in 2D array
        for(int j = 0; j < arr_size; j++){
            if(arr[i][j] < 0){
                neg++;
            }
        }
    }

    if(neg <= 0){
        cout << "All values are non-negative!" << endl;
        return 0;
    }
    cout << "There are " << neg << " negative values!" << endl;
    return 0;
}