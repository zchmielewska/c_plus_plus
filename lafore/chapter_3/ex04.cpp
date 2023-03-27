#include <iostream>
#include <conio.h>
#include <process.h>

using namespace std;

int main() {
    float numb1;
    float numb2;
    float answer;
    char op;
    char ch;

    do {
        cout << "Enter first number, operator, second number: ";
        cin >> numb1 >> op >> numb2;

        switch(op) {
            case '+':
                answer = numb1 + numb2;
                break;
            case '-':
                answer = numb1 - numb2;
                break;
            case '*':
                answer = numb1 * numb2;
                break;
            case '/':
                answer = numb1 / numb2;
                break;
            default:
                cout << "Incorrect operator.";
                exit(0);
        }
        cout << "Answer = " << answer;
        cout << "\nDo another (Enter 'y' or 'n')? ";
        cin >> ch;
    } while (ch != 'n');

    return 0;
}