#include <iostream>
#include <cstring>

using namespace std;

const int LEN = 80; // length of expressions
const int MAX = 40; // size of stack

class Stack {
    private:
        char st[MAX];
        int top;
    public:
        Stack() { 
            top = 0; 
        }

        void push(char var) {
            st[++top] = var;
        }

        char pop() {
            return st[top--];
        }

        int gettop() {
            return top;
        }
};

class express {
    private: 
        Stack s;
        char* pStr;
        int len;
    public:
        express (char* ptr) {
            pStr = ptr;
            len = strlen(pStr);
        }

        void parse();
        int solve();
};

void express::parse() {
    char ch;
    char lastval;
    char lastop;

    for (int j=0; j<len; j++) {
        ch = pStr[j];

        if (ch >= '0' && ch <= '9') {
            s.push(ch-'0');
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            if (s.gettop() == 1) {
                s.push(ch);
            } else {
                lastval = s.pop();
                lastop = s.pop();

                if ((ch == '*' || ch == '/') && (lastop == '+' || lastop == '-')) {
                    s.push(lastop);
                    s.push(lastval);
                } else {
                    switch(lastop) {
                        case '+': s.push(s.pop() + lastval); break;
                        case '-': s.push(s.pop() - lastval); break;
                        case '*': s.push(s.pop() * lastval); break;
                        case '/': s.push(s.pop() / lastval); break;
                        default: cout << "\nUnknown oper"; exit(1);
                    }
                }
                s.push(ch);
            }
        } else {
            cout << "\nUnknown input character"; exit(1);
        }
    }
}

int express::solve() {
    char lastval;

    while (s.gettop() > 1) {
        lastval = s.pop();

        switch (s.pop()) {
            case '+': s.push(s.pop() + lastval); break;
            case '-': s.push(s.pop() - lastval); break;
            case '*': s.push(s.pop() * lastval); break;
            case '/': s.push(s.pop() / lastval); break;
            default: cout << "\nUnknown oper"; exit(1);
        }
    }

    return int(s.pop());
}

int main() {
    char ans;
    char string[LEN];

    cout << "\nEnter an arithmetic expession of the form 2+3*4/3-2." << endl
         << "\nNo number may have more than one digit. " << endl 
         << "\nDon't use any spaces or parentheses.";

    do {
        cout << "\nEnter expression: "; cin >> string;
        express* eptr = new express(string);
        eptr->parse();
        cout << "\nThe numerical value is: " << eptr->solve();
        delete eptr;
        cout << "\nDo another (Enter y or n)?"; cin >> ans;
    } while (ans == 'y');

    return 0;
}