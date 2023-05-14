/*In the game of contract bridge, each of four players is dealt 13 cards, thus exhausting the
entire deck. Modify the CARDARAY program in this chapter so that, after shuffling the
deck, it deals four hands of 13 cards each. Each of the four players’ hands should then be
displayed.*/

#include <iostream>
#include <cstdlib>  // for srand(), rand()
#include <ctime>    // for time for srand()

using namespace std;

const int DECK_SIZE=52;
const int NUM_PLAYERS=4;

enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card {
    private:
        int number;
        Suit suit;
    public:
        card() {}
        void set(int n, Suit s) {
            suit = s;
            number = n;
        }
        void display();
};

void card::display() {
    if (number >= 2 && number <= 10) {
        cout << number;
    } else {
        switch(number) {
            case jack:  cout << "J"; break;
            case queen: cout << "Q"; break;
            case king:  cout << "K"; break;
            case ace:   cout << "A"; break;
        }
    }

    switch(suit) {
        case clubs:    cout << static_cast<char>(5); break;
        case diamonds: cout << static_cast<char>(4); break;
        case hearts:   cout << static_cast<char>(3); break;
        case spades:   cout << static_cast<char>(6); break;
    }
}

int main() {
    card deck[DECK_SIZE];
    card hands[NUM_PLAYERS][DECK_SIZE/NUM_PLAYERS];
    int j, k;

    for (j=0; j<52; j++) {
        int num = (j % 13) + 2;
        Suit su = Suit(j / 13);
        deck[j].set(num, su);
    }

    // Shuffle cards
    srand(time(NULL));  // random seed
    for (j=0; j<52; j++) {
        int k = rand() % 52;
        card temp = deck[j];
        deck[j] = deck[k];
        deck[k] = temp;
    }

    // Split into hands
    for (j=0; j<NUM_PLAYERS; j++) {
        for (k=0; k<DECK_SIZE/NUM_PLAYERS; k++) {
            hands[j][k] = deck[j*DECK_SIZE/NUM_PLAYERS+k];
        }
    }

    for (j=0; j<NUM_PLAYERS; j++) {
        cout << "Hand of player #" << j+1 << endl;
        for (k=0; k<DECK_SIZE/NUM_PLAYERS; k++) {
            hands[j][k].display();
            if (k != DECK_SIZE/NUM_PLAYERS-1) {
                cout << ", ";
            }
        }
        cout << endl;
    }   

    return 0;
}