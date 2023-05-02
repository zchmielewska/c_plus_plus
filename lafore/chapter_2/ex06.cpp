#include <iostream>

using namespace std;

int main() {
    float GBP = 1.487;
    float FRA = 0.172;
    float GER = 0.584;
    float YEN = 0.00955;
    
    float dollars;
    cout << "Enter value of dollars: ";
    cin >> dollars;

    cout << "Value in other currencies: " << endl 
         << "GBP: " << dollars/GBP << endl
         << "FRA: " << dollars/FRA << endl
         << "GER: " << dollars/GER << endl
         << "YEN: " << dollars/YEN << endl;

    return 0;
}