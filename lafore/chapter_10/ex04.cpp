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

int main() {
    linklist li;
    li.additem(25);
    li.additem(36);
    li.additem(49);
    li.additem(64);
    li.display();
    return 0;
}