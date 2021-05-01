//h
//tic_tac_toe.h
//1
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;

class TicTacToe 
{
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& Game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& Game);

public:
    // Create a constructor with an int parameter named size
    // in constructor, use an initializer list to initialize the vector to 9 or 16 elements
    TicTacToe(){}
    TicTacToe(int size): pegs(size*size, " "){}

    //HW 10 new constructor
    TicTacToe(vector<string> p, string win) : pegs(p), winner(win){}


    //bool game_over;
    bool game_over();
    // bool game_over(){return check_board_full;}
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const{return player;}
    //void display_board()const;
    // new
    //string get_winner(){return winner;}
    string get_winner()const;
    const vector<string>get_pegs()const{return pegs;}

protected:
    vector<std::string> pegs;
    // virtual functions
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
    

private:
    // new
    
    void set_winner(); 

    void set_next_player();
    bool check_board_full();
    void clear_board();

    string player;
    //vector of string pegs
    // vector <string> pegs{};
    // vector <string> pegs={};
    // vector <string> pegs(9, " ");
    // vector <string> pegs{9, " "};
    //vector<string> pegs{9, " "};

    // new
    string winner; //stores the winner of the game X, O or C.


};

#endif