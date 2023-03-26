/*
Write the inverse of Exercise 10, so that the user enters an amount in Great Britain’s new
decimal-pounds notation (pounds and pence), and the program converts it to the old
pounds-shillings-pence notation. An example of interaction with the program might be

Enter decimal pounds: 3.51
Equivalent in old notation = £3.10.2.

Make use of the fact that if you assign a floating-point value (say 12.34) to an integer
variable, the decimal fraction (0.34) is lost; the integer value is simply 12. Use a cast to
avoid a compiler warning. You can use statements like

float decpounds; // input from user (new-style pounds)
int pounds; // old-style (integer) pounds
float decfrac; // decimal fraction (smaller than 1.0)

pounds = static_cast<int>(decpounds); // remove decimal fraction
decfrac = decpounds - pounds; // regain decimal fraction
You can then multiply decfrac by 20 to find shillings. A similar operation obtains pence.
*/

#include <iostream>

using namespace std;

int main() {
    float decimal_pounds;         //3.51
    int pounds;                   //3
    float decimal_pounds_frac;    //0.51

    float decimal_shillings;      //10.2
    int shillings;                //10
    float decimal_shillings_frac; // 0.2
    int pence;


    cout << "Enter decimal pounds: ";
    cin >> decimal_pounds;

    pounds = static_cast<int>(decimal_pounds);
    decimal_pounds_frac = decimal_pounds - pounds;
    decimal_shillings = decimal_pounds_frac * 20;

    shillings = static_cast<int>(decimal_shillings);
    decimal_shillings_frac = decimal_shillings - shillings;
    pence = decimal_shillings_frac * 12;

    cout << "Equivalent in old notation = " << pounds << "." << shillings << "." << pence;

    return 0;
}