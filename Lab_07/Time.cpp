#include "Time.h"

Time::Time(){ // default constructor
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int h, int m, int s){ // constructor
    hours = 0;
    minutes = 0;
    seconds = 0;
}

int Time::get_hours(){ // accessor functions
    return hours;
}

int Time::get_minutes(){
    return minutes;
}

int Time::get_seconds(){
    return seconds;
}

void Time::set_hours(int num){ // mutator functions
    hours = num;
}

void Time::set_minutes(int num){
    minutes = num;
}

void Time::set_seconds(int num){
    seconds = num;
}