#include <iostream>
#include <string.h> // strcpy(), strcat()
#include <stdlib.h> // exit()

using namespace std;

class String {
    private:
        enum { SZ=80 };
        char str[SZ];
    public:
        String() {
            strcpy(str, "");
        }

        String(char s[]) {
            strcpy(str, s);
        }

        void display() const {
            cout << str;
        }

        String operator + (String ss) const {
            String temp;
            if (strlen(str) + strlen(ss.str)< SZ) {
                strcpy(temp.str, str);
                strcat(temp.str, ss.str);
            } else {
                cout << "\nString overflow"; exit(1);
            }
            return temp;
        }
}
