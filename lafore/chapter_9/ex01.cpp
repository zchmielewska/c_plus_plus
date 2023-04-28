/*Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float)
of a publication. From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float). Each of these three
classes should have a getdata() function to get its data from the user at the keyboard,
and a putdata() function to display its data.
Write a main() program to test the book and tape classes by creating instances of them,
asking the user to fill in data with getdata(), and then displaying the data with putdata().*/

#include <iostream>
#include <string>

using namespace std;

class Publication {
    protected:
        string title;
        float price;
    public:
        void getdata() {
            cout << "\nEnter title: "; cin >> title;
            cout << "Enter price: "; cin >> price;
        }

        void putdata() {
            cout << "\nTitle: " << title << endl << "Price: " << price << endl;
        }
};

class Book : private Publication {
    private:
        int page_count;
    public:
        void getdata() {
            Publication::getdata();
            cout << "Enter page count: "; cin >> page_count;
        }

        void putdata() {
            Publication::putdata();
            cout << "Page count: " << page_count << endl;
        }
};

class Tape : private Publication {
    private:
        float play_time;
    public:
        void getdata() {
            Publication::getdata();
            cout << "Enter play time: "; cin >> play_time;
        }
        
        void putdata() {
            Publication::putdata();
            cout << "Play time: " << play_time << endl;
        }
};

int main() {
    Book b;
    Tape t;

    b.getdata();
    t.getdata();

    b.putdata();
    t.putdata();
}