#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct Time{
	int hours;
	int minutes;
	int seconds;
};

struct Course{
	string name;
    string days;
    Time startTime;
    Time endTime;
	int credits;
	double avgGrade;
	bool majorRequirement;
};

int main(){
	ifstream file;

	file.open("in.txt");
	
	string content;
	int course_count;
	getline(file, content);
	course_count = atoi(content.c_str()); // gets how many courses
	Course courses[course_count];
	
	for (int i = 0; i < course_count; i++){ // loop through amount of courses
		for (int j= 0; j < 7; j++){ // 7 things to get in each course
			if (j == 0){ // course name
				getline(file, content); 
				courses[i].name = content;
			}
			else if (j == 1){ // course credits
				string temp;
				getline(file, content);
				temp = content;
				courses[i].credits = atoi(temp.c_str());
			}
			else if (j == 2){ // major requirement
				int temp;
				bool bool_temp;
				getline(file, content);
				temp = atoi(content.c_str());
				if (temp == 1)
				{
                    bool_temp = true;
				}
				else if (temp == 0)
				{
					bool_temp = false;
				}
				courses[i].majorRequirement = bool_temp;
			}
			else if (j == 3){ // average grade
				string temp;
				getline(file, content);
				temp = content;
				courses[i].avgGrade = atof(temp.c_str());
			}
			else if (j == 4){ // lecture days
				getline(file, content);
				courses[i].days = content;
			}
			else if (j == 5){ // starting time
				string temp;
				getline(file, content);
				temp = content;
				courses[i].startTime.hours = atoi(temp.substr(0,2).c_str());
				courses[i].startTime.minutes = atoi(temp.substr(3,2).c_str());
				courses[i].startTime.seconds = atoi(temp.substr(6,8).c_str());
			}
			else if (j == 6){ // ending time
				string temp;
				getline(file, content);
				temp = content;
				courses[i].endTime.hours = atoi(temp.substr(0,2).c_str());
				courses[i].endTime.minutes = atoi(temp.substr(3,2).c_str());
				courses[i].endTime.seconds = atoi(temp.substr(6,8).c_str());
			}

		}
	}
	file.close();

    cout << "−−−−−−−−−−−−−−−−−−−" << endl << "SCHEDULE OF STUDENT" << endl << "−−−−−−−−−−−−−−−−−−−" << endl;
	for (int i = 0; i < course_count; i++){
		cout << "COURSE " << (i + 1) << ": " << courses[i].name << endl;
		if (courses[i].majorRequirement){
			cout << "Note: this course is a major requirement!" << endl;
		}
		else{
			cout << "Note: this course is not a major requirement..." << endl;
		}
		cout << "Number of Credits: " << courses[i].credits << endl;
		cout << "Days of Lectures: " << courses[i].days << endl;
		cout << "Lecture Time: " << setw(2) << setfill('0') << courses[i].startTime.hours << ":" << setw(2) << setfill('0') << courses[i].startTime.minutes << ":"  << setw(2) << setfill('0') << courses[i].startTime.seconds;
		cout << " - " << setw(2) << setfill('0') << courses[i].endTime.hours << ":" << setw(2) << setfill('0') << courses[i].endTime.minutes << ":"  << setw(2) << setfill('0') << courses[i].endTime.seconds << endl;
		cout << "Stat: on average students get " << courses[i].avgGrade << "% in this course." << endl;
         cout << "−−−−−−−−−−−−−−−−−−−" << endl;
	}
	return 0;
}