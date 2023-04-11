/*Add a variable of type enum etype (see Exercise 6), and another variable of type struct
date (see Exercise 5) to the employee class of Exercise 4. Organize the resulting program
so that the user enters four items of information for each of three employees: an
employee number, the employee’s compensation, the employee type, and the date of first
employment. The program should store this information in three variables of type
employee, and then display their contents.*/

#include <iostream>
#include <conio.h>

using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

struct date {
    int month;
    int day;
    int year;
};

struct employee {
    int number;
    float compensation;
    etype type;
    date first_day;
};

int main() {
    employee e1, e2, e3;
    char temp;

    // Employee #1
    cout << "Enter 1st employee number: ";
    cin >> e1.number;
    cout << "Enter 1st employee compensation: ";
    cin >> e1.compensation;
    cout << "Enter 1st employee first day of employment (mm/dd/yyyy): ";
    cin >> e1.first_day.month >> temp >> e1.first_day.day >> temp >> e1.first_day.year;
    cout << "Enter 1st employee employment type (first letter only: l/s/m/a/e/r): ";
    temp = getche();
    cout << endl;

    switch (temp) {
        case 'l':
            e1.type = laborer;
            break;
        case 's':
            e1.type = secretary;
            break;
        case 'm':
            e1.type = manager;
            break;
        case 'a':
            e1.type = accountant;
            break;
        case 'e':
            e1.type = executive;
            break;
        case 'r':
            e1.type = researcher;
            break;
        default:
            cout << "You have chosen incorrect letter. ";
            return 0;
    }

    // Employee #2
    cout << "\n";
    cout << "Enter 2nd employee number: ";
    cin >> e2.number;
    cout << "Enter 2nd employee compensation: ";
    cin >> e2.compensation;
    cout << "Enter 2nd employee first day of employment (mm/dd/yyyy): ";
    cin >> e2.first_day.month >> temp >> e2.first_day.day >> temp >> e2.first_day.year;
    cout << "Enter 2nd employee employment type (first letter only: l/s/m/a/e/r): ";
    temp = getche();
    cout << endl;

    switch (temp) {
        case 'l':
            e2.type = laborer;
            break;
        case 's':
            e2.type = secretary;
            break;
        case 'm':
            e2.type = manager;
            break;
        case 'a':
            e2.type = accountant;
            break;
        case 'e':
            e2.type = executive;
            break;
        case 'r':
            e2.type = researcher;
            break;
        default:
            cout << "You have chosen incorrect letter. ";
            return 0;
    }

    // Employee #3
    cout << "\n";
    cout << "Enter 3rd employee number: ";
    cin >> e3.number;
    cout << "Enter 3rd employee compensation: ";
    cin >> e3.compensation;
    cout << "Enter 3rd employee first day of employment (mm/dd/yyyy): ";
    cin >> e3.first_day.month >> temp >> e3.first_day.day >> temp >> e3.first_day.year;
    cout << "Enter 3rd employee employment type (first letter only: l/s/m/a/e/r): ";
    temp = getche();
    cout << endl;

    switch (temp) {
        case 'l':
            e3.type = laborer;
            break;
        case 's':
            e3.type = secretary;
            break;
        case 'm':
            e3.type = manager;
            break;
        case 'a':
            e3.type = accountant;
            break;
        case 'e':
            e3.type = executive;
            break;
        case 'r':
            e3.type = researcher;
            break;
        default:
            cout << "You have chosen incorrect letter. ";
            return 0;
    }

    // Display
    cout << "Employee #1" << endl
        << "Number: " << e1.number  << endl
        << "Compensation: " << e1.compensation << endl
        << "Employment date: " << e1.first_day.month << "/" << e1.first_day.day << "/" << e1.first_day.year << endl
        << "Employment type: ";
    
    switch (e1.type) {
        case laborer:
            cout << "laborer";
            break;
        case secretary:
            cout << "secretary";
            break;
        case manager:
            cout << "manager"; 
            break;
        case accountant:
            cout << "accountant";
            break;
        case executive:
            cout << "executive";
            break;
        case researcher:
            cout << "researcher";
            break;
    }

    cout << "\n";
    cout << "Employee #2" << endl
            << "Number: " << e2.number  << endl
            << "Compensation: " << e2.compensation << endl
            << "Employment date: " << e2.first_day.month << "/" << e2.first_day.day << "/" << e2.first_day.year << endl
            << "Employment type: ";
    
    switch (e2.type) {
        case laborer:
            cout << "laborer";
            break;
        case secretary:
            cout << "secretary";
            break;
        case manager:
            cout << "manager"; 
            break;
        case accountant:
            cout << "accountant";
            break;
        case executive:
            cout << "executive";
            break;
        case researcher:
            cout << "researcher";
            break;
    }

    cout << "\n";
    cout << "Employee #3" << endl
        << "Number: " << e3.number  << endl
        << "Compensation: " << e3.compensation << endl
        << "Employment date: " << e3.first_day.month << "/" << e3.first_day.day << "/" << e3.first_day.year << endl
        << "Employment type: ";
    
    switch (e3.type) {
        case laborer:
            cout << "laborer";
            break;
        case secretary:
            cout << "secretary";
            break;
        case manager:
            cout << "manager"; 
            break;
        case accountant:
            cout << "accountant";
            break;
        case executive:
            cout << "executive";
            break;
        case researcher:
            cout << "researcher";
            break;
    }

    return 0;
}