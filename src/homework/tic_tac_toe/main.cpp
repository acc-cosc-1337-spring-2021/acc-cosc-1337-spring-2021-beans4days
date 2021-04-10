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
	string winner;
	char option ='Y';

	string question ="X";
	int position;
	
do {
    TicTacToe Game;
	cout <<"\n" <<"Welcome to TicTacToe" <<"\n\n\n";
	do {
	    // Prompt the user for the first player.
	    cout <<"Enter x or as o?\n";
	    cin >> question;
	    cout <<"\n";
	} while (question != "X" && question != "x" && question != "o" && question != "O");
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
	
	cout <<"Game Over... " <<"\n\n\n";
	cout <<"AND THE WINNER IS " << Game.get_winner() <<" !!!" <<"\n\n\n";
	cout <<"Would you like to play another round ?" <<"\n\n";
	cout <<"Enter the following (y/n): ";
	cin >> option;
	cout <<"\n";
} while (option == 'Y' || option == 'y');

	return 0;
}