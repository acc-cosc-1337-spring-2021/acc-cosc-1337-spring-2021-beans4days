//cpp
// tic_tac_toe.cpp
//1

#include "tic_tac_toe.h"
//#include "tic_tac_toe_3.h"
//#include "tic_tac_toe_4.h"

#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<memory>


using std::string;
using std::vector;

using std::cout;
using std::cin;

// new
std::istream& operator>>(std::istream& in, TicTacToe& Game)
{
    if (Game.pegs.size() == 9)
    {
        int position;
        cout <<"\n";
        cout <<Game.get_player()<<"'s turn." <<"\n";
        cout <<"Enter position from 1 to 9." <<"\n";
        cout <<"Number picked: ";
        in>>position;
        // User Input Validation for Position
        while(position < 1 || position > 9)
        {
            cout << "Invalid position selected, please re-enter position between 1-9.\n";
            cout << "Number picked: ";
            in >> position;
        }
        cout << "\n";
        Game.mark_board(position);
    }
    else if (Game.pegs.size() != 9)
    {
        int position;
        cout <<"\n";
        cout <<Game.get_player()<<"'s turn." <<"\n";
        cout <<"Enter position from 1 to 16." <<"\n";
        cout <<"Number picked: ";
        in>>position;
        // User Input Validation for Position
        while(position < 1 || position > 16)
        {
            cout << "Invalid position selected, please re-enter position between 1-16.\n";
            cout << "Number picked: ";
            in >> position;
        }
        cout << "\n";
        Game.mark_board(position);
    }

    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& Game)
{
    if (Game.pegs.size() == 9) 
    {
        out << " " << Game.pegs[0] << " | " << Game.pegs[1] << " | " << Game.pegs[2] << "\n";
        out << " " << Game.pegs[3] << " | " << Game.pegs[4] << " | " << Game.pegs[5] << "\n";
        out << " " << Game.pegs[6] << " | " << Game.pegs[7] << " | " << Game.pegs[8] << "\n";
        
    }
    else if (Game.pegs.size() != 9) 
    {
        out << " " << Game.pegs[0] << " | " << Game.pegs[1] << " | " << Game.pegs[2] << " | " << Game.pegs[3] << "\n";
        out << " " << Game.pegs[4] << " | " << Game.pegs[5] << " | " << Game.pegs[6] << " | " << Game.pegs[7] << "\n";
        out << " " << Game.pegs[8] << " | " << Game.pegs[9] << " | " << Game.pegs[10] << " | " << Game.pegs[11] << "\n";
        out << " " << Game.pegs[12] << " | " << Game.pegs[13] << " | " << Game.pegs[14] << " | " << Game.pegs[15] << "\n";
    }

    return out;
}

bool TicTacToe::game_over()
{
    //update new
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
            return true;
    }
    else if (check_board_full())
    {
        winner = "C"; //variable C
        return true;
    }
    else {
        return false;
    }
    // 1) return check_board_full function return value
    //TicTacToe::check_board_full();
    //return check_board_full();
}

void TicTacToe::start_game(string first_player)
{

    // 1) First_player function argument value must be X or O
    if(first_player == "O" || first_player == "X") //(first_player == "o" || first_player =="x")
    {
    
    // 2) In function set player(private variable) to first_player function argument.
    player = first_player;

    // 3) Call the clear_board function
    //TicTacToe::clear_board();
    clear_board();

    }

}

/* void TicTacToe::display_board()const
{
    // Iterate vector of strings pegs to 
    // Display a tic tac toe board in 3x3 format
    for (int i = 0; i < 9; i++)
    {
        cout << pegs[i];

        if ((i+1) % 3 == 0)
        {
            cout <<"\n";
        }
        else
        {
            cout <<" | ";
        }
        

    }


}*/
void TicTacToe::mark_board(int position)
{
    // 1) Mark vector w position -1 equal to player 
    pegs[position -1] = player;
    // 2) Call set_next_player private function
    //TicTacToe::set_next_player();
    set_next_player();
}


/*string get_player()
{
    //TicTacToe:

}*/


void TicTacToe::set_next_player()
{
    // Set player. If private variable player X player is O else player is X.
    if (player == "X")
    {
        player = "O";
    } 
    else 
    {
        player = "X";
    }
}



bool TicTacToe::check_board_full()
{
	/* do
	{
	
	}while (pegs) */
	
	//boolean true
    bool full = true;
    
    //iterate
    for(int i = 0; i < 9; i++)
    {
        if(pegs[i] == " ") 
            full = false;
    }
    return full; //return true
}

void TicTacToe::clear_board()
//Initialize to 9 " "(spaces)
{
    pegs = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
}

// new
// type of wins for game over, set winner etc

bool TicTacToe::check_column_win() //iterate later for neatness and functionality?
{
    return false;
}

bool TicTacToe::check_row_win() // iterate later
{
    return false;
}

bool TicTacToe::check_diagonal_win() // for neater come back to iterate
{
    return false;
}

void TicTacToe::set_winner()
{
    if (player == "X" || player == "x") //come back to double check and confirm code 
    {
        winner = "O";
    }
    /*else if (player == "o")
    {
        player == "O";
    }*/
    else
    {
        winner = "X";
    }
    
}
string TicTacToe::get_winner() const
{
    return winner;
}