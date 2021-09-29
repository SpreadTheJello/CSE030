#include <iostream>
#include <string>
using namespace std;

string str;
int num = 1;

void combineStr(string str, int num){
    for(int i = 0; i < num; i++){
        cout << str;
    }
    cout << endl;
}

int main(){
    while(num != 0){
        cout << "Enter a string: ";
        cin >> str;
        cout << "Enter a number of times: ";
        cin >> num;
        combineStr(str, num);
    }
    return 0;
}