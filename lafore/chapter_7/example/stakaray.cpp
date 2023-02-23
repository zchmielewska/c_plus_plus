#include <iostream>
using namespace std;

class Stack {
    private:
        static const int MAX = 10;
        int st[MAX];
        int top;
    public:
        Stack() {
            top = 0;
        }

        void push(int var) {
            st[++top] = var;
        }

        int pop() {
            return st[top--];
        }
};

int main() {
    Stack s1;

    s1.push(11);
    s1.push(22);
    cout << "1: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
}