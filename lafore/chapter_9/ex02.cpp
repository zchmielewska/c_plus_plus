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
        Pstring (char s[]);
};


Pstring::Pstring(char s[])  {
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

int main() {
    Pstring s1 = (char *)"A very long message with a lot of text and a lot of words and a lot of sentences that are all very very important.";
    s1.display(); 

    Pstring s2 = (char *)"A short message.";
    s2.display(); 

    

    return 0;
}
