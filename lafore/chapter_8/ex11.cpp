#include <iostream>
using namespace std;

class Sterling {
    private:
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

int main() {
    Sterling s1, s2, s3;
    double d;

    cout << "\nValue for s1:" << endl;
    s1.getSterling();
    cout << "\nValue for s2:" << endl;
    s2.getSterling();
    cout << "\nValue for d:" << endl << "Enter value for variable of type double: ";
    cin >> d;

    cout << "\ns1 + s2 = ";
    s3 = s1 + s2;
    s3.putSterling();

    cout << "\ns1 - s2 = ";
    s3 = s1 - s2;
    s3.putSterling();

    cout << "\ns1 * d = ";
    s3 = s1 * d;
    s3.putSterling();

    cout << "\ns1 / s2 = ";
    s3 = s1 / s2;
    s3.putSterling();

    cout << "\ns1 / d = ";
    s3 = s1 / d;
    s3.putSterling();

    return 0;
}