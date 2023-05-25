#include <iostream>
using namespace std;

class person {
    protected:
        char name[40];
    public:
        void getName() {
            cout << "Enter name: "; cin >> name;
        }
        void putName() {
            cout << "\nName is: " << name << endl;
        }

        virtual void getData() = 0;
        virtual bool isOutstanding() = 0;
};

class student : public person {
    private: 
        float gpa;
    public:
        void getData() {
            person::getName();
            cout << "Enter student's GPA: "; cin >> gpa;
        }

        bool isOutstanding() {
            return (gpa > 3.5) ? true : false;
        }
};

class professor : public person {
    private:
        int numPubs;
    public:
        void getData() {
            person::getName();
            cout << "Enter number of professor's publications: ";
            cin >> numPubs;
        }

        
        bool isOutstanding() {
            return (numPubs > 3.5) ? true : false;
        }
};

int main() {
    person* persPtr[100];
    int n = 0;
    char choice;

    do {
        cout << "Enter student or professor (s/p): ";
        cin >> choice;

        if (choice == 's') {
            persPtr[n] = new student;
        } else {
            persPtr[n] = new professor;
        }

        persPtr[n++]->getData();
        cout << "Enter another (y/n)? "; cin >> choice;
    } while (choice == 'y');

    for (int j=0; j<n; j++) {
        persPtr[j]->putName();
        if (persPtr[j]->isOutstanding()) {
            cout << "This person is outstranding.";
        }
    }

    return 0;
}