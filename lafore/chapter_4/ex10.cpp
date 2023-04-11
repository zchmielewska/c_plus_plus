/*Create a structure called sterling that stores money amounts in the old-style British
system discussed in Exercises 8 and 11 in Chapter 3, “Loops and Decisions.” The members
could be called pounds, shillings, and pence, all of type int. The program should
ask the user to enter a money amount in new-style decimal pounds (type double), convert
it to the old-style system, store it in a variable of type struct sterling, and then
display this amount in pounds-shillings-pence format.*/

#include <iostream>
using namespace std;

struct sterling {
    int pounds;
    int shillings;
    int pence;
};

int main() {
    double decimal_pounds;
    double decimal_pounds_frac;
    double decimal_shillings;
    double decimal_shillings_frac;

    sterling s;

    cout << "Enter new-style pounds: ";
    cin >> decimal_pounds;

    s.pounds = static_cast<int>(decimal_pounds);
    decimal_pounds_frac = decimal_pounds - s.pounds;
    decimal_shillings = decimal_pounds_frac * 20;

    s.shillings = static_cast<int>(decimal_shillings);
    decimal_shillings_frac = decimal_shillings - s.shillings;
    s.pence = decimal_shillings_frac * 12;

    cout << "Equivalent in old notation: " << s.pounds << "." << s.shillings << "." << s.pence;

    return 0;
}