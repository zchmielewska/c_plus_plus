#include <iostream>
#include <cstring>

using namespace std;

class String {
    protected:
        enum { SZ = 80 };
        char str[SZ];  // holds a C-string
    public:
        String() {
            str[0] = '\0';
        }

        String (char s[]) { // convert C-string to String; strcpy(destination, source)
            strcpy(str, s); 
        }

        void display() const {
            cout << str << endl;
        }

        operator char*() { // convert String to C-string
            return str;
        }
};

class Pstring : public String {
    public:
        Pstring (char s[]) {
            if (strlen(s) > SZ-1) {
                int j;
                for(j=0; j<SZ; j++) {
                    str[j] = s[j];
                }
                str[j] = '\0';
            } else {
                strcpy(str, s); 
            }
        }

        void left(String s, int n) {
            int j;
            for(j=0; j<n; j++) {
                str[j] = s[j];
            }
            str[j] = '\0'; 
        }

        void mid(String s, int m, int n) {
            int j;
            for(j=0; j<n-m; j++) {
                str[j] = s[m+j];
            }
            str[j] = '\0'; 
        }

        void right(String s, int n) {
            int j;
            for(j=0; j<n; j++) {
                str[j] = s[strlen(s)-n+j];
            }
            str[j] = '\0'; 
        }
};

int main() {
    String s = (char *)"abcdef";
    Pstring ps = (char *)"";

    ps.left(s, 4);
    ps.display();
    
    ps.mid(s, 1, 4);
    ps.display();

    ps.right(s, 3);
    ps.display();
    
    return 0;
}