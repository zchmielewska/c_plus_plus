#include <iostream>
using namespace std;
const int LEN = 80;

class student {
    private:
        char school[LEN];
        char degree[LEN];
    public:
        void getedu() {
            cout << "Enter name of school: "; cin >> school;
            cout << "Enter degree earned (Bachelors, Master, PhD): "; cin >> degree;
        }
        void putedu() const {
            cout << "\nSchool or university: " << school;
            cout << "\nHighest degree earned: " << degree;
        }
};

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
            cout << "\nName: " << name;
            cout << "\nNumber: " << number;
        }
};

class manager : private employee, private student {
    private:
        char title[LEN]; // "vice-president" etc.
        double dues;     // golf club dues
    public:
        void getdata() {
            employee::getdata();
            cout << "Enter title: "; cin >> title;
            cout << "Enter golf club dues: "; cin >> dues;
            student::getedu();
        }
        void putdata() const {
            employee::putdata();
            cout << "\nTitle: " << title;
            cout << "\nGolf club dues: " << dues;
            student::putedu();
        }
};

class scientist : private employee, private student {
    private:
        int pubs;  // number of publications
    public:
        void getdata() {
            employee::getdata();
            cout << "Enter number of publications: "; cin >> pubs;
            student::getedu();
        }
        void putdata() const {
            employee::putdata();
            cout << "\nNumber of publications: " << pubs;
            student::putedu();
        }
};

class laborer : public employee {};

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