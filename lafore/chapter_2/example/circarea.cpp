#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    float rad;
    const float PI = 3.14159F;
    cout << "Enter radius of circle: ";
    cin >> rad;
    float area = PI * rad * rad;
    cout << "Area is " << area << endl;
    Sleep(10000);
    return 0;
}