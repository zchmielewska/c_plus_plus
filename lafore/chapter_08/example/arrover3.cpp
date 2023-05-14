#include <iostream>
#include <process.h>

using namespace std;

const int LIMIT = 100;

class safearay {
    private: 
        int arr[LIMIT];
    public:
        int& operator [] (int n) {
            if (n<0 || n>=LIMIT) {
                cout << "Index out of bounds"; exit(1);
            }
            return arr[n];
        }
};

int main() {
    safearay sa1;
    int j;

    for (j=0; j<LIMIT; j++) {
        sa1[j] = j*10;
    }

    for (j=0; j<LIMIT; j++) {
        int temp = sa1[j];
        cout << "Element " << j << " is " << temp << endl;
    }
    return 0;
}