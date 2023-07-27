#include <array>
#include <functional>
#include <iostream>

using namespace std;


float my_function(int t) {
    return t * 1.23;
}


array<float, 10> apply_function(function<float(int)> func) {
    array<float, 10> f_array;

    for (int i=0; i<10; i++) {
        f_array[i] = func(i);
    }
    
    return f_array;
}


int main() {
    array<float, 10> x;

    x = apply_function(&my_function);
    
    for (int i=0; i<10; i++) {
        cout << x[i] << endl;
    }

    return 0;
}
