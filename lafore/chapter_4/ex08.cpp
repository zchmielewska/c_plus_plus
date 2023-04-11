/*Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ Programming
Basics.” This program stores the numerator and denominator of two fractions before
adding them, and may also store the answer, which is also a fraction. Modify the program
so that all fractions are stored in variables of type struct fraction, whose two
members are the fraction’s numerator and denominator (both type int). All fractionrelated
data should be stored in structures of this type.*/

#include <iostream>

using namespace std;

struct fraction {
    int numerator;
    int denominator;
};

int main() {
    fraction f1, f2;
    char dummychar;

    cout << "Enter first fraction: ";
    cin >> f1.numerator >> dummychar >> f1.denominator;

    cout << "Enter second fraction: ";
    cin >> f2.numerator >> dummychar >> f2.denominator;

    cout << "Sum = " 
        << f1.numerator*f2.denominator + f1.denominator*f2.numerator 
        << "/" << f1.denominator*f2.denominator;

    return 0;
}