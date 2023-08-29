#include <iostream>

using namespace std;

int main() {
    // Inputting numbers
    int i;

    while (true) {
        cout << "\nEnter an integer: ";
        cin >> i;

        if (cin.good()) {
            cin.ignore(10, '\n'); // ignore newline
            break;
        }
        cin.clear();
        cout << "Incorrect output";
        cin.ignore(10, '\n'); // ignore newline
    }
    cout << "integer is " << i;
}
