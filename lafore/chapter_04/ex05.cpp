#include <iostream>

using namespace std;

struct date {
    int month;
    int day;
    int year;
};

int main() {
    date d;
    char dummy;

    cout << "Enter a date in format mm/dd/yyyy: ";
    cin >> d.month >> dummy >> d.day >> dummy >> d.year;

    cout << "The date is: " << d.month << "/" << d.day << "/" << d.year; 
    return 0;
}