#include <iostream>

using namespaces std;

class A {
    private:
        int privdataA;
    protected:
        int protdataA;
    public:
        int pubdataA;
};

class B : public A {
    public:
        void funct() {
            int a;
            a = privdataA; // error - not accessible
            a = protdataA; // OK
            a = pubdataA;  // OK
        }
}

class C : private A {
    public:
        void funct() {
            int a;
            a = privdataA; // error - not accessible
            a = protdataA; // OK
            a = pubdataA;  // OK
        }
}

int main() {
    int a;

    B objB;
    a = objB.privdataA; // error - not accessible
    a = objB.protdataA; // error - not accessible
    a = objB.pubdataA;  // OK (A public to B)

    C objC;
    a = objC.privdataA; // error - not accessible
    a = objC.protdataA; // error - not accessible
    a = objC.pubdataA;  // error - not accessible (A private to B)

    return 0;
}