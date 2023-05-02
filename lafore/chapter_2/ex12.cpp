#include <iostream>

using namespace std;

int main() {
    float decimal_pounds;         //3.51
    int pounds;                   //3
    float decimal_pounds_frac;    //0.51

    float decimal_shillings;      //10.2
    int shillings;                //10
    float decimal_shillings_frac; // 0.2
    int pence;


    cout << "Enter decimal pounds: ";
    cin >> decimal_pounds;

    pounds = static_cast<int>(decimal_pounds);
    decimal_pounds_frac = decimal_pounds - pounds;
    decimal_shillings = decimal_pounds_frac * 20;

    shillings = static_cast<int>(decimal_shillings);
    decimal_shillings_frac = decimal_shillings - shillings;
    pence = decimal_shillings_frac * 12;

    cout << "Equivalent in old notation = " << pounds << "." << shillings << "." << pence;

    return 0;
}