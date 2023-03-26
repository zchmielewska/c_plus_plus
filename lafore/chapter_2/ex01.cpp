#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    float gallons;
    float cubic_feet;

    cout << "Enter number of gallons:" << endl;
    cin >> gallons;
    cubic_feet = 7.481 / gallons;

    cout << gallons << " gallons are " << cubic_feet << " cubic feet." << endl;
    Sleep(10000);
    return 0;
}