//h
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <fstream>
#include <iostream>
#include <vector>
#include <memory>

using std::vector;
using std::string;
using std::unique_ptr;

class TicTacToeData
{

public:
    void save_games(const vector<unique_ptr<TicTacToe>> & Games);
    vector<unique_ptr<TicTacToe>>get_games();

private:
    const string file_name{"tic_tac_toe.txt"};
};

#endif