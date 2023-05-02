#include <iostream>

using namespace std;

long hms_to_secs(int hours, int minutes, int seconds) {
    return hours*3600 + minutes*60 + seconds;
}

int main() {
    int hours, minutes, seconds;
    char dummy;

    cout << "Enter time (hh:mm:ss): ";
    cin >> hours >> dummy >>minutes >> dummy >> seconds;

    cout << "Total number of seconds: " << hms_to_secs(hours, minutes, seconds);
    return 0;
}