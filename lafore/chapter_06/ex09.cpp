/*Transform the fraction structure from Exercise 8 in Chapter 4 into a fraction class.
Member data is the fraction’s numerator and denominator. Member functions should
accept input from the user in the form 3/5, and output the fraction’s value in the same
format. Another member function should add two fraction values. Write a main() program
that allows the user to repeatedly input two fractions and then displays their sum. After
each operation, ask whether the user wants to continue.*/

#include <iostream>
#include <conio.h>

using namespace std;

class fraction {
    private:
        int num;
        int den;
    public:
        void set_data() {
            char dummy;
            cout << "Enter fraction: ";
            cin >> num >> dummy >> den;
        }
        void add(fraction other) {
            num = num*other.den + den*other.num;
            den = den*other.den;
        }
        void display() {
            cout << num << "/" << den << endl;
        }
};

int main() {
    fraction f1, f2;
    char decision = 'y';

    while (decision == 'y') {
        f1.set_data();
        f2.set_data();
        f1.add(f2);
        cout << "The sum is: ";
        f1.display();
        cout << "Do you want to continue (y/n)? ";
        decision = getche();
        cout << endl;
    }

    return 0;
}