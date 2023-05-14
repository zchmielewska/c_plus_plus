#include <iostream>

using namespace std;

struct employee {
    int number;
    float compensation;
};

int main() {
    employee e1, e2, e3;

    cout << "Enter 1st employee number: ";
    cin >> e1.number;
    cout << "Enter 1st employee compensation: ";
    cin >> e1.compensation;

    cout << "Enter 2nd employee number: ";
    cin >> e2.number;
    cout << "Enter 2nd employee compensation: ";
    cin >> e2.compensation;

    cout << "Enter 3rd employee number: ";
    cin >> e3.number;
    cout << "Enter 3rd employee compensation: ";
    cin >> e3.compensation;

    cout << "1: " << e1.number << " " << e1.compensation << endl
         << "2: " << e2.number << " " << e2.compensation << endl
         << "3: " << e3.number << " " << e3.compensation << endl;

    return 0;
}