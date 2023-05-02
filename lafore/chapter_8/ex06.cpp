#include <iostream>
using namespace std;

class time {
    private:
        int h, m, s;
    public:
        time() : h(0), m(0), s(0) {}

        time(int h, int m, int s) : h(h), m(m), s(s) {}

        void display() const {
            cout << h << ":" << m << ":" << s << endl;
        }

        time operator - (time other) {
            int hours, minutes, seconds;
            hours = h - other.h;
            minutes = m - other.m;
            seconds = s - other.s;

            if (seconds < 0) {
                minutes -= 1;
                seconds += 60;
            } 

            if (minutes < 0) {
                hours -= 1;
                minutes += 60;
            }

            return time(hours, minutes, seconds);
        }

        time operator * (float multiplier) {
            float total_seconds_f;
            int total_seconds_i, hours, minutes, seconds;

            total_seconds_f = (3600*h + 60*m + s);
            total_seconds_f *= multiplier;
            total_seconds_i = static_cast<int>(total_seconds_f);

            hours = static_cast<int>(total_seconds_i/3600);
            total_seconds_i -= hours*3600;

            minutes = static_cast<int>(total_seconds_i/60);
            total_seconds_i -= minutes*60;

            seconds = total_seconds_i;
            return time(hours, minutes, seconds);
        }
};

int main() {
    time t1(15, 30, 0), t2(12, 45, 15), t3;

    t3 = t1 - t2;
    t3.display();

    t3 = t3 * 1.75;
    t3.display();

    return 0;
}