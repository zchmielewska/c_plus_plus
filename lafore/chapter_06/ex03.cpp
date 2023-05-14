// ex: page 260, sol: page 931
#include <iostream>
using namespace std;

class time {
    private:
        int h;
        int m;
        int s;
    public:
        time() : h(0), m(0), s(0) {}

        time(int h, int m, int s) : h(h), m(m), s(s) {}

        void display() const {
            cout << h << ":" << m << ":" << s;
        }

        void add(time other) {
            s += other.s;
            if (s >= 60) {
                m += 1;
                s -= 60;
            }

            m += other.m;
            if (m >= 60) {
                h += 1;
                m -= 60;
            }

            h += other.h;
        }
};

int main() {
    time t1(11, 25, 30), t2(5, 13, 41), t3;

    t3.add(t1);
    t3.add(t2);

    t3.display();

    return 0;
}