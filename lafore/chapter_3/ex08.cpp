/*
Write a program that repeatedly asks the user to enter two money amounts expressed in
old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts
and display the answer, again in pounds, shillings, and pence. Use a do loop that asks the
user whether the program should be terminated. Typical interaction might be
Enter first amount: £5.10.6
Enter second amount: £3.2.6
Total is £8.13.0
Do you wish to continue (y/n)?
To add the two amounts, you’ll need to carry 1 shilling when the pence value is greater
than 11, and carry 1 pound when there are more than 19 shillings.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int pounds_1, shillings_1, pence_1, pounds_2, shillings_2, pence_2, pounds_3, shillings_3, pence_3;
    char dot, decision;

    while (decision != 'n') {
        cout << "\nEnter first amount: ";
        cin >> pounds_1 >> dot >> shillings_1 >> dot >> pence_1;

        cout << "Enter second amount: ";
        cin >> pounds_2 >> dot >> shillings_2 >> dot >> pence_2;



        pounds_3 = 0;
        shillings_3 = 0;
        pence_3 = 0;



        pence_3 += pence_1 + pence_2;
        if (pence_3 >= 12) {
            shillings_3 += 1;
            pence_3 -= 12;
        }

        shillings_3 += shillings_1 + shillings_2;
        if (shillings_3 >= 20) {
            pounds_3 += 1;
            shillings_3 -= 20;
        }

        pounds_3 += pounds_1 + pounds_2;
        
        cout << "Total is " << pounds_3 << "." << shillings_3 << "." << pence_3 << endl;
        cout << "Do you wish to continue (y/n)? ";
        decision = getche();
    }

    return 0;
}