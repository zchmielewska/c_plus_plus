// ex: page 314, sol: page 934
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class employee {
    private:
        string name; 
        long employee_number;
    public:
        void getdata() {
            cout << "\nEnter employee's name: ";
            cin >> name;
            cout << "Enter employee's number: ";
            cin >> employee_number;
        }

        void putdata() {
            cout << "Employee: " << name << " (" << employee_number << ")";
        }
};

int main() {
    const int MAX = 100;
    employee employees[MAX];
    int counter = 0;
    char decision;
    
    do {
        employees[counter].getdata();
        counter++;
        cout << "Do you want to add a new employee (y/n)? ";
        decision = getche();
    } while (decision == 'y');

    cout << "\nList of employees: ";
    for (int j=0; j<counter; j++) {
        cout << endl;
        employees[j].putdata();
    }

    return 0;
}
