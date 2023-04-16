/*A matrix is a two-dimensional array. Create a class matrix that provides the same safety
feature as the array class in Exercise 7; that is, it checks to be sure no array index is out
of bounds. Make the member data in the matrix class a 10-by-10 array. A constructor
should allow the programmer to specify the actual dimensions of the matrix (provided
they’re less than 10 by 10). The member functions that access data in the matrix will now
need two index numbers: one for each dimension of the array. Here’s what a fragment of
a main() program that operates on such a class might look like:
matrix m1(3, 4); // define a matrix object
int temp = 12345; // define an int value
m1.putel(7, 4, temp); // insert value of temp into matrix at 7,4
temp = m1.getel(7, 4); // obtain value from matrix at 7,4*/

#include <iostream>
using namespace std;

class matrix {
    private:
        static const int MAX=10;
        int data[MAX][MAX];
    public:
        matrix() {};

        void putel(int x, int y, int el) {
            if (x < MAX && y < MAX) {
                data[x][y] = el;
            }
        }

        int getel(int x, int y) {
            if (x < MAX && y < MAX) {
                return data[x][y];
            }
        }
};


int main() {
    matrix m1;
    int temp = 12345;
    m1.putel(7, 4, temp);
    temp = m1.getel(7, 4);
    cout << "Element = " << temp;
}
