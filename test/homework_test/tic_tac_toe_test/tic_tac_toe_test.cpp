#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <memory>
using std::cout;
using std::cin;
using std::unique_ptr; 
using std::make_unique;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/* TEST_CASE("Verify Unit Test Game Ends Full Board") {
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X");
	for (int i = 1; i < 9; i++)
	{
		Game->mark_board(i);
		REQUIRE(Game->game_over() == false);
	}
	Game->mark_board(9);
	REQUIRE(Game->game_over() == true);
} */


TEST_CASE("Verify Test First Player Set Correctly No->1 for X") {
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();	
	Game->start_game("X");
	REQUIRE(Game->get_player() == "X");
}

TEST_CASE("Verify Test First Player Set Correctly No->2 for O") {
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("O");
	REQUIRE(Game->get_player() == "O");
}


/* TEST_CASE("Verify Test Game Over 9 Slots or TIE") { // X or O for // Double-check this code later->->->
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X");
	for (int i = 1; i < 9; i++)
	{
		Game->mark_board(i);
		REQUIRE(Game->game_over() == false);
		Game->mark_board(9);
		REQUIRE(Game->game_over() == true);
		REQUIRE(Game->get_winner() == "C");
	}
} */


TEST_CASE("Verify Test Game Over 9 Slots or TIE") { // X or O for // Double-check this code later->->->
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); // MAKE SURE NO ONE WINS OR THEY FAIL TEST
	Game->mark_board(3); // X
	REQUIRE(Game->game_over() == false);
	Game->mark_board(1); // O
	REQUIRE(Game->game_over() == false);
	Game->mark_board(4); // X
	REQUIRE(Game->game_over() == false);
	Game->mark_board(2); // O
	REQUIRE(Game->game_over() == false);
	Game->mark_board(5); // X
	REQUIRE(Game->game_over() == false);
	Game->mark_board(6); // O
	REQUIRE(Game->game_over() == false);
	Game->mark_board(8); // X
	REQUIRE(Game->game_over() == false);
	Game->mark_board(7); // O
	REQUIRE(Game->game_over() == false);
	Game->mark_board(9); // X
	REQUIRE(Game->game_over() == true);
	REQUIRE(Game->get_winner() == "C"); // TIE
}

TEST_CASE("Test WIN by First Column") { // X or O for 1,4,7
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); //Either
	Game->mark_board(1); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(4); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(7); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over by means 1
}

TEST_CASE("Test WIN by Second Column") { // X or O for 2,5,8
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); //Either
	Game->mark_board(2); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(3); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(6); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(8); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over by means 2
}

TEST_CASE("Test WIN by Third Column") { // X or O for 3,6,9
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); //Either
	Game->mark_board(3); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(4); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(6); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(7); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over by means 3
}

TEST_CASE("Test WIN by First Row") { // X or O for 1,2,3
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); //Either
	Game->mark_board(1); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(4); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(3); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over by means 4
}

TEST_CASE("Test WIN by Second Row") { // X or O for 4,5,6
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); //Either
	Game->mark_board(4); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(6); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over by means 5
}

TEST_CASE("Test WIN by Third Row") { // X or O for 7,8,9
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); //Either
	Game->mark_board(7); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(8); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over by means 6
}

TEST_CASE("Test WIN by Top Left Down to Bottom Right Diagonal") { // X or O for 1,5,9
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); //Either
	Game->mark_board(1); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(3); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over by means 7
}

TEST_CASE("Test WIN by Bottom Left Up To Top Right Diagonal") { // X or O for 7,5,3
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); //Either
	Game->mark_board(7); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(3); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over by means 8
}

TEST_CASE("Test get_winner Function for X") { 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("X"); //Either
	Game->mark_board(1); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(4); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(7); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); //
	REQUIRE(Game->get_winner() == "X");
}

TEST_CASE("Test get_winner Function for O") { 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	Game->start_game("O"); //Either
	Game->mark_board(1); // Player 1 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(4); // Player 1 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 2 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(7); // Player 1 = O - WIN?
	REQUIRE(Game->game_over() == true); //
	REQUIRE(Game->get_winner() == "O");
}

