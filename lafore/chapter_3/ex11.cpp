#include <iostream>

using namespace std;

int main() {
    int pounds_1, shillings_1, pence_1, pounds_2, shillings_2, pence_2, pounds_3=0, shillings_3=0, pence_3=0;
    char dot, op;
    float factor;

    cout << "Enter operation +/-/*: ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Enter first amount: ";
            cin >> pounds_1 >> dot >> shillings_1 >> dot >> pence_1;
            cout << "Enter second amount: "; 
            cin >> pounds_2 >> dot >> shillings_2 >> dot >> pence_2;

            pence_3 = pence_1 + pence_2;
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
            break;
        case '-':
            cout << "Enter first amount: ";
            cin >> pounds_1 >> dot >> shillings_1 >> dot >> pence_1;
            cout << "Enter second amount: "; 
            cin >> pounds_2 >> dot >> shillings_2 >> dot >> pence_2;

            pence_3 = pence_1 - pence_2;
            if (pence_3 < 0) {
                shillings_3 -= 1;
                pence_3 += 12;
            }
            shillings_3 = shillings_1 - shillings_2;
            if (shillings_3 < 0) {
                pounds_3 -= 1;
                shillings_3 += 20;
            }
            pounds_3 = pounds_1 - pounds_2;
            break;
        case '*':
            cout << "Enter amount: ";
            cin >> pounds_1 >> dot >> shillings_1 >> dot >> pence_1;
            cout << "Enter factor: "; 
            cin >> factor;
            
            pounds_3 = pounds_1 * factor;
            shillings_3 = shillings_1 * factor;
            pence_3 = pence_1 * factor;
            while (pence_3 >= 12) {
                shillings_3 += 1;
                pence_3 -= 12;
            }
            while (shillings_3 >= 20) {
                pounds_3 += 1;
                shillings_3 -= 20;
            }
            break;
        default:
            cout << "Incorrect formula. Exiting.";
            return 0;
        }

    cout << "Result = " << pounds_3 << "." << shillings_3 << "." << pence_3;
    return 0;
}
