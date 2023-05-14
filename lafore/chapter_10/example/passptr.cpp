#include <iostream>
using namespace std;

void centimize(double* ptrd) {
    *ptrd *= 2.54;
}

int main() {
    double var = 10.0;
    cout << "var = " << var << " inches" << endl;

    centimize(&var);
    cout << "var = " << var << " centimeters" << endl;

    return 0;
}