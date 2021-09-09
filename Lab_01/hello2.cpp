#include <iostream>
#include <string>
using namespace std;

string name;
int main()
{
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Welcome to CSE030, " + name + "!" << endl;
    return 0;
}

