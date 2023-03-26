/*
On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, 
and then displays this value converted to these four other monetary units.
*/

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