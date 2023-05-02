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