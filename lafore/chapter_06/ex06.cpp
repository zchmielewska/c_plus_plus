/*Extend the employee class of Exercise 4 to include a date class (see Exercise 5) and an
etype enum (see Exercise 6 in Chapter 4). An object of the date class should be used to
hold the date of first employment; that is, the date when the employee was hired. The
etype variable should hold the employee’s type: laborer, secretary, manager, and so on.
These two items will be private member data in the employee definition, just like the
employee number and salary. You’ll need to extend the getemploy() and putemploy()
functions to obtain this new information from the user and display it. These functions will
probably need switch statements to handle the etype variable. Write a main() program that
allows the user to enter data for three employee variables and then displays this data.*/

#include <iostream>
#include <conio.h>

using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

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

class employee {
    private:
        int number;
        float compensation;
        date first_day;
        etype employment_type;
    public:
        void set_data(int n, float c, date d, char type) {
            number = n;
            compensation = c;
            first_day = d;
            switch (type) {
                case 'l':
                    employment_type = laborer; break;
                case 's':
                    employment_type = secretary; break;
                case 'm':
                    employment_type = manager; break;
                case 'a':
                    employment_type = accountant; break;
                case 'e':
                    employment_type = executive; break;
                case 'r':
                    employment_type = researcher; break;
            }
        }

        void display() {
            cout << "\nNumber: " << number
                << "\nCompensation: " << compensation
                << "\nFirst day: ";
            first_day.showdate();
            cout << "\nEmployment type: ";
            switch (employment_type) {
                case laborer:
                    cout << "laborer"; break;
                case secretary:
                    cout << "secretary"; break;
                case manager:
                    cout << "manager"; break;
                case accountant:
                    cout << "accountant"; break;
                case executive:
                    cout << "executive"; break;
                case researcher:
                    cout << "researcher"; break;
            }
        }
};

int main() {
    employee e1, e2, e3;
    int n;
    float c;
    date d;
    char t;

    cout << "Enter 1st employee number: ";
    cin >> n;
    cout << "Enter 1st employee compensation: ";
    cin >> c;
    d.getdate();
    cout << "Enter 1st employee employment type (l/s/m/a/e/r): ";
    t = getche();
    e1.set_data(n, c, d, t);

    cout << "\n\nEnter 2nd employee number: ";
    cin >> n;
    cout << "Enter 2nd employee compensation: ";
    cin >> c;
    d.getdate();
    cout << "Enter 2nd employee employment type (l/s/m/a/e/r): ";
    t = getche();
    e2.set_data(n, c, d, t);

    cout << "\n\nEnter 3rd employee number: ";
    cin >> n;
    cout << "Enter 3rd employee compensation: ";
    cin >> c;
    d.getdate();
    cout << "Enter 3rd employee employment type (l/s/m/a/e/r): ";
    t = getche();
    e3.set_data(n, c, d, t);

    e1.display();
    cout << endl;
    e2.display();
    cout << endl;
    e3.display();

    return 0;
}