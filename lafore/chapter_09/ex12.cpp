#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

const double EPSILON = 0.000001;

int lowterms_den(int num, int den) {
    long tnum, tden, temp, gcd;

    tnum = labs(num);
    tden = labs(den);

    if (tden == 0) { 
        cout << "Illegal fraction: division by 0"; exit(1); 
    } else if (tnum == 0) { 
        num=0; den = 1; return den;
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
    return den;
}

class Sterling {
    protected:
        long pounds;
        int shillings;
        int pence;
    public:
        Sterling() : pounds(0), shillings(0), pence(0) {};

        Sterling(double decimal_pounds) {
            double decimal_pounds_frac;
            double decimal_shillings;
            double decimal_shillings_frac;

            pounds = static_cast<int>(decimal_pounds);
            decimal_pounds_frac = decimal_pounds - pounds;
            decimal_shillings = decimal_pounds_frac * 20;

            shillings = static_cast<int>(decimal_shillings);
            decimal_shillings_frac = decimal_shillings - shillings;
            pence = decimal_shillings_frac * 12;
        }

        Sterling(long po, int sh, int pe) : pounds(po), shillings(sh), pence(pe) {};

        void getSterling() {
            char temp;
            cout << "Enter old-style sterling (e.g. 4.10.2): ";
            cin >> pounds >> temp >> shillings >> temp >> pence;
        }

        void putSterling() {
            cout << pounds << "." << shillings << "." << pence << endl;
        }

        operator double() {
            return pounds + shillings/20.0 + pence/(20.0*12.0);
        }
        
        Sterling operator + (Sterling s2) {
            return Sterling(double(Sterling(pounds, shillings, pence)) + double(s2));
        }

        Sterling operator - (Sterling s2) {
            return Sterling(double(Sterling(pounds, shillings, pence)) - double(s2));
        }

        Sterling operator * (double d) {
            return Sterling(double(Sterling(pounds, shillings, pence)) * d);
        }

        Sterling operator / (Sterling s2) {
            return Sterling(double(Sterling(pounds, shillings, pence)) / double(s2));
        }

        Sterling operator / (double d) {
            return Sterling(double(Sterling(pounds, shillings, pence)) / d);
        }
};

class Sterfrac : public Sterling {
    private:
        int eights;
    public:
        Sterfrac() : Sterling(0, 0, 0) {
            eights = 0;
        }

        Sterfrac(long po, int sh, int pe, int ei) : Sterling(po, sh, pe) {
            eights = ei;
        };

        Sterfrac(double decimal_pounds) {
            double decimal_pounds_frac;
            double decimal_shillings;
            double decimal_shillings_frac;
            double decimal_pence;
            double decimal_pence_frac;

            pounds = static_cast<int>(decimal_pounds);
            decimal_pounds_frac = decimal_pounds - pounds;
            decimal_shillings = decimal_pounds_frac * 20;

            shillings = static_cast<int>(decimal_shillings);
            decimal_shillings_frac = decimal_shillings - shillings;
            decimal_pence = decimal_shillings_frac * 12;

            pence = static_cast<int>(decimal_pence);
            decimal_pence_frac = decimal_pence - pence;
            eights = static_cast<int>(decimal_pence_frac * 8.0 + EPSILON);
        }

        void getSterling() {
            char ch;
            int num, den;
            cout << "Enter old-style sterling (e.g. 4.10.2-3/8): ";
            cin >> pounds >> ch >> shillings >> ch >> pence >> ch >> num >> ch >> den;
            eights = (8/den)*num;
        }
        
        void putSterling() {
            int den = lowterms_den(eights, 8);
            cout << pounds << "." << shillings << "." << pence << "-" << eights/(8/den) << "/" << den << endl;
        }

        operator double() {
            return pounds + shillings/20.0 + (pence+eights/8.0)/(20.0*12.0);
        }
                
        Sterfrac operator + (Sterfrac s2) {
            return Sterfrac(double(Sterfrac(pounds, shillings, pence, eights)) + double(s2));
        }

        Sterfrac operator - (Sterfrac s2) {
            return Sterfrac(double(Sterfrac(pounds, shillings, pence, eights)) - double(s2));
        }

        Sterfrac operator * (double d) {
            return Sterfrac(double(Sterfrac(pounds, shillings, pence, eights)) * d);
        }

        Sterfrac operator / (Sterfrac s2) {
            return Sterfrac(double(Sterfrac(pounds, shillings, pence, eights)) / double(s2));
        }

        Sterfrac operator / (double d) {
            return Sterfrac(double(Sterfrac(pounds, shillings, pence, eights)) / d);
        }
};

int main() {
    double d = 1.5;
    Sterfrac s1, s2(1, 0, 0, 4), s3;
    s1.getSterling();

    cout << "Addition:" << endl;
    s3 = s1 + s2;
    s3.putSterling();

    cout << "Subtraction:" << endl;
    s3 = s1 - s2;
    s3.putSterling();

    cout << "Multiplication:" << endl;
    s3 = s1 * d;
    s3.putSterling();

    cout << "Division by another sterling:" << endl;
    s3 = s1 / s2;
    s3.putSterling();

    cout << "Division by double:" << endl;
    s3 = s1 / d;
    s3.putSterling();

    return 0;
}