#include <iostream>
#include <process.h>

using namespace std;

struct Pair {
    int x;
    int y;
};

class Stack {
    protected:
        enum { MAX = 3 };
        int st[MAX];
        int top;
    public:
        Stack() {
            top = -1;
        }

        void push(int var) {
            st[++top] = var;
        }

        int pop() {
            return st[top--];
        }
};

class Stack2 : public Stack {
    public:
        void push (int var) {
            if (top >= MAX-1) {
                cout << "\nError: stack is full"; exit(1);
            }
            Stack::push(var);
        }

        int pop() {
            if (top < 0) {
                cout << "\nError: stack is empty"; exit(1);
            }
            return Stack::pop();
        }
};

class pairStack : public Stack2 {
    public:
        void push(Pair p) {
            Stack2::push(p.x);
            Stack2::push(p.y);
        }

        Pair pop() {
            Pair p;
            p.y = Stack2::pop();
            p.x = Stack2::pop();
            return p;
        }
};

int main() {
    Pair p;
    pairStack s;

    p.x = 11;
    p.y = 22;

    s.push(p);
    p = s.pop();

    cout << "x =" << p.x << "; y =" << p.y;

    return 0;
}
