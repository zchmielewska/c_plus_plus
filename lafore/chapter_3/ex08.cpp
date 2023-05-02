#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int pounds_1, shillings_1, pence_1, pounds_2, shillings_2, pence_2, pounds_3, shillings_3, pence_3;
    char dot, decision;

    while (decision != 'n') {
        cout << "\nEnter first amount: ";
        cin >> pounds_1 >> dot >> shillings_1 >> dot >> pence_1;

        cout << "Enter second amount: ";
        cin >> pounds_2 >> dot >> shillings_2 >> dot >> pence_2;



        pounds_3 = 0;
        shillings_3 = 0;
        pence_3 = 0;



        pence_3 += pence_1 + pence_2;
        if (pence_3 >= 12) {
            shillings_3 += 1;
            pence_3 -= 12;
        }

        shillings_3 += shillings_1 + shillings_2;
        if (shillings_3 >= 20) {
            pounds_3 += 1;
            shillings_3 -= 20;
        }

        pounds_3 += pounds_1 + pounds_2;
        
        cout << "Total is " << pounds_3 << "." << shillings_3 << "." << pence_3 << endl;
        cout << "Do you wish to continue (y/n)? ";
        decision = getche();
    }

    return 0;
}