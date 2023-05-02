#include <iostream>
#include <process.h>

using namespace std;

const int LIMIT = 100;

class safearay {
    private:
        int lower_bound;
        int upper_bound;
        int arr[LIMIT];
    public:
        safearay(int lb, int ub) : lower_bound(lb), upper_bound(ub) { };

        int& operator [] (int n) {
            if (n<lower_bound || n>=upper_bound) {
                cout << "Index out of bounds"; exit(1);
            }
            return arr[n-lower_bound];
        }
};

int main() {
    int lb=10, ub=20, j;
    safearay sa1(lb, ub);

    for (j=lb; j<ub; j++) {
        sa1[j] = j*10;
    }

    for (j=lb; j<ub; j++) {
        int temp = sa1[j];
        cout << "Element " << j << " is " << temp << endl;
    }
    return 0;
}