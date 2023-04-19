#include <iostream>
#include <string.h> // strcpy(), strcat()
#include <stdlib.h> // exit()

using namespace std;

class String {
    private:
        enum { MAX_SIZE=80 };
        char str[MAX_SIZE];
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

        String operator + (String s2) const {
            String temp;
            if (strlen(str) + strlen(s2.str) < MAX_SIZE) {
                strcpy(temp.str, str);
                strcat(temp.str, s2.str);
            } else {
                cout << "\nString overflow"; exit(1);
            }
            return temp;
        }

        String operator += (String s2) {
            String temp;
            if (strlen(str) + strlen(s2.str) < MAX_SIZE) {
                strcat(str, s2.str);
                strcpy(temp.str, str);
            } else {
                cout << "\nString overflow"; exit(1);
            }
            return temp;
        }
};

int main() {
    String s1, s2, s3;

    s1 = (char *)"aaa";
    s2 = (char *)"bbb";

    s3 = s1 += s2;
    s3.display();

    return 0;
}