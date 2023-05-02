#include <iostream>

using namespace std;

int main() {
    float celsius;
    float fahrenheit;

    cout << "Enter Celsius degrees: ";
    cin >> celsius;

    fahrenheit = celsius * 9/5 + 32;
    cout << "In Fahreheit it's: " << fahrenheit;

    return 0;
}