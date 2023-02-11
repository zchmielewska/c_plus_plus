#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int ct = 0;
    int numb = 0;
    int mult;
    char ch;
    char digit;

    cout << "Enter digits: ";

    while (ct < 6) {
        ch = getche();

        if (ch == '\r') {
            break;
        }

        digit = ch - 48;
        numb = numb * 10 + digit;
        ct++;
    } 

    cout << "\nNumber is: " << numb;

    getch();   
    return 0;
}