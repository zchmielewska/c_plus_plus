// ex: page 158, sol: page 923

#include <iostream>
#include <conio.h>

using namespace std;

struct point
{
    int x;
    int y;
};


int main() {
    point p1;
    point p2;
    point p3;

    cout << "Enter cooordinates for p1: ";
    cin >> p1.x >> p1.y;

    cout << "Enter coordinates for p2: ";
    cin >> p2.x >> p2.y;

    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    cout << "Coordinates of p1+p2 are: " << p3.x << ", " << p3.y;

    return 0;
}