#include <iostream>
using namespace std;

struct sterling {
    int pounds;
    int shillings;
    int pence;
};

sterling to_sterling(int pounds, int shillings, int pence) {
    sterling s;
    s.pounds = pounds;
    s.shillings = shillings;
    s.pence = pence;
    return s;
}

sterling add(sterling s1, sterling s2) {
    sterling s3;
    s3.pence = 0;
    s3.shillings = 0;
    s3.pounds = 0;

    s3.pence = s1.pence + s2.pence;
    if (s3.pence >= 12) {
        s3.shillings += 1;
        s3.pence -= 12;
    }

    s3.shillings += s1.shillings + s2.shillings;
    if (s3.shillings >= 20) {
        s3.pounds += 1;
        s3.shillings -= 20;
    }

    s3.pounds += s1.pounds + s2.pounds;
    return s3;
}

void display(sterling s) {
    cout << s.pounds << "." << s.shillings << "." << s.pence;
}

int main() {
    int pounds1, pounds2;
    int shillings1, shillings2;
    int pence1, pence2;
    char dummy;
    sterling s1, s2, s3;

    cout << "Enter 1st money amount in old-style British format: ";
    cin >> pounds1 >> dummy >> shillings1 >> dummy >> pence1;

    cout << "Enter 2nd money amount in old-style British format: ";
    cin >> pounds2 >> dummy >> shillings2 >> dummy >> pence2;

    s1 = to_sterling(pounds1, shillings1, pence1);
    s2 = to_sterling(pounds2, shillings2, pence2);
    s3 = add(s1, s2);

    cout << "The sum is: ";
    display(s3);
    return 0;
}