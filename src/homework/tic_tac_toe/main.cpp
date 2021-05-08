// Tic_Tac_Toe Main Version 1 (2nd April 2021)
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_data.h"

#include<iostream>
#include<iomanip>
#include<string>
#include<vector>

using std::string;
using std::cout;
using std::cin;
using std::unique_ptr;
using std::make_unique;


//TicTacToeData data;
//TicTacToeManager manager = TicTacToeManager(data);

int main()
{
	
	
	TicTacToeManager manager;
	//TicTacToe Game;
	unique_ptr<TicTacToe> Game;
	int x = 0;
	int o = 0;
	int t = 0;
	
	int type = 0;
	
	string option = "Y";
	string question;
	
	while(option == "Y" || option == "y")
	{
		cout << "\n\n";
		cout << "Enter 1 for 3x3 or 2 for 4x4." <<"\n\n";
		cout << "Select 1 or 2 for Game Type: ";
		cin >> type;

		if (type == 1)
		{
			Game = make_unique<TicTacToe3>();
		}
		else if (type == 2)
		{
			Game = make_unique<TicTacToe4>();
		}
		
		cout <<"\n" << "Please enter as player X or O ? (CAPITAL LETTERS)\n";
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

		Game->start_game(question);
		
		while(Game->game_over() == false)
		{
			cin >> *Game;
			cout << *Game;
		}
		
		if(Game->game_over() == true)
		{
		cout <<"\n" << "GAME OVER!\n";
		if(Game->get_winner() == "X" || Game->get_winner() =="O")
		{
			cout <<"\n" << "Winner is " <<Game->get_winner() <<"!" <<"\n";
			manager.save_game(Game);
			manager.get_winner_total(o,x,t);
			cout <<"X Score: " << x <<"\n";
			cout <<"O Score: " << o <<"\n";
			cout <<"Ties: " << t <<"\n";
		}
		else if (Game->get_winner() == "C")
		{
			cout  <<"\n" << "It's a DRAW/TIE!" <<"\n";
			cout << "Winner is " <<Game->get_winner() <<"!" <<"\n";
			manager.save_game(Game);
			manager.get_winner_total(o,x,t);
			
			cout <<"\n" <<"X Score: " << x <<"\n";
			cout <<"O Score: " << o <<"\n";
			cout <<"Ties: " << t <<"\n";
		}
		else
		{
			cout << *Game;
		}
		// Play again?
		cout <<"\n" <<"Would you like to play another round? (Y/N): ";
		cin >> option;
		}
	}	
	/*
	manager.save_game(Game);
	manager.get_winner_total(o,x,t);
	
	cout <<"\n" <<"X Score: " << x <<"\n";
	cout <<"O Score: " << o <<"\n";
	cout <<"Ties: " << t <<"\n";
	*/
	cout << manager;
	
	return 0;
		
}