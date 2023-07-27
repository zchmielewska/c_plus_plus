#include <iostream>
#include <cstring>

using namespace std;

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

        void show_stack() {
            for (int i=0; i<=top; i++) {
                cout << i << ": " << st[i] << endl;
            }
        }
};

int main() {
    Stack s;
    
    s.push('1');
    s.push('a');
    s.push('b');
    s.push('2');
    s.push('x');

    s.show_stack();
}