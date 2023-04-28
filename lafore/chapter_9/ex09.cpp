/*Start with the publication, book, and tape classes of Exercise 1. Suppose you want to
add the date of publication for both books and tapes. From the publication class, derive
a new class called publication2 that includes this member data. Then change book and
tape so they are derived from publication2 instead of publication. Make all the
necessary changes in member functions so the user can input and output dates along with
the other data. For the dates, you can use the date class from Exercise 5 in Chapter 6,
which stores a date as three ints, for month, day, and year.*/


#include <iostream>
#include <string>

using namespace std;

class date {
    private:
        int month;
        int day;
        int year;
    public:
        void getdate() {
            char dummy;
            cout << "Enter a date in format mm/dd/yyyy: ";
            cin >> month >> dummy >> day >> dummy >> year;
        }
        void showdate() {
            cout << month << "/" << day << "/" << year;
        }
};

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

class Publication2 : public Publication {
    protected:
        date publication_date;
    public:
        void getdata() {
            Publication::getdata();
            publication_date.getdate();
        }

        void putdata() {
            Publication::putdata();
            cout << "Publication date: "; publication_date.showdate(); cout << endl;
        }
};

class Book : private Publication2 {
    private:
        int page_count;
    public:
        void getdata() {
            Publication2::getdata();
            cout << "Enter page count: "; cin >> page_count;
        }

        void putdata() {
            Publication2::putdata();
            cout << "Page count: " << page_count << endl;
        }
};

class Tape : private Publication2 {
    private:
        float play_time;
    public:
        void getdata() {
            Publication2::getdata();
            cout << "Enter play time: "; cin >> play_time;
        }
        
        void putdata() {
            Publication2::putdata();
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