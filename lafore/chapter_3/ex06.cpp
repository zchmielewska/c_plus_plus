#include <iostream>

using namespace std;

int main() {
    unsigned int numb;
    unsigned long fact;

    cout << "Enter a number: ";
    cin >> numb; 
    
    while (numb != 0) {
        fact = 1;
        for (int j=numb; j>0; j--) {
            fact *= j;
        }
        cout << "Factorial is " << fact << endl;
        cout << "Enter a number: ";
        cin >> numb; 
    }

    return 0;
}