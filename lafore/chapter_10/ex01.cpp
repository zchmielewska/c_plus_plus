#include <iostream>

using namespace std;

int main() {
    int MAX = 100;
    int i = 0;
    float arr[MAX];
    char decision;
    float avg;

    do {
        cout << "Enter a float number: "; 
        cin >> *(arr+i);
        i++;
        cout << "Do you want to continue (y/n)? "; cin >> decision;
    } while (decision == 'y');

    for (int j=0; j<=i; j++) {
        avg += *(arr+j);
    }
    avg = avg/i;

    cout << "Average = " << avg;

    return 0;
}