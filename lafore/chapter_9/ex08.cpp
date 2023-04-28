/*Operators in some computer languages, such as Visual Basic, allow you to select parts of
an existing string and assign them to other strings. (The Standard C++ string class
offers a different approach.) Using inheritance, add this capability to the Pstring class of
Exercise 2. In the derived class, Pstring2, incorporate three new functions: left(),
mid(), and right().
s2.left(s1, n) // s2 is assigned the leftmost n characters
// from s1
s2.mid(s1, s, n) // s2 is assigned the middle n characters
// from s1, starting at character number s
// (leftmost character is 0)
s2.right(s1, n) // s2 is assigned the rightmost n characters
// from s1
You can use for loops to copy the appropriate parts of s1, character by character, to a
temporary Pstring2 object, which is then returned. For extra credit, have these functions
return by reference, so they can be used on the left side of the equal sign to change parts
of an existing string.
*/


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