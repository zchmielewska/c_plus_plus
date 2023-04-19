/*Create a class Int based on Exercise 1 in Chapter 6. Overload four integer arithmetic
operators (+, -, *, and /) so that they operate on objects of type Int. If the result of any
such arithmetic operation exceeds the normal range of ints (in a 32-bit environment)—
from 2,147,483,648 to –2,147,483,647—have the operator print a warning and terminate
the program. Such a data type might be useful where mistakes caused by arithmetic overflow
are unacceptable. Hint: To facilitate checking for overflow, perform the calculations
using type long double. Write a program to test this class.
*/

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