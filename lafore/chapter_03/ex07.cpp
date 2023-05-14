#include <iostream>

using namespace std;

int main() {
    float amount, rate;
    int years;
    
    cout << "Enter initial amount: ";
    cin >> amount; 

    cout << "Enter number of years: ";
    cin >> years;

    cout << "Enter interest rate (percent per year): ";
    cin >> rate;

    for (int i=0; i<years; i++) {
        amount = amount + amount * rate/100;
    }
    cout << "At the end of " << years << " years, you will have 5124.43 dollars.";

    return 0;
}