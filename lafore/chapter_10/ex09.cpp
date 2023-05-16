#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int SIZE = 10;
    int a0[SIZE], a1[SIZE], a2[SIZE], a3[SIZE], a4[SIZE], 
        a5[SIZE], a6[SIZE], a7[SIZE], a8[SIZE], a9[SIZE];
    int* ap[SIZE] = {a0, a1, a2, a3, a4, a5, a6, a7, a8, a9};
    int i, j;

    for (i=0; i<SIZE; i++) {
        for (j=0; j<SIZE; j++) {
            ap[i][j] = (i+j)*10;
        }
    }

    for (i=0; i<SIZE; i++) {
        for (j=0; j<SIZE; j++) {
            cout << setw(4) << ap[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}