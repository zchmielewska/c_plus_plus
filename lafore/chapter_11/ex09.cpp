#include <iostream>
using namespace std;

struct link {
    int data;
    link* next;
};

class linklist {
    private:
        link* first;
    public:
        linklist() {
            first = NULL;
        }

        ~linklist() {
            link* current = first;
            link* prev; 

            while (current != NULL) {
                prev = current;
                current = current->next;
                cout << "Deleting " << prev << endl;;
                delete prev;
            }
        }

        void additem(int d) {
            link* newlink = new link;
            newlink->data = d;
            newlink->next = first;
            first = newlink;
        }

        void display() {
            link* current = first;
            while (current != NULL) {
                cout << current->data << endl;
                current = current->next;
            }
        }
};

//TODO
//TODO
//TODO
//TODO
//TODO

int main() {
    linklist* ptr_li1, ptr_li2;

    ptr_li1 = new linklist;

    ptr_li1->additem(25);
    ptr_li1->additem(36);
    ptr_li1->additem(49);
    ptr_li1->additem(64);

    ptr_li2 = ptr_li1;

    ptr_li2->display();

    delete ptr_li1;

    return 0;
}