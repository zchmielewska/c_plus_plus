#include <iostream>
#include <cstring>

using namespace std;

int strcmp(char* s1, char* s2) {
    while (true) {
        if ((*s1 == '\0') && (*s2 == '\0')) {
            return 0;
        } else if (*s1 < *s2 || *s1 == '\0') {
            return -1;
        } else if (*s1 > *s2 || *s2 == '\0') {
            return 1;
        } 

        s1++; s2++;
    }
}

int main() {
    char* str1 = "abcd";
    char* str2 = "abcda";

    cout << strcmp(str1, str2);
}