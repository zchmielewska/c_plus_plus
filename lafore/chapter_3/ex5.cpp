/*
Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX
except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
loop that steps down the screen from line to line.


/*
1 --> 1
2 --> 3
3 --> 5
4 --> 7
*/

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
