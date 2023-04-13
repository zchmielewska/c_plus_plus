/*Write a function called hms_to_secs() that takes three int values—for hours, minutes,
and seconds—as arguments, and returns the equivalent time in seconds (type long).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
displaying the value of seconds it returns.*/

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