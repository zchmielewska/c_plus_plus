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