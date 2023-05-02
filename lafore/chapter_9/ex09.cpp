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