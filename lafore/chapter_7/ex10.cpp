
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
