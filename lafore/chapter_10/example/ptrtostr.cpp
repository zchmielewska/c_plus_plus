#include <iostream>
using namespace std;
const int DAYS = 7;

int main() {
    char* arrptrs[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for (int j=0; j<DAYS; j++) {
        cout << arrptrs[j] << endl;
    }

    return 0;
}