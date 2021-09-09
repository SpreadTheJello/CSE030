#include <iostream>
#include <string>
using namespace std;

string punishment = "I will always use object oriented programming.";
string punishment_typo = "I will always use object oriented programing.";
int num;
int typo;
// This is a comment.
int main()
{
    cout << "Enter the number of lines for the punishment: ";
    cin >> num;
    if(num < 0)
    {
        cout << "You entered an incorrect value for the number of lines!" << endl;
        return 0;
    }

    cout << "Enter the line for which we want to make a typo: ";
    cin >> typo;
    if(typo < 0)
    {
        cout << "You entered an incorrect value for the line typo!" << endl;
        return 0;
    }
    for(int i = 0; i < num; i++)
    {
        if(i+1 == typo)
        {
            cout << punishment_typo + " ";
        }
        else
        {
            cout << punishment + " ";
        }
    }
    cout << endl;
    return 0;
}
