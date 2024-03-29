#include <iostream>

using namespace std;

void repchar(char, int);

int main() {
    repchar('-', 43);
    cout << "Data type   Range" << endl;
    repchar('=', 23);
    cout << "char        -128 to 127" << endl
         << "short       -32,768 to 32,767" << endl
         << "int         System dependent" << endl
         << "long        -2,147,483,648 to 2,147,483,647" << endl;
    repchar('-', 43);
    return 0;
}

void repchar(char ch, int n) {
    for (int j=0; j<n; j++)
        cout << ch;
    cout << endl;
}
