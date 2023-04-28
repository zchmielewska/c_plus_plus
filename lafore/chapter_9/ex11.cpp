/*Various situations require that pairs of numbers be treated as a unit. For example, each
screen coordinate has an x (horizontal) component and a y (vertical) component. Represent
such a pair of numbers as a structure called pair that comprises two int member variables.
Now, assume you want to be able to store pair variables on a stack. That is, you want to
be able to place a pair (which contains two integers) onto a stack using a single call to a
push() function with a structure of type pair as an argument, and retrieve a pair using a
single call to a pop() function, which will return a structure of type pair. Start with the
Stack2 class in the STAKEN program in this chapter, and from it derive a new class called
pairStack. This new class need contain only two members: the overloaded push()
and pop() functions. The pairStack::push() function will need to make two calls to
Stack2::push() to store the two integers in its pair, and the pairStack::pop() function
will need to make two calls to Stack2::pop() (although not necessarily in the same order).*/

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
