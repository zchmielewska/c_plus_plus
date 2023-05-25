#include <iostream>
using namespace std;

class Base {
    public:
        // ~Base()              // non-virtual destructor
        virtual ~Base()   // virtual desctructor
        { cout << "Base destroyed" << endl; }
};

class Derv : public Base {
    public:
        ~Derv() {
            cout << "Derv destroyed" << endl;
        }
};

int main() {
    Base* pBase = new Derv;
    delete pBase;
    return 0;
}

