/*
Write another version of the program from Exercise 7 so that, instead of finding the final
amount of your investment, you tell the program the final amount and it figures out how
many years it will take, at a fixed rate of interest compounded yearly, to reach this
amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
years; use an integer value for the year.)
*/

#include <iostream>

using namespace std;

int main() {
    float amount, goal, rate;
    int years=0;
    
    cout << "Enter initial amount: ";
    cin >> amount; 

    cout << "Enter investment goal: ";
    cin >> goal;

    cout << "Enter interest rate (percent per year): ";
    cin >> rate;

    
    while (amount < goal) {
        amount = amount + amount * rate/100;
        years++;
    }
    
    cout << "You need " << years << " years to achieve your goal.";

    return 0;
}