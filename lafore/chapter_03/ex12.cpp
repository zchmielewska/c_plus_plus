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