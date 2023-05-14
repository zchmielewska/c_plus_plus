#include <iostream>
#include <conio.h>

using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

int main() {
    char type;
    etype e;
    
    cout << "Enter employee type (first letter only: laborer, secretary, manager, accountant, executive, researcher): ";

    type = getche();
    cout << "\n";

    switch (type) {
        case 'l':
            e = laborer;
            break;
        case 's':
            e = secretary;
            break;
        case 'm':
            e = manager;
            break;
        case 'a':
            e = accountant;
            break;
        case 'e':
            e = executive;
            break;
        case 'r':
            e = researcher;
            break;
        default:
            cout << "You have chosen incorrect letter. ";
            return 0;
    }

    switch (e) {
        case laborer:
            cout << "Employee type is laborer.";
            break;
        case secretary:
            cout << "Employee type is secretary.";
            break;
        case manager:
            cout << "Employee type is manager."; 
            break;
        case accountant:
            cout << "Employee type is accountant.";
            break;
        case executive:
            cout << "Employee type is executive.";
            break;
        case researcher:
            cout << "Employee type is researcher.";
            break;
    }

    return 0;
}