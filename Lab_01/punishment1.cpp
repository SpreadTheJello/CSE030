#include <iostream>
#include <string>
using namespace std;

string punishment = "I will always use object oriented programming.";
int num;
int main()
{
    cout << "Enter the number of lines for the punishment: ";
    cin >> num;
    if (num >= 0)
    {
        for(int i = 0; i < num; i++)
        {
            cout << punishment + " ";
        }
    }
    else
    {
        cout << "You entered an incorrect value for the number of lines!" << endl;
    }
    return 0;
}

