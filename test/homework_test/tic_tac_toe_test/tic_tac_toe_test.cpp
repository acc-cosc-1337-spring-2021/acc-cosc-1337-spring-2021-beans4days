#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/* TEST_CASE("Verify Unit Test Game Ends Full Board") {
	TicTacToe Game;
	Game.start_game("X");
	for (int i = 1; i < 9; i++)
	{
		Game.mark_board(i);
		REQUIRE(Game.game_over() == false);
	}
	Game.mark_board(9);
	REQUIRE(Game.game_over() == true);
} */

TEST_CASE("Verify Test First Player Set Correctly No.1 for X") {
	TicTacToe Game;
	Game.start_game("X");
	REQUIRE(Game.get_player() == "X");
}

TEST_CASE("Verify Test First Player Set Correctly No.2 for O") {
	TicTacToe Game;
	Game.start_game("O");
	REQUIRE(Game.get_player() == "O");
}

/* TEST_CASE("Verify Test Game Over 9 Slots or TIE") { // X or O for // Double-check this code later...
	TicTacToe Game;
	Game.start_game("X");
	for (int i = 1; i < 9; i++)
	{
		Game.mark_board(i);
		REQUIRE(Game.game_over() == false);
		Game.mark_board(9);
		REQUIRE(Game.game_over() == true);
		REQUIRE(Game.get_winner() == "C");
	}
} */

TEST_CASE("Verify Test Game Over 9 Slots or TIE") { // X or O for // Double-check this code later...
	TicTacToe Game;
	Game.start_game("X"); // MAKE SURE NO ONE WINS OR THEY FAIL TEST
	Game.mark_board(3); // X
	REQUIRE(Game.game_over() == false);
	Game.mark_board(1); // O
	REQUIRE(Game.game_over() == false);
	Game.mark_board(4); // X
	REQUIRE(Game.game_over() == false);
	Game.mark_board(2); // O
	REQUIRE(Game.game_over() == false);
	Game.mark_board(5); // X
	REQUIRE(Game.game_over() == false);
	Game.mark_board(6); // O
	REQUIRE(Game.game_over() == false);
	Game.mark_board(8); // X
	REQUIRE(Game.game_over() == false);
	Game.mark_board(7); // O
	REQUIRE(Game.game_over() == false);
	Game.mark_board(9); // X
	REQUIRE(Game.game_over() == true);
	REQUIRE(Game.get_winner() == "C"); // TIE
}

TEST_CASE("Test WIN by First Column") { // X or O for 1,4,7
	TicTacToe Game;
	Game.start_game("X"); //Either
	Game.mark_board(1); // Player 1 = X
	Game.mark_board(2); // Player 2 = O
	Game.mark_board(4); // Player 1 = X
	Game.mark_board(5); // Player 2 = O
	Game.mark_board(7); // Player 1 = X - WIN?
	REQUIRE(Game.game_over() == true); // Game Over by means 1
}

TEST_CASE("Test WIN by Second Column") { // X or O for 2,5,8
	TicTacToe Game;
	Game.start_game("X"); //Either
	Game.mark_board(2); // Player 1 = X
	Game.mark_board(3); // Player 2 = O
	Game.mark_board(5); // Player 1 = X
	Game.mark_board(6); // Player 2 = O
	Game.mark_board(8); // Player 1 = X - WIN?
	REQUIRE(Game.game_over() == true); // Game Over by means 2
}

TEST_CASE("Test WIN by Third Column") { // X or O for 3,6,9
	TicTacToe Game;
	Game.start_game("X"); //Either
	Game.mark_board(3); // Player 1 = X
	Game.mark_board(4); // Player 2 = O
	Game.mark_board(6); // Player 1 = X
	Game.mark_board(7); // Player 2 = O
	Game.mark_board(9); // Player 1 = X - WIN?
	REQUIRE(Game.game_over() == true); // Game Over by means 3
}

TEST_CASE("Test WIN by First Row") { // X or O for 1,2,3
	TicTacToe Game;
	Game.start_game("X"); //Either
	Game.mark_board(1); // Player 1 = X
	Game.mark_board(4); // Player 2 = O
	Game.mark_board(2); // Player 1 = X
	Game.mark_board(5); // Player 2 = O
	Game.mark_board(3); // Player 1 = X - WIN?
	REQUIRE(Game.game_over() == true); // Game Over by means 4
}

TEST_CASE("Test WIN by Second Row") { // X or O for 4,5,6
	TicTacToe Game;
	Game.start_game("X"); //Either
	Game.mark_board(4); // Player 1 = X
	Game.mark_board(1); // Player 2 = O
	Game.mark_board(5); // Player 1 = X
	Game.mark_board(2); // Player 2 = O
	Game.mark_board(6); // Player 1 = X - WIN?
	REQUIRE(Game.game_over() == true); // Game Over by means 5
}

TEST_CASE("Test WIN by Third Row") { // X or O for 7,8,9
	TicTacToe Game;
	Game.start_game("X"); //Either
	Game.mark_board(7); // Player 1 = X
	Game.mark_board(1); // Player 2 = O
	Game.mark_board(8); // Player 1 = X
	Game.mark_board(2); // Player 2 = O
	Game.mark_board(9); // Player 1 = X - WIN?
	REQUIRE(Game.game_over() == true); // Game Over by means 6
}

TEST_CASE("Test WIN by Top Left Down to Bottom Right Diagonal") { // X or O for 1,5,9
	TicTacToe Game;
	Game.start_game("X"); //Either
	Game.mark_board(1); // Player 1 = X
	Game.mark_board(2); // Player 2 = O
	Game.mark_board(5); // Player 1 = X
	Game.mark_board(3); // Player 2 = O
	Game.mark_board(9); // Player 1 = X - WIN?
	REQUIRE(Game.game_over() == true); // Game Over by means 7
}

TEST_CASE("Test WIN by Bottom Left Up To Top Right Diagonal") { // X or O for 7,5,3
	TicTacToe Game;
	Game.start_game("X"); //Either
	Game.mark_board(7); // Player 1 = X
	Game.mark_board(1); // Player 2 = O
	Game.mark_board(5); // Player 1 = X
	Game.mark_board(2); // Player 2 = O
	Game.mark_board(3); // Player 1 = X - WIN?
	REQUIRE(Game.game_over() == true); // Game Over by means 8
}