/*Create a class called ship that incorporates a ship’s number and location. Use the
approach of Exercise 8 to number each ship object as it is created. Use two variables of
the angle class from Exercise 7 to represent the ship’s latitude and longitude. A member
function of the ship class should get a position from the user and store it in the object;
another should report the serial number and position. Write a main() program that creates
three ships, asks the user to input the position of each, and then displays each ship’s
number and position.*/

#include <iostream>

using namespace std;

class angle {
    private:
        int degrees;
        float minutes;
        char direction;
    public:
        angle() : degrees(0), minutes(0.0), direction('N') { }

        void set_data() {
            int deg; 
            float min; 
            char dir;

            cout << "Enter degrees: "; cin >> deg;
            cout << "Enter minutes: "; cin >> min;
            cout << "Enter direction: "; cin >> dir;

            degrees = deg;
            minutes = min;
            direction = dir;
        }

        void display() {
            cout << degrees << "\xF8" << minutes << "'" << direction;
        }
};


class ship {
    private:
        static int count;
        int number;
        angle location;
    public:
        ship() {
            count++;
            number = count;
        }

        void set_location() {
            location.set_data();
        }

        void display() {
            cout << "Ship #" << number << " location: ";
            location.display();
            cout << endl;
        }
};

int ship::count = 0;

int main() {
    ship s1, s2, s3;
    
    s1.set_location();
    s2.set_location();
    s3.set_location();
    s1.display();
    s2.display();
    s3.display();

    return 0;
}