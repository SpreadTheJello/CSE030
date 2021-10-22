#ifndef TIME_H
#define TIME_H

class Time {
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time();
        Time(int h, int m, int s);
        ~Time(){};
        int get_hours();
        int get_minutes();
        int get_seconds();
        void set_hours(int num);
        void set_minutes(int num);
        void set_seconds(int num);
};

#endif