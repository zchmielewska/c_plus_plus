#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    cout << "It is a lowercase: " << islower(letter);
    return 0;
}