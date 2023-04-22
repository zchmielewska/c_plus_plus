/*For math buffs only: Create a class Polar that represents the points on the plain as polar
coordinates (radius and angle). Create an overloaded +operator for addition of two
Polar quantities. “Adding” two points on the plain can be accomplished by adding their
X coordinates and then adding their Y coordinates. This gives the X and Y coordinates of
the “answer.” Thus you’ll need to convert two sets of polar coordinates to rectangular
coordinates, add them, then convert the resulting rectangular representation back to polar.*/

#include <iostream>
#include <math.h>

using namespace std;

const float PI=3.14159265;

class Polar {
    private:
        float radius;
        float angle;
    public:
        Polar() : radius(0), angle(0) {};
        Polar(float r, float a) :  radius(r), angle(a) {};

        Polar operator + (Polar p2) const {
            float r, a, x, y, x1, y1, x2, y2;

            x1 = radius * cos(angle * PI/180.0);
            y1 = radius * sin(angle * PI/180.0);

            x2 = p2.radius * cos(p2.angle * PI/180.0);
            y2 = p2.radius * sin(p2.angle * PI/180.0);

            x = x1 + x2;
            y = y1 + y2;

            r = sqrt(pow(x, 2) + pow(y, 2));
            a = atan2(y, x) * 180.0/PI;

            return Polar(r, a);
        }

        void display() {
            cout << "(" << radius << ", " << angle << ")" << endl;
        }
};

int main() {
    Polar p1(2, 45), p2(2, 135), p3;

    p3 = p1 + p2;
    p3.display();

    return 0;
}