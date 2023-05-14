#include <iostream>

using namespace std;

void swap(int& v1, int& v2) {
    int x = v1;
    int y = v2;

    v1 = y;
    v2 = x;
}

int main() {
    int v1, v2;

    cout << "Enter 1st value: ";
    cin >> v1;

    cout << "Enter 2nd value: ";
    cin >> v2;

    swap(v1, v2);
    cout << "I have swapped your values." << endl; 
    cout << "Now 1st value is " << v1 << " and 2nd value is " << v2 << ".";

    return 0;
}