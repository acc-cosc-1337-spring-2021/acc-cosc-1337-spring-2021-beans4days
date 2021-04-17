// Tic_Tac_Toe Main Version 1 (2nd April 2021)
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

#include<iostream>
#include<iomanip>
#include<string>
#include<vector>



using std::string;
using std::cout;
using std::cin;



int main()
{
	
	
	TicTacToeManager manager;
	TicTacToe Game;
	int x = 0;
	int o = 0;
	int t = 0;
	
	string option = "Y";
	string question;
	
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
			cin >> Game;
			cout << Game;
		}
		
		if(Game.game_over() == true)
		{
		cout << "GAME OVER!\n";
		if(Game.get_winner() == "X" || Game.get_winner() =="O")
		{
			cout << "Winner is " <<Game.get_winner() <<"!" <<"\n";
			manager.save_game(Game);
			manager.get_winner_total(o,x,t);
			cout <<"X Score: " << x <<"\n";
			cout <<"O Score: " << o <<"\n";
			cout <<"Ties: " << t <<"\n";
		}
		else if (Game.get_winner() == "C")
		{
			cout << "It's a DRAW/TIE!" <<"\n";
			cout << "Winner is " <<Game.get_winner() <<"!" <<"\n";
			manager.save_game(Game);
			manager.get_winner_total(o,x,t);
			cout <<"X Score: " << x <<"\n";
			cout <<"O Score: " << o <<"\n";
			cout <<"Ties: " << t <<"\n";
		}
		else
		{
			cout << Game;
		}
		// Play again?
		cout <<"Would you like to play another round? (Y/N): ";
		cin >> option;
		}
	}	
	cout << manager;
	
	return 0;
		
}