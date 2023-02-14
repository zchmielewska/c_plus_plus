// ex: page 158, sol: page 923

#include <iostream>
#include <conio.h>

using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Volume {
    Distance d1, d2 ,d3;
};

int main() {
    Volume v;
    float l1, l2, l3;

    v.d1.feet = 10;
    v.d1.inches = 5.0;
    v.d2.feet = 2;
    v.d2.inches = 1.1;
    v.d3.feet = 3;
    v.d3.inches = 4.7; 
    
    l1 = v.d1.feet + v.d1.inches/12.0;
    l2 = v.d2.feet + v.d2.inches/12.0;
    l3 = v.d3.feet + v.d3.inches/12.0;

    cout  << "Volume is: " << l1 * l2 * l3;

    getch();
    return 0;
}