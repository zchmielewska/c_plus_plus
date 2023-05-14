#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    cout << 1990 << setw(6) << 135 << endl
         << 1991 << setw(6) << 7290 << endl
         << 1992 << setw(6) << 11300 << endl
         << 1993 << setw(6) << 16200 << endl;
    Sleep(10000);
    return 0;
}