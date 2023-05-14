/*Start with the date structure in Exercise 5 in Chapter 4 and transform it into a date
class. Its member data should consist of three ints: month, day, and year. It should also
have two member functions: getdate(), which allows the user to enter a date in
12/31/02 format, and showdate(), which displays the date.*/

#include <iostream>

using namespace std;

class date {
    private:
        int month;
        int day;
        int year;
    public:
        void getdate() {
            char dummy;
            cout << "Enter a date in format mm/dd/yyyy: ";
            cin >> month >> dummy >> day >> dummy >> year;
        }
        void showdate() {
            cout << month << "/" << day << "/" << year;
        }
};

int main() {
    date d;
    d.getdate();
    d.showdate();
    return 0;
}
