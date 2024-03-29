#include <iostream>
#include <stdlib.h>

using namespace std;

class fraction {
    private:
        int num, den;
    public:
        fraction() : num(0), den(1) {};
        fraction(int n, int d) : num(n), den(d) {};

        void set_data() {
            char dummy;            
            cout << "Enter the fraction: ";
            cin >> num >> dummy >> den;
        }

        void display() {
            cout << num << "/" << den << endl;
        }

        fraction operator + (fraction f) const {
            int n, d;
            n = num*f.den + den*f.num;
            d = den*f.den;
            return fraction(n, d);
        }

        fraction operator - (fraction f) const {
            int n, d;
            n = num*f.den - den*f.num;
            d = den*f.den;
            return fraction(n, d);
        }

        fraction operator * (fraction f) const {
            int n, d;
            n = num*f.num;
            d = den*f.den;
            return fraction(n, d);
        }

        fraction operator / (fraction f) const {
            int n, d;
            n = num*f.den;
            d = den*f.num;
            return fraction(n, d);
        }

        bool operator == (fraction f) const {
            return (num == f.num) && (den == f.den);
        }


        bool operator != (fraction f) const {
            return (num != f.num) || (den != f.den);
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
    fraction f1(1,2), f2(2,4), f3;
    bool equal, unequal;

    f1.lowterms();
    f2.lowterms();

    f3 = f1 + f2;
    f3.display();

    f3 = f1 - f2;
    f3.display();

    f3 = f1 * f2;
    f3.display();

    f3 = f1 / f2;
    f3.display();

    equal = f1 == f2;
    cout << "equal = " << equal << endl;

    unequal = f1 != f2;
    cout << "unequal = " << unequal << endl;

    return 0;
}