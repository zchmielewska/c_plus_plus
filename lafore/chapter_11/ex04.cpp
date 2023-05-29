#include <iostream>
#include <string>

using namespace std;

class Publication {
    protected:
        string title;
        float price;
    public:
        virtual void getdata() {
            cout << "\nEnter title: "; cin >> title;
            cout << "Enter price: "; cin >> price;
        }

        virtual void putdata() {
            cout << "\nTitle: " << title << endl << "Price: " << price << endl;
            if (isOversize()) {
                cout << "Oversize" << endl;
            }
        }

        virtual bool isOversize() = 0;
};

class Book : public Publication {
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

        bool isOversize() {
            return page_count > 800;
        }
};

class Tape : public Publication {
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

        bool isOversize() {
            return play_time > 90;
        }
};

int main() {
    Publication* pubPtr[100];

    int n = 0;
    char choice;

    do {
        cout << "Enter book or tape (b/t): "; cin >> choice;

        if (choice == 'b') {
            pubPtr[n] = new Book;
        } else {
            pubPtr[n] = new Tape;
        }

        pubPtr[n++]->getdata();
        cout << "Enter another (y/n)? "; cin >> choice;
    } while (choice == 'y');

    for (int j=0; j<n; j++) {
        pubPtr[j]->putdata();
    }
}