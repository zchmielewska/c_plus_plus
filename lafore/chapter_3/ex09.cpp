#include <iostream>

using namespace std;

int main() {
    int chairs, guests, num_arrangements;

    cout << "Enter number of chairs: ";
    cin >> chairs;

    cout << "Enter number of guests: ";
    cin >> guests;

    num_arrangements = 1;
    for (int i=0; i<chairs; i++) {
        num_arrangements *= guests;
        guests -= 1;
    }

    cout << "Number of arrangements amounts to: " << num_arrangements;

    return 0;
}