//cpp

//void 

#include "tic_tac_toe_manager.h"

#include<iostream>
#include<string>
#include<vector>
using std::vector;
using std::string;

using std::cout;
//using std::cin;

TicTacToeManager::TicTacToeManager(TicTacToeData d) : data{d}
{
    games = data.get_games();

    for (auto &Game : games)
    {
        update_winner_count(Game->get_winner());
    }
}

//void TicTacToeManager::save_game(TicTacToe b)
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& Game)
{
    //games.push_back(Game);
    //update_winner_count(Game.get_winner());
    update_winner_count(Game->get_winner());
    games.push_back(std::move(Game));

}

//friend
/* std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(int i = 0; i < manager.games.size(); i++)
    {
        out<<manager.games[i] <<"\n";
    }

    out <<"\n" <<"X Score: " <<x_win<<"\n";
	out <<"O Score: " <<o_win<<"\n";
	out <<"Ties: " <<ties<<"\n";

    return out;
}*/

/*
std::vector<TicTacToe> games;
int x_win = 0;
int o_win = 0;
int ties = 0;
*/


void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}



//friend
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    /*for(int i = 0; i < manager.games.size(); i++)
    {
        out<<manager.games[i] <<"\n";
    }*/
    for(auto& Game : manager.games)
    {
        out << *Game;

        out <<"\n";
    }
    /*
    out <<"\n" <<"X Score: " <<x_win<<"\n";
	out <<"O Score: " <<o_win<<"\n";
	out <<"Ties: " <<ties<<"\n";
    */

    return out;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
    
}

TicTacToeManager::~TicTacToeManager()
{
    std::cout << "\nSaving Games...\n";
    data.save_games(games);
}