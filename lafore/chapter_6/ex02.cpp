// ex: page 259, sol: page 929
#include <iostream>
#include <conio.h>

using namespace std;

class tollBooth {
    private:
        unsigned int cars;
        double money;
    public:
        tollBooth() : cars(0), money(0.0) {}

        void payingCar() {
            cars += 1;
            money += 0.5;
        }

        void nopayCar() {
            cars += 1;
        }

        void display() const {
            cout << "Cars = " << cars << ", money = " << money << endl;
        }
};

int main() {
    char ch;
    tollBooth tb;

    cout << "Enter 'p' if car paid and 'n' if not. Press enter to exit." << endl;
    do {
        ch = getche();
        switch(ch) {
            case 'p': 
                tb.payingCar();
                break;
            case 'n':
                tb.nopayCar();
                break;
        }
        cout << endl;
    } while (ch != '\r');

    tb.display();

    return 0;
}