#include <iostream>
using namespace std;

const int MAX = 5;

void centimize(double* ptrd) {
    for (int j=0; j<MAX; j++) {
        *ptrd++ *= 2.54;
    }
}

int main() {
    double varray[MAX] = {10.0, 43.1, 95.9, 59.7, 87.3};
    centimize(varray);

    for (int j=0; j<MAX; j++) {
        cout << "varray[" << j << "]=" << varray[j] << " centimeters" << endl;
    }

    return 0;
}