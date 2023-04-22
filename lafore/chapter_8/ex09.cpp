/*Augment the safearay class in the ARROVER3 program in this chapter so that the user
can specify both the upper and lower bound of the array (indexes running from 100 to
200, for example). Have the overloaded subscript operator check the index each time the
array is accessed to ensure that it is not out of bounds. You’ll need to add a twoargument
constructor that specifies the upper and lower bounds. Since we have not yet
learned how to allocate memory dynamically, the member data will still be an array that
starts at 0 and runs up to 99, but perhaps you can map the indexes for the safearay into
different indexes in the real int array. For example, if the client selects a range from 100
to 175, you could map this into the range from arr[0] to arr[75].*/

#include <iostream>
#include <process.h>

using namespace std;

const int LIMIT = 100;

class safearay {
    private:
        int lower_bound;
        int upper_bound;
        int arr[LIMIT];
    public:
        safearay(int lb, int ub) : lower_bound(lb), upper_bound(ub) { };

        int& operator [] (int n) {
            if (n<lower_bound || n>=upper_bound) {
                cout << "Index out of bounds"; exit(1);
            }
            return arr[n-lower_bound];
        }
};

int main() {
    int lb=10, ub=20, j;
    safearay sa1(lb, ub);

    for (j=lb; j<ub; j++) {
        sa1[j] = j*10;
    }

    for (j=lb; j<ub; j++) {
        int temp = sa1[j];
        cout << "Element " << j << " is " << temp << endl;
    }
    return 0;
}