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

        time operator + (time other) const {
            int hours, minutes, seconds;
            seconds = s + other.s;
            minutes = m + other.m;
            hours = h + other.h;

            if (seconds >= 60) {
                minutes += 1;
                seconds -= 60;
            }

            if (minutes >= 60) {
                hours += 1;
                minutes -= 60;
            }

            return time(hours, minutes, seconds);
        }
};

int main() {
    time t1(11, 25, 30), t2(5, 13, 41), t3;

    t3 = t1 + t2;
    t3.display();

    return 0;
}