/*Note that one advantage of the OOP approach is that an entire class can be used, without
modification, in a different program. Use the fraction class from Exercise 11 in a program
that generates a multiplication table for fractions. Let the user input a denominator,
and then generate all combinations of two such fractions that are between 0 and 1, and
multiply them together. Here’s an example of the output if the denominator is 6:

     1/6   1/3   1/2   2/3  5/6
-----------------------------------------
1/6  1/36  1/18  1/12  1/9  5/36
1/3  1/18  1/9   1/6   2/9  5/18
1/2  1/12  1/6   1/4   1/3  5/12
2/3  1/9   2/9   1/3   4/9  5/9
5/6  5/36  5/18  5/12  5/9  25/36*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class fraction {
    private:
        int num;
        int den;
    public:
        fraction() : num(1), den(1) {}
        fraction(int n, int d) : num(n), den(d) {}

        void display() {
            cout << right << setw(3) << num << "/" << left << setw(3) << den;
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

        void fmul(fraction f1, fraction f2) {
            num = f1.num*f2.num;
            den = f1.den*f2.den;
        };
};


int main() {
    int x;
    fraction f3;
    cout << "Enter denominator: "; cin >> x;

    cout << string(7, ' ');
    for (int k=1; k<x; k++) {
        fraction f(k, x);
        f.display(); 
    }
    cout << endl << string(7*x, '-') << endl;

    for (int i=1; i<x; i++) {
        fraction f1(i, x);
        f1.display();

        for (int j=1; j<x; j++) {
            fraction f2(j, x);

            f3.fmul(f1, f2);
            f3.lowterms();
            f3.display();
        }
        cout << endl;
    }

    return 0;
}