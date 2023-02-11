#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int conv;
    float temp;
    float result;

    cout << "Type 1 to convert Fahrenheit to Celsius,\n" << 
            "     2 to convert Celsius to Fahrenheit: ";
    cin >> conv;

    if (conv == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        result = (temp - 32.0) * 5.0/9.0; 
        cout << "In Celsius, that's " << result;
    } else if (conv == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        result = (temp * 9.0/5.0) + 32.0;
        cout << "In Fahrenheit, that's " << result;
    } else {
        cout << "Incorrect conversion type.";
    }

    getche();
    return 0;
}