/*Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
comprise an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it.*/

#include <iostream>

using namespace std;

class employee {
    private:
        int number;
        float compensation;
    public:
        void set_data(int n, float c) {
            number = n;
            compensation = c;
        }

        void display() {
            cout << "Number: " << number << ", compensation: " << compensation << endl;
        }
};

int main() {
    employee e1, e2, e3;
    int n;
    float c;

    cout << "Enter 1st employee number: ";
    cin >> n;
    cout << "Enter 1st employee compoensation: ";
    cin >> c;
    e1.set_data(n, c);

    cout << "Enter 2nd employee number: ";
    cin >> n;
    cout << "Enter 2nd employee compoensation: ";
    cin >> c;
    e2.set_data(n, c);

    cout << "Enter 3rd employee number: ";
    cin >> n;
    cout << "Enter 3rd employee compoensation: ";
    cin >> c;
    e3.set_data(n, c);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}