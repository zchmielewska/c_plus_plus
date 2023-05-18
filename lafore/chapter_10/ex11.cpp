#include <iostream>
#include <iomanip>
using namespace std;


const int SIZE = 10;

class bigArray {
    private:
        int* ap[SIZE];
    public:
        bigArray() {
            int i, j;

            for (i=0; i<SIZE; i++) {
                *(ap+i) = new int[SIZE];
                for (j=0; j<SIZE; j++) {
                    ap[i][j] = 0;
                }
            }
        }
    
        int& operator [] (int n) {
            return ap[n / SIZE][n % SIZE];
        }
};

int main() {
    bigArray ba;

    for (int i=0; i<SIZE*SIZE; i++) {
        ba[i] = i;
    }

    for (int i=0; i<SIZE*SIZE; i++) {
        cout << ba[i] << endl;
    }

    return 0;
}