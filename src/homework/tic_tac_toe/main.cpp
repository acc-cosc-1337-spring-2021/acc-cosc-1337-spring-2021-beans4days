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
	string question;
	int position;
	TicTacToe Game;
	
	cout << "TicTacToe" <<"\n\n\n";
	// Prompt the user for the first player.
	cout <<"Enter x or as o?\n";
	cin >> question;
	cout <<"\n";
	Game.start_game(question);
	cout <<"\n";
	Game.display_board();
	cout<<"\n";
	
	do
	{	
		cout <<Game.get_player()<<"'s turn." <<"\n";
		cout <<"Enter position from 1 to 9." <<"\n";
		cout <<"Number picked: ";
		cin >> position;
		cout << "\n";
		Game.mark_board(position);
		Game.display_board();
		cout << "\n";
	}while(Game.game_over() == false);
	
	cout <<"Game Over... " <<"\n";
	return 0;
}