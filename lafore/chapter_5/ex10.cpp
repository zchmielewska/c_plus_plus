/*Write a function that, when you call it, displays a message telling how many times it has
been called: “I have been called 3 times”, for instance. Write a main() program that calls
this function at least 10 times. Try implementing this function in two different ways.
First, use a global variable to store the count. Second, use a local static variable. Which
is more appropriate? Why can’t you use a local variable?*/

#include <iostream>

using namespace std;

int num1 = 0;

void increment_global() {
    num1 += 1;
} 

int increment_local() {
    static int num2 = 0;
    num2 += 1;
    return num2;
}

int main() {
    int num2;

    for (int i=0; i<11; i++) {
        increment_global();
        num2 = increment_local();
    }

    cout << "(Global) I have been called " << num1 << " times." << endl;
    cout << "(Local) I have been called " << num2 << " times." << endl;

    return 0;
}