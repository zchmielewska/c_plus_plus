/*Write a function called swap() that interchanges two int values passed to it by the calling
program. (Note that this function swaps the values of the variables in the calling program,
not those in the function.) You’ll need to decide how to pass the arguments. Create
a main() program to exercise the function.*/

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