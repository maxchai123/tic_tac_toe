#include <iostream>
#include "ttt_functions.hpp"

////////////////////////////////// Board Class //////////////////////////////////
// Constructor
Board::Board() {
    vector_board = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    
}

// Add the respective move
void Board::update_board(int location, char type) {
   switch (location) {
        case 1:
            if (std::toupper(type) == 'X') {
                vector_board[0][0] = 'X';
            } else {
                vector_board[0][0] = 'O';
            }
            break;
        case 2:
            if (std::toupper(type) == 'X') {
                vector_board[0][1] = 'X';
            } else {
                vector_board[0][1] = 'O';
            }
            break;
        case 3:
            if (std::toupper(type) == 'X') {
                vector_board[0][2] = 'X';
            } else {
                vector_board[0][2] = 'O';
            }
            break;
        case 4:
            if (std::toupper(type) == 'X') {
                vector_board[1][0] = 'X';
            } else {
                vector_board[1][0] = 'O';
            }
            break;
        case 5:
            if (std::toupper(type) == 'X') {
                vector_board[1][1] = 'X';
            } else {
                vector_board[1][1] = 'O';
            }
            break;
        case 6:
            if (std::toupper(type) == 'X') {
                vector_board[1][2] = 'X';
            } else {
                vector_board[1][2] = 'O';
            }
            break;
        case 7:
            if (std::toupper(type) == 'X') {
                vector_board[2][0] = 'X';
            } else {
                vector_board[2][0] = 'O';
            }
            break;
        case 8:
            if (std::toupper(type) == 'X') {
                vector_board[2][1] = 'X';
            } else {
                vector_board[2][1] = 'O';
            }
            break;
        case 9:
            if (std::toupper(type) == 'X') {
                vector_board[2][2] = 'X';
            } else {
                vector_board[2][2] = 'O';
            }
            break;


   } 

}

// Display board to terminal
void Board::display_board() {
    std::cout << "         *         *         " << std::endl;
    std::cout << "    " << vector_board[0][0] << "    *    " << vector_board[0][1] << "    *    " << vector_board[0][2] << "    " << std::endl;
    std::cout << "         *         *         " << std::endl;
    std::cout << "*****************************" << std::endl;
    std::cout << "         *         *         " << std::endl;
    std::cout << "    " << vector_board[1][0] << "    *    " << vector_board[1][1] << "    *    " << vector_board[1][2] << "    " << std::endl;
    std::cout << "         *         *         " << std::endl;
    std::cout << "*****************************" << std::endl;
    std::cout << "         *         *         " << std::endl;
    std::cout << "    " << vector_board[2][0] << "    *    " << vector_board[2][1] << "    *    " << vector_board[2][2] << "    " << std::endl;
    std::cout << "         *         *         " << std::endl;
}

// Checks the status of the game. Either someone has won or not.

char Board::result_of_game() {

    if (vector_board[0][0] == vector_board[0][1] && vector_board[0][1] == vector_board[0][2]) {        // Possible row winning positions
        return vector_board[0][0];
    } else if (vector_board[1][0] == vector_board[1][1] && vector_board[1][1] == vector_board[1][2]) {
        return vector_board[1][0];
    } else if (vector_board[2][0] == vector_board[2][1] && vector_board[2][1] == vector_board[2][2]) {
        return vector_board[2][0];
    } else if (vector_board[0][0] == vector_board[1][0] && vector_board[1][0] == vector_board[2][0]) { // Possible columns winning positions
        return vector_board[0][0];
    } else if (vector_board[0][1] == vector_board[1][1] && vector_board[1][1] == vector_board[2][1]) {
        return vector_board[0][1];
    } else if (vector_board[0][2] == vector_board[1][2] && vector_board[1][2] == vector_board[2][2]) {
        return vector_board[0][2];
    } else if (vector_board[0][0] == vector_board[1][1] && vector_board[1][1] == vector_board[2][2]) { // Possible diagonal winning positions
        return vector_board[0][0];
    } else if (vector_board[0][2] == vector_board[1][1] && vector_board[1][1] == vector_board[2][0]) {
        return vector_board[0][2];
    } else {
        return 'F';                                                                                    // Return 'F' if nobody has won yet
    }

}


/////////////////////////////////////////////////////////////////////////////////

// Player Class

Player::Player(std::string new_name) {
    name = new_name;
}

std::string Player::display_name() {
    return name;
}

void Player::update_name(std::string new_name) {
    name = new_name;
}