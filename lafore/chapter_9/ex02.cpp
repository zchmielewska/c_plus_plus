/*Recall the STRCONV example from Chapter 8. The String class in this example has a
flaw: It does not protect itself if its objects are initialized to have too many characters.
(The SZ constant has the value 80.) For example, the definition
String s = “This string will surely exceed the width of the “
“screen, which is what the SZ constant represents.”;
will cause the str array in s to overflow, with unpredictable consequences, such as
crashing the system.
With String as a base class, derive a class Pstring (for “protected string”) that prevents
buffer overflow when too long a string constant is used in a definition. A new constructor
in the derived class should copy only SZ–1 characters into str if the string constant is
longer, but copy the entire constant if it’s shorter. Write a main() program to test different
lengths of strings.*/

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
