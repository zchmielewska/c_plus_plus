#include <iostream>
#include <vector>
#include <algorithm>

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

    if(move < 1 || move > 9) {
        std::cout << "Please choose a number between 1 and 9.\n";
        move = get_move(choices1, choices2);
    }

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

bool has_combination(std::vector<int> choices, int num1, int num2, int num3) {
    bool result;
    
    result = std::count(choices.begin(), choices.end(), num1) && 
             std::count(choices.begin(), choices.end(), num2) &&
             std::count(choices.begin(), choices.end(), num3);

    return result;
}

bool is_winning(std::vector<int> choices) {
    bool result;

    result = has_combination(choices, 1, 2, 3) ||
             has_combination(choices, 4, 5, 6) ||
             has_combination(choices, 7, 8, 9) ||
             has_combination(choices, 1, 4, 7) ||
             has_combination(choices, 2, 5, 8) ||
             has_combination(choices, 3, 6, 9) ||
             has_combination(choices, 1, 5, 9) ||
             has_combination(choices, 3, 5, 7);

    return result;
}