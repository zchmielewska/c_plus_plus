#include <iostream>
#include <cstring>

using namespace std;

const int DAYS = 7;

void bsort(char** ptr, int n) {
    void order(char**, char**);
    int j, k;

    for (j=0; j<n-1; j++) {
        for(k=j+1; k<n; k++) {
            order(ptr+j, ptr+k);
        }
    }
}

void order (char** str1, char** str2) {
    if (strcmp(*str1, *str2) > 0) {
        char* tempptr = *str1;
        *str1 = *str2;
        *str2 = tempptr;
    }
}

int main() {
    char* arrptrs[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    bsort(arrptrs, DAYS);

    for (int j=0; j<DAYS; j++) {
        cout << arrptrs[j] << endl;
    }

    return 0;
}