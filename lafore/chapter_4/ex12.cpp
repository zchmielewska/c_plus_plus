#include <iostream>

using namespace std;

struct fraction {
    int num;
    int den;
};


int main() {
    fraction f1, f2, f3;
    char op, dummy, decision;

    while (decision != 'n') {
        cout << "Enter the first fraction, an operator, and a second fraction: ";
        cin >> f1.num >> dummy >> f1.den >> op >> f2.num >> dummy >> f2.den;

        switch (op) {
            case '+':
                f3.num = f1.num*f2.den + f1.den*f2.num;
                f3.den = f1.den*f2.den;
                break;

            case '-':
                f3.num = f1.num*f2.den - f1.den*f2.num;
                f3.den = f1.den*f2.den;
                break;

            case '*':
                f3.num = f1.num*f2.num;
                f3.den = f1.den*f2.den;
                break;

            case '/':
                f3.num = f1.num*f2.den;
                f3.den = f1.den*f2.num;
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