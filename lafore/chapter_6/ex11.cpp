#include <iostream>
#include <stdlib.h>

using namespace std;

class fraction {
    private:
        int num;
        int den;
    public:
        void set_data() {
            char dummy;            
            cout << "Enter the fraction: ";
            cin >> num >> dummy >> den;
        }

        void display() {
            cout << num << "/" << den;
        }

        void fadd(fraction f) {
            num = num*f.den + den*f.num;
            den = den*f.den;
        }

        void fsub(fraction f) {
            num = num*f.den - den*f.num;
            den = den*f.den;
        }

        void fmul(fraction f) {
            num = num*f.num;
            den = den*f.den;
        }

        void fdiv(fraction f) {
            num = num*f.den;
            den = den*f.num;
        }

        void lowterms() {
            long tnum, tden, temp, gcd;
            tnum = labs(num);
            tden = labs(den);

            if (tden == 0) { 
                cout << "Illegal fraction: division by 0"; exit(1); 
            } else if (tnum == 0) { 
                num=0; den = 1; return; 
            }
            
            while(tnum != 0) {
                if (tnum < tden) { 
                    temp=tnum; tnum=tden; tden=temp; 
                } // swap them
                tnum = tnum - tden; // subtract them
            }
            gcd = tden; // this is greatest common divisor
            num = num / gcd; // divide both num and den by gcd
            den = den / gcd; // to reduce frac to lowest terms
        }

};


int main() {
    fraction f1, f2;
    char op, decision = 'y';

    while (decision != 'n') {
        f1.set_data();
        cout << "Enter an operator: "; cin >> op;
        f2.set_data();

        switch (op) {
            case '+':
                f1.fadd(f2); break;
            case '-':
                f1.fsub(f2); break;
            case '*':
                f1.fmul(f2); break;
            case '/':
                f1.fdiv(f2); break;
            default:
                cout << "Something went wrong."; return 0;
        }
        f1.lowterms();
        f1.display();
        cout << "\nDo you want to continue (y/n)? ";
        cin >> decision;
    }

    return 0;
}

