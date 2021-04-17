//h

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"

/*
#include <iostream>
#include <string>
#include <vector> 
*/

class TicTacToeManager

{
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

    public:
        //void save_game(TicTacToe b);
        void save_game(TicTacToe Game);
        //ostream
        
        void get_winner_total(int& o, int& x, int& t);

    private:
        //vector<string> games{};
        std::vector<TicTacToe> games;
        int x_win;
        int o_win;
        int ties;
        void update_winner_count(std::string winner);
};

#endif
