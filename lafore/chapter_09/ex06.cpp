#include <iostream>
#include <process.h>

using namespace std;

const int LIMIT = 100;

class safearay {
    protected: 
        int arr[LIMIT];
    public:
        int& operator [] (int n) {
            if (n<0 || n>=LIMIT) {
                cout << "Index out of bounds"; exit(1);
            }
            return arr[n];
        }
};

class safehilo : public safearay {
    private:
        int lower_bound;
        int upper_bound;
    public:
        void get_bounds() {
            cout << "Enter lower bound: "; cin >> lower_bound;
            cout << "Enter upper bound: "; cin >> upper_bound;
        }

        int& operator [] (int n) {
            if (n<lower_bound || n>=upper_bound) {
                cout << "Index out of bounds"; exit(1);
            }
            return arr[n-lower_bound];
        }
};

int main() {
    safehilo s;
    int j;
    s.get_bounds();
    s[10] = 123;
    cout << "10th element is " << s[10] << endl;
    return 0;
}