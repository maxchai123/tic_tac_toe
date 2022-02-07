#ifndef ttt_functions
#define ttt_functions
#include <vector>
class Board {

    // Example of a TTT Board
    /*       *         *
        1    *    2    *    3      
             *         *
    *******************?*********
             *         *
        4    *    5    *    6
             *         *
    *****************************
             *         *
        7    *    8    *    9
             *         *
    */
private:
    // Attributes
    std::vector<std::vector<char>> vector_board;
    
public:
    
    // Constructor
    Board();

    // Board Functions
    void display_board();

    void update_board(int location, char type); 

    char result_of_game();
};



class Player {

private:
    // Attributes
    std::string name;

public:
    // Constructor 
    Player(std::string new_name);

    // Player Functions
    std::string display_name();

    void update_name(std::string new_name);
    


};
 
#endif