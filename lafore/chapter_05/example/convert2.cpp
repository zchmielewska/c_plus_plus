#include <iostream>
using namespace std;

float lbstokg(float);

int main() {
    float lbs;

    cout << "\nEnter your weight in pounds: ";
    cin >> lbs;

    cout << "Your weight in kilograms is " << lbstokg(lbs) << endl;

    return 0;
}

float lbstokg(float pounds) {
    float kilograms = 0.453592 * pounds;
    return kilograms;
}