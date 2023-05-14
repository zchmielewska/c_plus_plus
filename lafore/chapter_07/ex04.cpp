/*Start with a program that allows the user to input a number of integers, and then stores
them in an int array. Write a function called maxint() that goes through the array,
element by element, looking for the largest one. The function should take as arguments
the address of the array and the number of elements in it, and return the index number of
the largest element. The program should call this function and then display the largest
element and its index number. (See the SALES program in this chapter.)
*/

#include <iostream>
using namespace std;

const int SIZE = 3;

int maxint(int numbers[SIZE]) {
    int max_value = numbers[0];
    int max_index = 0;
    int i;

    for (i=1; i<SIZE; i++) {
        if (numbers[i] > max_value) {
            max_value = numbers[i];
            max_index = i;
        }
    }

    return max_index;
};

int main() {    
    int numbers[SIZE];
    int max_index;

    cout << "Enter " << SIZE << " numbers:" << endl;
    for (int i=0; i<SIZE; i++) {
        cin >> numbers[i];
    }

    max_index = maxint(numbers);
    cout << "The greatest element:" << endl
        << "index: " << max_index << endl
        << "value: " << numbers[max_index];

    return 0;
}
