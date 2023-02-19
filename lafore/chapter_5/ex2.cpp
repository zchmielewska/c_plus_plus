// ex: page 212, sol: page 925
#include <iostream>
using namespace std;

double power(double n, int p=2);

int main() {
    double n;
    unsigned int p;

    cout << "Enter a number: "; cin >> n;
    cout << "Enter a power: "; cin >> p;
    cout << "The result is: " << power(n, p);

    return 0;
}

double power(double n, int p) {
    if (p == 1) {
        return n;
    } else {
        return n * power(n, p-1);
    }
}