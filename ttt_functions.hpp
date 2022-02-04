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
    // Attributes
    std::vector<std::vector<char>> vector_board;
    int number;
public:
    
    // Constructor
    Board();

    void display_board();

    void display_number();

};
 
#endif