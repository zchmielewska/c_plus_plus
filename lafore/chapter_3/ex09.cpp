/*
Suppose you give a dinner party for six guests, but your table seats only four. In how
many ways can four of the six guests arrange themselves at the table? Any of the six
guests can sit in the first chair. Any of the remaining five can sit in the second chair. Any
of the remaining four can sit in the third chair, and any of the remaining three can sit in
the fourth chair. (The last two will have to stand.) So the number of possible arrangements
of six guests in four chairs is 6*5*4*3, which is 360. Write a program that calculates
the number of possible arrangements for any number of guests and any number of
chairs. (Assume there will never be fewer guests than chairs.) Don’t let this get too complicated.
A simple for loop should do it.
*/

#include <iostream>

using namespace std;

int main() {
    int chairs, guests, num_arrangements;

    cout << "Enter number of chairs: ";
    cin >> chairs;

    cout << "Enter number of guests: ";
    cin >> guests;

    num_arrangements = 1;
    for (int i=0; i<chairs; i++) {
        num_arrangements *= guests;
        guests -= 1;
    }

    cout << "Number of arrangements amounts to: " << num_arrangements;

    return 0;
}