#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    char dummychar;

    cout << "Enter first fraction: ";
    cin >> a >> dummychar >> b;

    cout << "Enter second fraction: ";
    cin >> c >> dummychar >> d;

    cout << "Sum = " << a*d + b*c << "/" << b*d;

    return 0;
}