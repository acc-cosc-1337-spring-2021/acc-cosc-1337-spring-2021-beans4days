// Tic_Tac_Toe Main Version 1 (2nd April 2021)
#include<iostream>
#include<string>
#include<vector>

#include "tic_tac_toe.h"

using std::string;
using std::cout;
using std::cin;

int main() 
{
	// new
	TicTacToe Game;

	string winner;
	string option = "Y";
	string question;
	int position;


	while(option == "Y" || option == "y")
	{
		cout << "Please enter as player X or O ? (CAPITAL LETTERS)\n";
		cin >> question;
		cout <<"\n" << "You have enetered: ";
		cout << question <<"\n";

		// User Input Validation for Player
		while(!(question == "X" || question == "O")) //|| question!= "x" || question != "o")
		{
			cout << "Incorrect Character - Please select X or O only. (CAPITAL LETTERS)\n";
			cin >> question;
			cout <<"\n" << "You have enetered: ";
			cout << question <<"\n";
		}

		Game.start_game(question);

		while(Game.game_over() == false)
		{
			cout <<Game.get_player()<<"'s turn." <<"\n";
			cout <<"Enter position from 1 to 9." <<"\n";
			cout <<"Number picked: ";
			cin >> position;
			// User Input Validation for Position
			while(position < 1 || position > 9)
			{
				cout << "Invalid position selected, please re-enter position between 1-9.\n";
				cout << "Number picked: ";
				cin >> position;
			}

			cout << "\n";
			Game.mark_board(position);
			Game.display_board();
			cout << "\n";
		}
	if(Game.game_over() == true)
	{
		cout << "GAME OVER!\n";
		if(Game.get_winner() == "X" || Game.get_winner() =="O")
		{
			cout << "Winner is " <<Game.get_winner() <<"!" <<"\n";
		}
		else if (Game.get_winner() == "C")
		{
			cout << "It's a DRAW/TIE!" <<"\n";
			cout << "Winner is " <<Game.get_winner() <<"!" <<"\n";
		}
		else
		{
			//Nil
		}
		// Play again?
		cout <<"Would you like to play another round? (Y/N): ";
		cin >> option;
	}
	}

	return 0;

}
