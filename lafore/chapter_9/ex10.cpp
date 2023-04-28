/*There is only one kind of manager in the EMPMULT program in this chapter. Any serious
company has executives as well as managers. From the manager class derive a class
called executive. (We’ll assume an executive is a high-end kind of manager.) The additional
data in the executive class will be the size of the employee’s yearly bonus and the
number of shares of company stock held in his or her stock-option plan. Add the appropriate
member functions so these data items can be input and displayed along with the other
manager data.*/

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

class executive : private manager {
    private:
        int bonus;
        double shares;
    public:
        void getdata() {
            manager::getdata();
            cout << "Enter bonus: "; cin >> bonus;
            cout << "Enter shares: "; cin >> shares;
        }
        void putdata() {
            manager::putdata();
            cout << "\nBonus: " << bonus;
            cout << "\nShares: " << shares;
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
    executive e;
    e.getdata();
    e.putdata();
}