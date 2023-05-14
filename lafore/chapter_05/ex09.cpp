#include <iostream>

using namespace std;

struct time {
    int hours;
    int minutes;
    int seconds;
};

void swap(time& t1, time& t2) {
    time x = t1;
    time y = t2;

    t1 = y;
    t2 = x;
}

int main() {
    time t1, t2;
    char dummy; 

    cout << "Enter 1st time (hh:mm:ss): ";
    cin >> t1.hours >> dummy >> t1.minutes >> dummy >> t1.seconds;

    cout << "Enter 2nd time (hh:mm:ss): ";
    cin >> t2.hours >> dummy >> t2.minutes >> dummy >> t2.seconds;

    swap(t1, t2);
    cout << "I have swapped your times." << endl; 
    cout << "Now 1st time is " << t1.hours << ":" << t1.minutes << ":" << t1.seconds << " and 2nd time is " << t2.hours << ":" << t2.minutes << ":" << t2.seconds << ".";

    return 0;
}