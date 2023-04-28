/*Start with the publication, book, and tape classes of Exercise 1. Add a base class sales
that holds an array of three floats so that it can record the dollar sales of a particular
publication for the last three months. Include a getdata() function to get three sales
amounts from the user, and a putdata() function to display the sales figures. Alter the
book and tape classes so they are derived from both publication and sales. An object
of class book or tape should input and output sales data along with its other data. Write
a main() function to create a book object and a tape object and exercise their input/output
capabilities.*/

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

class Sales {
    protected:
        float sales[3];
    public:
        void getdata() {
            for (int i=0; i<3; i++) {
                cout << "Enter sales for month " << i+1 << ": "; cin >> sales[i];
            }
        }

        void putdata() {
            for (int i=0; i<3; i++) {
                cout << "Sales for month: " << i+1 << ": " << sales[i] << endl; 
            }
        }
};

class Book : private Publication, private Sales {
    private:
        int page_count;
    public:
        void getdata() {
            Publication::getdata();
            Sales::getdata();
            cout << "Enter page count: "; cin >> page_count;
        }

        void putdata() {
            Publication::putdata();
            Sales::putdata();
            cout << "Page count: " << page_count << endl;
        }
};

class Tape : private Publication, private Sales {
    private:
        float play_time;
    public:
        void getdata() {
            Publication::getdata();
            Sales::getdata();
            cout << "Enter play time: "; cin >> play_time;
        }
        
        void putdata() {
            Publication::putdata();
            Sales::putdata();
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