//h

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include "tic_tac_toe_data.h"
/*
#include <iostream>
#include <string>
#include <vector> 
*/
#include<vector>
#include<string>
#include<memory>

using std::vector;
//using std::string;
using std::unique_ptr;
using std::make_unique;

class TicTacToeManager

{
friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

public:
    //void save_game(TicTacToe b);
    //void save_game(TicTacToe Game);
    
    //ostream
    
    TicTacToeManager() = default;

    TicTacToeManager(TicTacToeData data);

    void save_game(unique_ptr<TicTacToe>& Game);

    void get_winner_total(int& x, int& o, int& t);

    ~TicTacToeManager();

private:
    //vector<string> games{};
    //std::vector<TicTacToe> games;
    vector<unique_ptr<TicTacToe>> games;
    
    TicTacToeData data;

    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(std::string winner);

    //new
    
};

#endif
