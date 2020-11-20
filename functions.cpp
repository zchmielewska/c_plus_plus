#include <iostream>
#include <vector>

void show_grid(std::vector<char> grid) {
    std::cout << " _____ _____ _____ \n"
              << "|  " << grid[0] << "  |  " << grid[1] << "  |  " << grid[2] << "  |\n"
              << "|_____|_____|_____|\n"
              << "|  " << grid[3] << "  |  " << grid[4] << "  |  " << grid[5] << "  |\n"
              << "|_____|_____|_____|\n"
              << "|  " << grid[6] << "  |  " << grid[7] << "  |  " << grid[8] << "  |\n"
              << "|_____|_____|_____|\n"
              << "\n\n";
} 

int get_move(std::vector<int> choices1, std::vector<int> choices2) {
    int move;

    std::cin >> move;

    //check if move has been already taken
    for(int i = 0; i < choices1.size(); i++) {
        if(move == choices1[i]) {
            std::cout << "This move has already been made. Please choose another number.\n";
            move = get_move(choices1, choices2);
        }
    }

    for(int i = 0; i < choices2.size(); i++) {
        if(move == choices2[i]) {
            std::cout << "This move has already been made. Please choose another number.\n";
            move = get_move(choices1, choices2);
        }
    }

    return move;
}