/*
Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
applied to fractions:
Addition: a/b + c/d = (a*d + b*c) / (b*d)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Multiplication: a/b * c/d = (a*c) / (b*d)
Division: a/b / c/d = (a*d) / (b*c)
The user should type the first fraction, an operator, and a second fraction. The program
should then display the result and ask whether the user wants to continue.
*/


#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, numerator, denominator;
    char op, dummy, decision;

    while (decision != 'n') {
        cout << "Enter the first fraction, an operator, and a second fraction: ";
        cin >> a >> dummy >> b >> op >> c >> dummy >> d;

        switch (op) {
            case '+':
                numerator = a*d + b*c;
                denominator = b*d;
                break;

            case '-':
                numerator = a*d - b*c;
                denominator = b*d;
                break;

            case '*':
                numerator = a*c;
                denominator = b*d;
                break;

            case '/':
                numerator = a*d;
                denominator = b*c;
                break;

            default:
                cout << "Something went wrong.";
                return 0;
        }
        cout << "Result = " << numerator << "/" << denominator << endl; 
        cout << "Do you want to continue (y/n)? ";
        cin >> decision;
    }

    return 0;
}