#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main() {
    int ct = 1;
    int numb;

    cout << "Enter a number: ";
    cin >> numb;

    while (ct <= 200) {
        cout << setw(6) << numb * ct;
        if (ct % 10 == 0) {
            cout << endl;
        }
        ct++;
    }

    getch();
    return 0;
}