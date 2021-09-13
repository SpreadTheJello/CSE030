#include <iostream>
#include <string>

using namespace std;
string str = "";

int main(){
    cout << "Enter the string to reverse: ";
    cin >> str;
    for(int i = 0; i <= str.length(); i++){
        cout << str[str.length() - i];
    }
    cout << endl;
    return 0;
}