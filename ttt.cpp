#include <iostream>
#include <string>
#include <vector>
#include "ttt_functions.hpp"
int main() {

  std::cout << "#############################\n";
  std::cout << "####       WELCOME      #####\n";
  std::cout << "####         TO         #####\n";
  std::cout << "####    TIC-TAC-TOE     #####\n";
  std::cout << "#############################\n";

  // Creating Player X
  std::string player_X_name;
  std::cout << "What will be player X's name? ";
  std::cin >> player_X_name;
  Player player_X(player_X_name);
  //player_X.update_name(player_X_name + " (X)");

  // Creating Player O
  std::string player_O_name;
  std::cout << "What will be player O's name? ";
  std::cin >> player_O_name;
  Player player_O(player_O_name);
  //player_O.update_name(player_O_name + " (O)");


  // Initializing the board and game
  Board game_board;
  char result_of_game = 'F';

  while (result_of_game == 'F') {

    // Get Player X's Move
    // Add a check to see if user enters a valid input (do this for X and O)
    game_board.display_board();
    int player_X_move;
    std::cout << player_X.display_name() + "\'s (X) " + " Move: ";
    std::cin >> player_X_move;
    std::cout << "\n";

    // Update the board and result with Player X's move
    game_board.update_board(player_X_move, 'X');
    result_of_game = game_board.result_of_game();

    if (result_of_game == 'X') {
      break;
    }

    // Get Player O's move
    game_board.display_board();
    int player_O_move;
    std::cout << player_O.display_name() + "\'s (O) " + " Move: ";
    std::cin >> player_O_move;
    std::cout << "\n";

    // Update the board and result with Player O's move
    game_board.update_board(player_O_move, 'O');
    result_of_game = game_board.result_of_game();


  }


  if (result_of_game == 'X') {
    std::cout << "Congratulations! " + player_X.display_name() + " won!";
  } else {
    std::cout << "Congratulations! " + player_O.display_name() + " won!";
  }




}