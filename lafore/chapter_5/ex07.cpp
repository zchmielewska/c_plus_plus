/*Start with the power() function of Exercise 2, which works only with type double.
Create a series of overloaded functions with the same name that, in addition to double,
also work with types char, int, long, and float. Write a main() program that exercises
these overloaded functions with all argument types.*/

#include <iostream>
using namespace std;

double power(double n, int p=2);
char power(char n, int p=2);
int power(int n, int p=2);
long power(long n, int p=2);
float power(float n, int p=2);

int main() {
    double n1;
    char n2;
    int n3;
    long n4;
    float n5;
    unsigned int p;

    cout << "Enter a double: "; cin >> n1;
    cout << "Enter a power: "; cin >> p;
    cout << "The result is: " << power(n1, p);
    cout << endl;

    cout << "Enter a char: "; cin >> n2;
    cout << "Enter a power: "; cin >> p;
    cout << "The result is: " << power(n2, p);
    cout << endl;

    cout << "Enter an int: "; cin >> n3;
    cout << "Enter a power: "; cin >> p;
    cout << "The result is: " << power(n3, p);
    cout << endl;
    
    cout << "Enter a long: "; cin >> n4;
    cout << "Enter a power: "; cin >> p;
    cout << "The result is: " << power(n4, p);
    cout << endl;
    
    cout << "Enter a float: "; cin >> n5;
    cout << "Enter a power: "; cin >> p;
    cout << "The result is: " << power(n5, p);
    cout << endl;

    return 0;
}

double power(double n, int p) {
    if (p == 1) {
        return n;
    } else {
        return n * power(n, p-1);
    }
}

char power(char n, int p) {
    if (p == 1) {
        return n;
    } else {
        return n * power(n, p-1);
    }
}

int power(int n, int p) {
    if (p == 1) {
        return n;
    } else {
        return n * power(n, p-1);
    }
}

long power(long n, int p) {
    if (p == 1) {
        return n;
    } else {
        return n * power(n, p-1);
    }
}

float power(float n, int p) {
    if (p == 1) {
        return n;
    } else {
        return n * power(n, p-1);
    }
}
