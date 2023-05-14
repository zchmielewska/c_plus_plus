// ex: page 158, sol: page 922

#include <iostream>
#include <conio.h>

using namespace std;

struct phone {
    int area;
    int exchange;
    int number;
};

int main() {
    phone phone1 = {212, 767, 8900};
    phone phone2;

    cout << "Enter your area code, exchange, and number: " << endl;
    cin >> phone2.area >> phone2.exchange >> phone2.number;

    cout << "\nMy number is (" << phone1.area << ") " << phone1.exchange << "-" << phone1.number << endl;
    cout << "Your number is (" << phone2.area << ") " << phone2.exchange << "-" << phone2.number << endl;
    
    getch();
    return 0;
}