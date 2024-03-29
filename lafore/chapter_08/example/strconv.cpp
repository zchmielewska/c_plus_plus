#include <iostream>
#include <string.h>

using namespace std;

class String {
    private:
        enum { SZ = 80 };
        char str[SZ];
    public:
        String() {
            str[0] = '\0';
        }

        String(char s[]) {
            strcpy(str, s);
        }

        void display() const {
            cout << str;
        }

        operator char*() {
            return str;
        }
};

int main() {
    String s1;
    char xstr[] = "Joyeux Noel!";
    s1 = xstr;
    s1.display();

    String s2 = (char *)"Bonne Annee!";
    cout << static_cast<char*>(s2);

    return 0;
}