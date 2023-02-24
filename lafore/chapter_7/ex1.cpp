// ex: page 313, sol: page 9
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void reverseit(char[]);
const int MAX = 100;

int main() {
    char str[MAX];
    cout << "Enter a string that will be reversed: ";
    cin.get(str, MAX);
    reverseit(str);
    cout << "Your reversed phrase is: " << str;
    return 0;
}

void reverseit(char str[]) {
    int nchar = strlen(str);
    char reversed[nchar];

    for (int j=0; j<nchar; j++) {
        reversed[nchar-(j+1)] = str[j];
    }
    
    strcpy(str, reversed);
}