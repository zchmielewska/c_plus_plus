// ex: page 212, sol: page 926
#include <iostream>
using namespace std;

void zeroSmaller(int& n1, int& n2);

int main() {
    int n1, n2;

    cout << "Enter the first number: "; cin >> n1;
    cout << "Enter the second number: "; cin >> n2;
    
    zeroSmaller(n1, n2);
    
    cout << "I have set the smaller number to zero. Now you numbers are: " << n1 << " and " << n2;
    return 0;
}

void zeroSmaller(int& n1, int& n2) {
    if (n1 <= n2) {
        n1 = 0;
    } else {
        n2 = 0;
    }
}