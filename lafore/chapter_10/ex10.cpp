#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int SIZE = 10;
    int* ap[SIZE];
    int i, j;

    for (i=0; i<SIZE; i++) {
        *(ap+i) = new int[SIZE];
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