#include <iostream>
#include <vector>
#include <algorithm>
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

    // if even then get move from player1 else player 2
    while ((choices1.size() + choices2.size()) < 9) {
        if((choices1.size() + choices2.size()) % 2 == 0) {
            std::cout << "Player 1: ";
            move = get_move(choices1, choices2);
            std::cout << "\n";
            choices1.push_back(move);    
            grid[move - 1] = 'X';
        } else {
            std::cout << "Player 2: ";
            move = get_move(choices1, choices2);
            std::cout << "\n";
            choices2.push_back(move);
            grid[move - 1] = 'O';
        }        

        //show grid after making a move
        show_grid(grid);

        //check if it's winning combination
        if(is_winning(choices1) || is_winning(choices2)) {    
            std::cout << "You are a WINNER!!! Congratulations!!!\n";
            return 0;
        }
    }
    
    std::cout << "It's a draw! Congratulations to both players!";

    return 0;
}