#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    int var;

    var = 10;
    cout << var << endl;
    
    var *= 2;
    cout << var << endl;

    var--;
    cout << var << endl;

    Sleep(10000);

    return 0;
}