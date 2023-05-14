#include <iostream>
using namespace std;

void order(int* numb1, int* numb2) {
    if (*numb1 > *numb2) {
        int temp = *numb1;
        *numb1 = *numb2;
        *numb2 = temp;
    }
}

int main() {
    int n1=99, n2=11;
    order(&n1, &n2);
    cout << "n1 = " << n1 << " n2 = " << n2 << endl;
}