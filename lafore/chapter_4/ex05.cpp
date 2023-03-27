/*
Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format.
*/
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