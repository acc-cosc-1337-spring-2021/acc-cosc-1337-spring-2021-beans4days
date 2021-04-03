#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Unit Test Game Ends Full Board") {
	TicTacToe Game;
	Game.start_game("X");
	for (int i = 1; i < 9; i++)
	{
		Game.mark_board(i);
		REQUIRE(Game.game_over() == false);
	}
	Game.mark_board(9);
	REQUIRE(Game.game_over() == true);
}