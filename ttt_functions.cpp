#include <iostream>
#include "ttt_functions.hpp"

Board::Board() {
    vector_board = {
        {'?', '?', '?'},
        {'?', '?', '?'},
        {'?', '?', '?'}
    };

    number = 2;
}

void Board::display_board() {
    for (int i = 0; i < vector_board.size(); i++) {
        for (int j = 0; j < vector_board[i].size(); j++) {
            std::cout << vector_board[i][j] << " ";
        }

        std::cout << "\n";
    }
    
   //std::cout << "Hi";
}

void Board::display_number() {
    std::cout << number;
}