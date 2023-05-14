#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    //wrong answer
    int intVar = 150000000;
    intVar = (intVar * 10) / 10;
    cout << "intVar = " << intVar << endl;

    //right answer
    intVar = 150000000;
    intVar = (static_cast<double>(intVar) * 10) / 10;
    cout << "intVar = " << intVar << endl;

    Sleep(10000);
    return 0;
}