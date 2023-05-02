#include <iostream>

using namespace std;

int main() {
    int n = 20;
    int side = n-1;

    for (int i=0; i<n; i++) {
        for (int j=0; j<side; j++) {
            cout << ' ';
        }
        for (int j=0; j<(n-side)*2-1; j++) {
            cout << 'x';
        }
        for (int j=0; j<side; j++) {
            cout << ' ';
        }
        cout << endl;
        side--;
    }

    return 0;
}
