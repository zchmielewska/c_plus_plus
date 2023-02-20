// ex: page 259, sol: page 929
#include <iostream>
using namespace std;

class Int {
    private:
        int value;
    public:
        Int() : value(0) {}
        Int(int v) : value(v) {}
        void add(Int other);
        void show();
};

void Int::add(Int other) {
    value += other.value;
}

void Int::show() {
    cout << "Value is: " << value << endl;
}

int main() {
    Int int1;
    Int int2(3);
    Int int3(5);

    int1.add(int2);
    int1.add(int3);
    int1.show();

    return 0;
}