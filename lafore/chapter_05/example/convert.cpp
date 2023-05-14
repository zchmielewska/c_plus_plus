#include <iostream>
using namespace std;

float lbstokg(float);

int main() {
    float lbs, kgs;

    cout << "\nEnter your weight in pounds: ";
    cin >> lbs;

    kgs = lbstokg(lbs);
    cout << "Your weight in kilograms is " << kgs << endl;

    return 0;
}

float lbstokg(float pounds) {
    float kilograms = 0.453592 * pounds;
    return kilograms;
}