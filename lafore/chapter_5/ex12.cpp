/*Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
functions for each of the four arithmetic operations. They can be called fadd(), fsub(),
fmul(), and fdiv(). Each of these functions should take two arguments of type struct
fraction, and return an argument of the same type.*/

#include <iostream>

using namespace std;

struct fraction {
    int num;
    int den;
};

fraction fadd(fraction f1, fraction f2) {
    fraction f3;
    f3.num = f1.num*f2.den + f1.den*f2.num;
    f3.den = f1.den*f2.den;
    return f3;
}

fraction fsub(fraction f1, fraction f2) {
    fraction f3;
    f3.num = f1.num*f2.den - f1.den*f2.num;
    f3.den = f1.den*f2.den;
    return f3;
}

fraction fmul(fraction f1, fraction f2) {
    fraction f3;
    f3.num = f1.num*f2.num;
    f3.den = f1.den*f2.den;
    return f3;
}

fraction fdiv(fraction f1, fraction f2) {
    fraction f3;
    f3.num = f1.num*f2.den;
    f3.den = f1.den*f2.num;
    return f3;
}

int main() {
    fraction f1, f2, f3;
    char op, dummy, decision;

    while (decision != 'n') {
        cout << "Enter the first fraction, an operator, and a second fraction: ";
        cin >> f1.num >> dummy >> f1.den >> op >> f2.num >> dummy >> f2.den;

        switch (op) {
            case '+':
                f3 = fadd(f1, f2);
                break;

            case '-':
                f3 = fsub(f1, f2);
                break;

            case '*':
                f3 = fmul(f1, f2);
                break;

            case '/':
                f3 = fdiv(f1, f2);
                break;

            default:
                cout << "Something went wrong.";
                return 0;
        }
        cout << "Result = " << f3.num << "/" << f3.den << endl; 
        cout << "Do you want to continue (y/n)? ";
        cin >> decision;
    }

    return 0;
}