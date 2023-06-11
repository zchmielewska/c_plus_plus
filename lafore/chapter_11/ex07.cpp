#include <iostream>
#include <cstring>

using namespace std;

const int LEN = 80; // length of expressions
const int MAX = 40; // size of stack

class Token {
    public: 
        virtual float getNumber()=0;  // pure virtual functions
        virtual char getOperator()=0;
};

class Operator : public Token {
    private:
        char oper;  // operators +, -, *, /
    public:
        Operator(char o) {
            oper = o;
        };

        char getOperator() {
            return oper;
        };

        float getNumber() {
            return 0;
        };
};

class Number : public Token {
    private:
        float fnum;
    public: 
        Number(float f) {
            fnum = f;
        };
        float getNumber() {
            return fnum;
        };
        char getOperator() { 
            return '\0';
        };
};

class Stack {
    private:
        Token* atoken[MAX];
        int top;
    public:
        Stack() { 
            top = 0; 
        }

        void push(Token* t) {
            atoken[++top] = t;
        }

        Token* pop() {
            return atoken[top--];
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
        float solve();
};

void express::parse() {
    Operator* oPtr;
    Number* nPtr;
    Token* lastop;
    Token* lastval;
    char ch;
    string sTemp;
    float fTemp;

    for (int j=0; j<len; j++) {
        ch = pStr[j];

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            oPtr = new Operator(ch);
            if (s.gettop() == 1) {
                s.push(oPtr);
            } else {
                lastval = s.pop();
                lastop = s.pop();

                if ((ch == '*' || ch == '/') && (lastop->getOperator() == '+' || lastop->getOperator() == '-')) {
                    s.push(lastop);
                    s.push(lastval);
                } else {
                    switch(lastop->getOperator()) {
                        case '+': 
                            nPtr = new Number(s.pop()->getNumber() + lastval->getNumber());
                            s.push(nPtr); 
                            break;
                        case '-': 
                            nPtr = new Number(s.pop()->getNumber() - lastval->getNumber());
                            s.push(nPtr);
                            break;
                        case '*': 
                            nPtr = new Number(s.pop()->getNumber() * lastval->getNumber());
                            s.push(nPtr);
                            break;
                        case '/': 
                            nPtr = new Number(s.pop()->getNumber() / lastval->getNumber());
                            s.push(nPtr);
                            break;
                        default:
                            cout << "\nUnknown oper"; exit(1);
                    }
                }
                s.push(oPtr);
            }

        } else if ((ch >= '0' && ch <= '9') || ch == '.') {
            sTemp = "";

            while ((ch >= '0' && ch <= '9') || ch == '.') {
                if (ch == '.') {
                    sTemp += ch;
                } else {
                    sTemp += ch;
                }

                j++;
                ch = pStr[j];
            }
            j--;


            fTemp = stof(sTemp);
            nPtr = new Number(fTemp);
            s.push(nPtr);
        } else {
            cout << "\nUnknown input character"; exit(1);
        }
    }
}

float express::solve() {
    Token* lastNumber;
    Token* lastOperator;
    Number* nPtr;

    while (s.gettop() > 1) {
        lastNumber = s.pop();
        lastOperator = s.pop();

        switch (lastOperator->getOperator()) {
            case '+': 
                nPtr = new Number(s.pop()->getNumber() + lastNumber->getNumber());
                s.push(nPtr);
                break;
            case '-': 
                nPtr = new Number(s.pop()->getNumber() - lastNumber->getNumber());
                s.push(nPtr);
                break;
            case '*': 
                nPtr = new Number(s.pop()->getNumber() * lastNumber->getNumber());
                s.push(nPtr);
                break;
            case '/': 
                nPtr = new Number(s.pop()->getNumber() / lastNumber->getNumber());
                s.push(nPtr);
                break;
            default: cout << "\nUnknown oper " << lastOperator->getOperator(); exit(1);
        }
    }

    return s.pop()->getNumber();
}

int main() {
    char ans;
    char string[LEN];

    cout << "\nEnter an arithmetic expession of the form 2.2+3.5*4.1."
         << "\nDon't use any spaces or parentheses." << endl;

    do {
        cout << "\nEnter expression: "; cin >> string;
        express* eptr = new express(string);
        eptr->parse();
        cout << "\nThe numerical value is: " << eptr->solve();
        delete eptr;
        cout << "\nDo another (Enter y or n)? "; cin >> ans;
    } while (ans == 'y');

    return 0;
}