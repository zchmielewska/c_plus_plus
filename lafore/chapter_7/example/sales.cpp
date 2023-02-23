#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    double sales[SIZE];

    cout << "Enter widget sales for 6 days" << endl;

    for (int j=0; j<SIZE; j++)
        cin >> sales[j];

    double total = 0;
    for (int j=0; j<SIZE; j++) {
        total += sales[j];
    }

    double average = total / SIZE;
    cout << "Average = " << average << endl;
    return 0;
}