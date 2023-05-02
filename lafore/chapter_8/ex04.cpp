#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Int {
    private:
        int value;
    public:
        Int() : value(0) {}
        Int(int v) : value(v) {}

        Int operator + (Int other) {
            double d;
            int v;
            d = static_cast<double>(value) + static_cast<double>(other.value);
            v = dtoi(d);
            return Int(v);
        }

        Int operator - (Int other) {
            double d;
            int v;
            d = static_cast<double>(value) - static_cast<double>(other.value);
            v = dtoi(d);
            return Int(v);
        }

        Int operator * (Int other) {
            double d;
            int v;
            d = static_cast<double>(value) * static_cast<double>(other.value);
            v = dtoi(d);
            return Int(v);
        }
        
        Int operator / (Int other) {
            double d;
            int v;
            d = static_cast<double>(value) / static_cast<double>(other.value);
            v = dtoi(d);
            return Int(v);
        }

        int dtoi(double d) {
            int v;
            if (d < -214748364 || d > 2147483647) {
                cout << "Value out of bonds."; exit(1);
            }
            v = static_cast<int>(d);
            return v;
        }

        void show() {
            cout << "Value is: " << value << endl;
        }
};

int main() {
    Int int1;
    Int int2(35);
    Int int3(7);

    cout << "+" << endl;
    int1 = int2 + int3;
    int1.show();

    cout << "-" << endl;
    int1 = int2 - int3;
    int1.show();

    cout << "*" << endl;
    int1 = int2 * int3;
    int1.show();

    cout << "/" << endl;
    int1 = int2 / int3;
    int1.show();

    return 0;
}