/*
When a value is smaller than a field specified with setw(), the unused locations are, by
default, filled in with spaces. The manipulator setfill() takes a single character as an
argument and causes this character to be substituted for spaces in the empty parts of a
field. Rewrite the WIDTH program so that the characters on each line between the location
name and the population number are filled in with periods instead of spaces, as in
Portcity.....2425785
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long pop1=2425784, pop2=47, pop3=9761;

    cout << setfill('.') 
         << setw(8) << "LOCATION" << setw(12) << "POPULATION" << endl
         << setw(8) << "Portcity" << setw(12) << pop1 << endl
         << setw(8) << "Hightown" << setw(12) << pop2 << endl
         << setw(8) << "Lowville" << setw(12) << pop3 << endl;
}