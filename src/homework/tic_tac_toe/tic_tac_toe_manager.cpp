//cpp

//void 

#include "tic_tac_toe_manager.h"

#include <iostream>
#include<string>
#include<vector>
using std::vector;
using std::string;

using std::cout;
//using std::cin;

//void TicTacToeManager::save_game(TicTacToe b)
void TicTacToeManager::save_game(TicTacToe Game)
{
    games.push_back(Game);
    update_winner_count(Game.get_winner());

}

//friend
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(int i = 0; i <= manager.games.size(); i++)
    {
        cout<<manager.games[i] <<"\n";
    }

    return out;
}
std::vector<TicTacToe> games;
int x_win = 0;
int o_win = 0;
int ties = 0;


void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
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