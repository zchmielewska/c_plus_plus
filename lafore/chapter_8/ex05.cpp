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
            cout << h << ":" << m << ":" << s << endl;
        }

        time operator ++ () {
            ++s;
            return time(h, m, s);
        }

        time operator ++ (int) {
            ++s;
            return time(h, m, s);
        }

        time operator -- () {
            --s;
            return time(h, m, s);
        }

        time operator -- (int) {
            --s;
            return time(h, m, s);
        }
};

int main() {
    time t(15, 30, 0);

    ++t;
    t.display();
    t++;
    t.display();

    --t;
    t.display();
    t--;
    t.display();

    return 0;
}