// ex: page 212, sol: page 925
#include <iostream>
using namespace std;

float circarea(float r);

int main() {
    float r;
    cout << "Enter radius: "; cin >> r;
    cout << "Area is: " << circarea(r);
    return 0;
}

float circarea(float r) {
    const float PI = 3.14159F;
    return PI * r * r;
}
