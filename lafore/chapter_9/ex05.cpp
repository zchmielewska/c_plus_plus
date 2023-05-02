#include <iostream>
using namespace std;
const int LEN = 80;

enum period {HOURLY, WEEKLY, MONTHLY};

class employee {
    private:
        char name[LEN];
        unsigned long number;
    public:
        void getdata() {
            cout << "\nEnter last name: "; cin >> name;
            cout << "Enter number: "; cin >> number;
        }
        void putdata() const {
            cout << "\n\nName: " << name;
            cout << "\nNumber: " << number;
        }
};

class employee2 : public employee {
    private:
        double compensation;
        period period;
    public:
        void getdata() {
            char ch;
            employee::getdata();
            cout << "Enter compensation: "; cin >> compensation;
            cout << "Enter period (h/w/m): "; cin >> ch;
            if (ch == 'h') {
                period = HOURLY;
            } else if (ch == 'w') {
                period = WEEKLY;
            } else {
                period = MONTHLY;
            }
        }

        void putdata() const {
            string period_str;
            employee::putdata();
            if (period == HOURLY) {
                period_str = "hourly";
            } else if (period == WEEKLY) {
                period_str = "weekly";
            } else {
                period_str = "monthly";
            }

            cout << "\nCompensation: " << compensation;
            cout << "\nPeriod: " << period_str;
        }
};

class manager : public employee2 {
    private:
        char title[LEN]; // "vice-president" etc.
        double dues;     // golf club dues
    public:
        void getdata() {
            employee2::getdata();
            cout << "Enter title: "; cin >> title;
            cout << "Enter golf club dues: "; cin >> dues;
        }
        void putdata() const {
            employee2::putdata();
            cout << "\nTitle: " << title;
            cout << "\nGolf club dues: " << dues;
        }
};

class scientist : public employee2 {
    private:
        int pubs;  // number of publications
    public:
        void getdata() {
            employee2::getdata();
            cout << "Enter number of publications: "; cin >> pubs;
        }
        void putdata() const {
            employee2::putdata();
            cout << "\nNumber of publications: " << pubs;
        }
};

class laborer : public employee2 {};

int main() {
    manager m1;
    scientist s1;
    laborer l1;

    m1.getdata();
    s1.getdata();
    l1.getdata();

    m1.putdata();
    s1.putdata();
    l1.putdata();
}