/*TEST_CASE("Test Manager Score Tally")
{
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>();
	TicTacToeManager manager;
	int x = 0;
	int o = 0;
	int t = 0;

	Game->start_game("X");

	Game->mark_board(1);
	REQUIRE(Game->game_over() == false);
	Game->mark_board(4);
	REQUIRE(Game->game_over() == false);
	Game->mark_board(2);
	REQUIRE(Game->game_over() == false);
	Game->mark_board(5);
	REQUIRE(Game->game_over() == false);
	Game->mark_board(3);
	REQUIRE(Game->game_over()== true);

	REQUIRE(Game->get_winner() == "X");

	//manager.save_game(Game);
	manager.save_game(unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>(););

	Game->start_game("O");
	
	Game->mark_board(1);
	REQUIRE(Game->game_over() == false);
	Game->mark_board(4);
	REQUIRE(Game->game_over() == false);
	Game->mark_board(2);
	REQUIRE(Game->game_over() == false);
	Game->mark_board(5);
	REQUIRE(Game->game_over() == false);
	Game->mark_board(3);
	REQUIRE(Game->game_over()== true);

	REQUIRE(Game->get_winner() == "O");

	//manager.save_game(Game);
	manager.save_game(unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>(););
	
	Game->start_game("X");

	Game->mark_board(3); // X
	REQUIRE(Game->game_over() == false);
	Game->mark_board(1); // O
	REQUIRE(Game->game_over() == false);
	Game->mark_board(4); // X
	REQUIRE(Game->game_over() == false);
	Game->mark_board(2); // O
	REQUIRE(Game->game_over() == false);
	Game->mark_board(5); // X
	REQUIRE(Game->game_over() == false);
	Game->mark_board(6); // O
	REQUIRE(Game->game_over() == false);
	Game->mark_board(8); // X
	REQUIRE(Game->game_over() == false);
	Game->mark_board(7); // O
	REQUIRE(Game->game_over() == false);
	Game->mark_board(9); // X
	REQUIRE(Game->game_over() == true);

	REQUIRE(Game->get_winner() == "C");
	
	//manager.save_game(Game);
	manager.save_game(unique_ptr<TicTacToe> Game = make_unique<TicTacToe3>(););

	manager.get_winner_total(o,x,t);

	REQUIRE(o == 1);
	REQUIRE(x == 1);
	REQUIRE(t == 1); 
}*/

// HW 9
// need fixing below requirement
/*
TEST_CASE("Verify Test Game Over 16 Slots or TIE 4") { // X or O for // Double-check this code later->->->
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("O"); // MAKE SURE NO ONE WINS OR THEY FAIL TEST
	Game->mark_board(2); // X
	REQUIRE(Game->game_over() == false); //1
	Game->mark_board(1); // O
	REQUIRE(Game->game_over() == false); //2
	Game->mark_board(3); // X
	REQUIRE(Game->game_over() == false); //3
	Game->mark_board(4); // O
	REQUIRE(Game->game_over() == false); //4
	Game->mark_board(5); // X
	REQUIRE(Game->game_over() == false); //5
	Game->mark_board(6); // O
	REQUIRE(Game->game_over() == false); //6
	Game->mark_board(8); // X
	REQUIRE(Game->game_over() == false); //7
	Game->mark_board(7); // O
	REQUIRE(Game->game_over() == false); //8
	Game->mark_board(10); // X
	REQUIRE(Game->game_over() == false); //9
	Game->mark_board(9); // O
	REQUIRE(Game->game_over() == false); //10
	Game->mark_board(11); // X
	REQUIRE(Game->game_over() == false); //11
	Game->mark_board(12); // O
	REQUIRE(Game->game_over() == false); //12
	Game->mark_board(13); // X
	REQUIRE(Game->game_over() == false); //13
	Game->mark_board(14); // O
	REQUIRE(Game->game_over() == false); //14
	Game->mark_board(15); // X
	REQUIRE(Game->game_over() == false); //15
	Game->mark_board(16); // O
	REQUIRE(Game->game_over() == true); //16
	REQUIRE(Game->get_winner() == "C"); // TIE
}*/


TEST_CASE("Test WIN Column A 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(2); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(6); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(10); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(14); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test WIN Column B 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(2); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(6); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(10); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(14); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test WIN Column C 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(3); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(7); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(11); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(15); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test WIN Column D 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(4); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(8); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(12); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(16); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test WIN Row A 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(1); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(5); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(6); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(3); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(7); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(4); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test WIN Row B 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(5); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(6); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(7); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(3); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(8); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test WIN Row C 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(9); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(10); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(11); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(3); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(12); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test WIN Row D 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(13); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(1); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(14); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(15); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(3); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(16); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test WIN Diagonal A 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(1); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(6); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(7); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(11); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(12); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(16); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test WIN Diagonal B 4") { // X or O 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(4); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(2); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(7); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(3); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(10); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(9); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over
	Game->mark_board(13); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Game Over
}

TEST_CASE("Test get_winner Function for X 4") { 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("X"); //Either
	Game->mark_board(1); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(5); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(2); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(6); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(3); // Player 2 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(7); // Player 1 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over 

	Game->mark_board(4); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Check for Game Over - End
	REQUIRE(Game->get_winner() == "X");
}

TEST_CASE("Test get_winner Function for O 4") { 
	unique_ptr<TicTacToe> Game = make_unique<TicTacToe4>();
	Game->start_game("O"); //Either
	Game->mark_board(1); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(5); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(2); // Player 1 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(6); // Player 2 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(3); // Player 2 = X
	REQUIRE(Game->game_over() == false); // Check for Game Over 
	Game->mark_board(7); // Player 1 = O
	REQUIRE(Game->game_over() == false); // Check for Game Over 

	Game->mark_board(4); // Player 1 = X - WIN?
	REQUIRE(Game->game_over() == true); // Check for Game Over - End
	REQUIRE(Game->get_winner() == "O");
}