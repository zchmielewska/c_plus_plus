#include <iostream>

using namespace std;

int main() {
    float pounds, shillings, pence;
    float decimal_pounds;

    cout << "Enter pounds: ";
    cin >> pounds;

    cout << "Enter shillings: ";
    cin >> shillings;

    cout << "Enter pence: ";
    cin >> pence;

    decimal_pounds = pounds + shillings/20 + pence /(20*12);
    cout << "Decimal pounds = " << decimal_pounds;

    return 0;
}