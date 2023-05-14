// ex: page 314, sol: page 935
#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0) {}

        void getdata() {
            cout << "Enter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }

        void display() {
            cout << feet << "\'-" << inches << "\"" << endl;
        }

        void add_dist(Distance);
        void div_dist(int);
};

void Distance::add_dist(Distance d2) {
    inches += d2.inches;
    if (inches >= 12.0) {
        inches -= 12.0;
        feet++;
    }
    feet += d2.feet;
}

void Distance::div_dist(int divisor) {
    float fltfeet = feet + inches/12.0;
    fltfeet /= divisor;
    feet = int(fltfeet);
    inches = (fltfeet-feet) * 12.0;
}

int main() {
    Distance dist[100];
    Distance result;
    int n = 0;
    char ch;
    
    do {
        dist[n].getdata();
        n++;    
        cout << "Continue (y/n)? "; cin >> ch;
    } while (ch == 'y');

    for (int j = 0; j < n; j++) {
        result.add_dist(dist[j]);
    }

    result.div_dist(n);
    cout << "Average of distances is: ";
    result.display();
    return 0;
}
