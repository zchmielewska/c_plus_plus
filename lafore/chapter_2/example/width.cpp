#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    long pop1=2425784, pop2=47, pop3=9761;

    cout << setw(8) << "LOCATION" << setw(12) << "POPULATION" << endl
         << setw(8) << "Portcity" << setw(12) << pop1 << endl
         << setw(8) << "Hightown" << setw(12) << pop2 << endl
         << setw(8) << "Lowville" << setw(12) << pop3 << endl;

    Sleep(10000);
}