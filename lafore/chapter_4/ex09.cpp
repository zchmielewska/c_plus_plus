#include <iostream>

using namespace std;

struct time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    time t;
    char dummy; 
    long totalsecs;

    cout << "Enter time (hh:mm:ss): ";
    cin >> t.hours >> dummy >> t.minutes >> dummy >> t.seconds;
    
    totalsecs = t.hours*3600 + t.minutes*60 + t.seconds;
    cout << "Total number of seconds: " << totalsecs;
    
    return 0;
}