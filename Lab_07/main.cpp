#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

bool getTimeFromUser(Time &t){
    string str;
    int count = 0;
    getline(cin, str);

    t.set_hours(atoi(str.substr(0,2).c_str())); // sets time accordingly
    t.set_minutes(atoi(str.substr(3,5).c_str()));
    t.set_seconds(atoi(str.substr(6,8).c_str()));

    for(int i = 0; i < 8; i++)
		if(((str.c_str()[i] >= '0' && str.c_str()[i] <= '9') || str.c_str()[i] == ':')) // counts for 8 characters
		{
			count++;
		}

    if(t.get_hours() < 0 || t.get_hours() > 23 || t.get_minutes() < 0 || t.get_minutes() > 59 || t.get_seconds() < 0 || t.get_seconds() > 59 || count < 8){ // checks time
        return false;
    }
    return true;
}

void print24Hour(Time t){
    cout << setfill('0') << setw(2) << t.get_hours() << ":" << setw(2) << t.get_minutes() << ":" << setw(2) << t.get_seconds();
}

int main(){
    Time start, end;

    cout << "Enter the start time for the lecture (format is HH:MM:SS): ";
    bool isTime = getTimeFromUser(start);
    if(!isTime){
        cout << "The start time entered is invalid!" << endl;
        return 0;
    }

    cout << "Enter the end time for the lecture (format is HH:MM:SS): ";
    isTime = getTimeFromUser(end);
    if(!isTime){
        cout << "The end time entered is invalid!" << endl;
        return 0;
    }

    cout << "The lecture starts at ";
    print24Hour(start); 
    cout << " and ends at ";
    print24Hour(end); 
    cout << endl;

    return 0;
}