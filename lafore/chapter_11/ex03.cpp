#include <iostream>
using namespace std;

class Array {
    private:
        int* ptr;
        int size;
    public:
        Array(int s) {
            size = s;
            ptr = new int[s];
        }

        ~Array() {
            delete[] ptr;
        }

        int& operator [] (int j) {
            return *(ptr+j);
        }

        Array operator = (Array& a) {
            delete[] ptr;
            size = a.size;
            ptr = new int[a.size];
            for (int j=0; j<size; j++) {
                *(ptr+j) = *(a.ptr+j);
            }
            return *this;
        }

        Array(Array& a) {
            size = a.size;
            ptr = new int[a.size];
            for (int j=0; j<size; j++) {
                *(ptr+j) = *(a.ptr+j);
            }
        }
};

int main() {
    const int ASIZE = 10;
    Array arr1(ASIZE);
    Array arr2(ASIZE);

    int j;

    for (j=0; j<ASIZE; j++) {
        arr1[j] = j*j;        
    }

    arr2 = arr1;   
    Array arr3(arr1);

    cout << "\narr2" << endl;
    for (j=0; j<ASIZE; j++) {
        cout << arr2[j] << ' ';
    }

    cout << "\narr3" << endl;
    for (j=0; j<ASIZE; j++) {
        cout << arr3[j] << ' ';
    }

    return 0;
}