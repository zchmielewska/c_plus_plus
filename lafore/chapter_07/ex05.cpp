/*Start with the fraction class from Exercises 11 and 12 in Chapter 6. Write a main()
program that obtains an arbitrary number of fractions from the user, stores them in an
array of type fraction, averages them, and displays the result.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

static int SIZE=3;

class fraction {
    private:
        int num;
        int den;
    public:
        fraction() : num(0), den(1) {};
        fraction(int n, int d) : num(n), den(d) {};

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
    fraction fractions[SIZE];
    fraction favg(0, 1);
    fraction divider(1, SIZE);
    
    cout << "You will be asked to enter " << SIZE << " fractions." << endl;
    for (int i=0; i<SIZE; i++) {
        fractions[i].set_data();
        favg.fadd(fractions[i]);
    }

    favg.fmul(divider);
    favg.lowterms();
    cout << "The average is: ";
    favg.display();
    return 0;
}