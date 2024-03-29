#include <iostream>

using namespace std;

struct time {
    int hours;
    int minutes;
    int seconds;
};

long time_to_secs(time t) {
    return t.hours*3600 + t.minutes*60 + t.seconds;
}

time secs_to_time(long totalsecs) {
    time t;
    t.hours = static_cast<int>(totalsecs/3600);
    totalsecs -= t.hours * 3600;
    t.minutes = static_cast<int>(totalsecs/60);
    totalsecs -= t.minutes * 60;
    t.seconds = totalsecs;
    return t;
}

int main() {
    time t1, t2, t3;
    char dummy; 
    long totalsecs;

    cout << "Enter 1st time (hh:mm:ss): ";
    cin >> t1.hours >> dummy >> t1.minutes >> dummy >> t1.seconds;
    
    cout << "Enter 2nd time (hh:mm:ss): ";
    cin >> t2.hours >> dummy >> t2.minutes >> dummy >> t2.seconds;

    totalsecs = time_to_secs(t1) + time_to_secs(t2);
    t3 = secs_to_time(totalsecs);

    cout << "The total time is: " << t3.hours << ":" << t3.minutes << ":" << t3.seconds;
}
