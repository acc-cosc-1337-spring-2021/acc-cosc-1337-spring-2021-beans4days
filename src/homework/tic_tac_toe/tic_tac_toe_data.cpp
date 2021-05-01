//cpp
#include "tic_tac_toe_data.h"

#include <iostream>
#include <fstream>
#include <vector>

using std::vector;
using std::make_unique;

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>> & Games)
{
    std::ofstream outfile;
    outfile.open(file_name);

    if (outfile.is_open())
    {
        for (auto &Game : Games)
        {
            vector<string> pegs = Game->get_pegs();
            for (auto &peg : pegs)
            {
                outfile << peg;
            }
            outfile << Game->get_winner();
            outfile << "\n";
        }
    }
    outfile.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> boards;

    std::ifstream in_file;

    string saved_game; //string line

    in_file.open(file_name);

    if (in_file.is_open())
    {
        while (getline(in_file, saved_game))
        {
            vector<string> pegs;
            
            for (size_t i = 0; i < saved_game.size() - 1; ++i)
            {
                string ch(1, saved_game[i]);

                pegs.push_back(ch);
            }

            string winner{saved_game[saved_game.size() - 1]};

            unique_ptr<TicTacToe> Game;

            if (pegs.size() == 9)
            {
                Game = make_unique<TicTacToe4>(pegs, winner);
            }
            else if (pegs.size() == 16) 
            {
                Game = make_unique<TicTacToe3>(pegs, winner);
            }
            boards.push_back(std::move(Game));
        }

        in_file.close();
    }

    return boards;
}