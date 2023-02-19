#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

Distance larger(Distance d1, Distance d2);

int main() {
    Distance d1, d2;
    Distance d;

    cout << "Enter distance 1 feet: ";   cin >> d1.feet;
    cout << "Enter distance 1 inches: "; cin >> d1.inches;
    cout << "Enter distance 2 feet: ";   cin >> d2.feet;
    cout << "Enter distance 2 inches: "; cin >> d2.inches;

    d = larger(d1, d2);

    cout << "The larger distance is: " << d.feet << "'-" << d.inches << "\"";
    return 0;
}

Distance larger(Distance d1, Distance d2) {
    if (d1.feet > d2.feet) {
        return d1;
    } else if (d2.feet > d1.feet) {
        return d2;
    } else {
        if (d1.inches > d2.inches) {
            return d1;
        } else {
            return d2;
        }
    }
}
