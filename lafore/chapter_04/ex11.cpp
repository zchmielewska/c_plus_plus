#include <iostream>

using namespace std;

struct time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    time t1, t2, t3;
    char dummy; 
    long totalsecs;

    cout << "Enter 1st time (hh:mm:ss): ";
    cin >> t1.hours >> dummy >> t1.minutes >> dummy >> t1.seconds;
    
    cout << "Enter 2nd time (hh:mm:ss): ";
    cin >> t2.hours >> dummy >> t2.minutes >> dummy >> t2.seconds;

    totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds + t2.hours*3600 + t2.minutes*60 + t2.seconds;

    t3.hours = static_cast<int>(totalsecs/3600);
    totalsecs -= t3.hours * 3600;

    t3.minutes = static_cast<int>(totalsecs/60);
    totalsecs -= t3.minutes * 60;

    t3.seconds = totalsecs;

    cout << "The total time is: " << t3.hours << ":" << t3.minutes << ":" << t3.seconds;
}