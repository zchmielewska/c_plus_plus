#include <iostream>

using namespace std;

void addarrays(float* arr1, float* arr2, float* arr3, int n) {
    for (int i=0; i<n; i++) {
        *(arr3+i) = *(arr1+i) + *(arr2+i); 
    }
};

int main() {
    const int SIZE = 4;
    float array1[SIZE] = {1.11, 2.22, 3.33, 4.44};
    float array2[SIZE] = {5.55, 6.66, 7.77, 8.88};
    float array3[SIZE];


    addarrays(array1, array2, array3, SIZE);

    for (int i=0; i<SIZE; i++) {
        cout << *(array3+i) << endl;
    }

    return 0;
}