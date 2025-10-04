#include <iostream>

using namespace std;

enum TicTacToeValue
{
    TTT_EMPTY = -1,
    TTT_O,
    TTT_X
};
enum BoardPositions
{

};

int main()
{
    cout << "Tic Tac Toe" << endl;

    //Board Layout
    int board[3][3]  = {
        {TTT_EMPTY,TTT_EMPTY,TTT_EMPTY},
        {TTT_EMPTY,TTT_EMPTY,TTT_EMPTY},
        {TTT_EMPTY,TTT_EMPTY,TTT_EMPTY}
    } //gonna keep it simple and only have board position selected in rounds of two for X pos and Y pos.


    //Turn Design
        //P1 is automatically O; P2 is automatically X
        //turns boil down to selecting board position. If the position is occupied the user will have to reinput both the X and Y. This can all be done in a single loop.
        /* if (selected_board_pos != TTT_EMPTY)
        {
            continue;
        }else
        {
            board[x][y] = turn_value
        }
        */
        while




    return 0;
}

//define win conditions or let players end the game?
//define win cons later prob.
