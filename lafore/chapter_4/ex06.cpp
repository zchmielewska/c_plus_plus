/*We said earlier that C++ I/O statements don’t automatically understand the data types of
enumerations. Instead, the (>>) and (<<) operators think of such variables simply as integers.
You can overcome this limitation by using switch statements to translate between
the user’s way of expressing an enumerated variable and the actual values of the enumerated
variable. For example, imagine an enumerated type with values that indicate an
employee type within an organization:
enum etype { laborer, secretary, manager, accountant, executive,
researcher };
Write a program that first allows the user to specify a type by entering its first letter
(‘l’, ‘s’, ‘m’, and so on), then stores the type chosen as a value of a variable of type
enum etype, and finally displays the complete word for this type.
Enter employee type (first letter only)
laborer, secretary, manager,
accountant, executive, researcher): a
Employee type is accountant.
You’ll probably need two switch statements: one for input and one for output.*/

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