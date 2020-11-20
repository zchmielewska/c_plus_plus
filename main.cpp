#include <iostream>
#include <vector>
#include "functions.hpp"

int main() {

    std::vector<int> choices1;
    std::vector<int> choices2;
    std::vector<char> grid;
    int move;
    bool end = false;

    //populate grid
    grid.push_back('1');
    grid.push_back('2');
    grid.push_back('3');
    grid.push_back('4');
    grid.push_back('5');
    grid.push_back('6');
    grid.push_back('7');
    grid.push_back('8');
    grid.push_back('9');

    //welcome player
    std::cout << "\nTIC-TAC-TOE game\n";
    show_grid(grid);

    // if even then get move from player1
    // if odd  then get move from player2
    while (end == false && (choices1.size() + choices2.size() < 9)) {

        if((choices1.size() + choices2.size()) % 2 == 0) {
            std::cout << "Player 1: ";
            move = get_move(choices1, choices2);
            std::cout << "\n";
            std::cout << "Move is: " << move << "\n\n";
            choices1.push_back(move);    
            grid[move - 1] = 'x';
        } else {
            std::cout << "Player 2: ";
            move = get_move(choices1, choices2);
            std::cout << "\n";
            std::cout << "Move is: " << move << "\n\n";
            choices2.push_back(move);
            grid[move - 1] = 'o';
        }

        std::cout << "Choices 1:\n";
        std::cout << "Choices size:\n";
        std::cout << choices1.size() << "\n\n";
        std::cout << "Choices values:\n";
        for(int i = 0; i < choices1.size(); i++) {
            std::cout << choices1[i] << "\n";
        }
        std::cout << "\n";

        std::cout << "Choices 2:\n";
        std::cout << "Choices size:\n";
        std::cout << choices2.size() << "\n\n";
        for(int i = 0; i < choices2.size(); i++) {
            std::cout << choices2[i] << "\n";
        }
        std::cout << "\n";

        std::cout << "\n";

        //check if winning combination 

        show_grid(grid);
    }
    

   
    //check if set of moves is a win
    // 1, 2, 3
    // 4, 5, 6
    // 7, 8, 9
    // 1, 4, 7
    // 2, 5, 8
    // 3, 6, 9
    // 1, 5, 9
    // 3, 5, 7

    // if not show grid
    // if yes end game

    return 0;
}