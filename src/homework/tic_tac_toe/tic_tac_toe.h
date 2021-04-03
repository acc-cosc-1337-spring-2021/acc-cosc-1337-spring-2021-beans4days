//h
//tic_tac_toe.h
//1
#include<string>
#include<vector>
using std::string;
using std::vector;

class TicTacToe {
public:
    //bool game_over;
    bool game_over();
    // bool game_over(){return check_board_full;}
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const{return player;}
    void display_board()const;

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();

    string player;
    //vector of string pegs
    // vector <string> pegs{};
    // vector <string> pegs={};
    // vector <string> pegs(9, " ");
    // vector <string> pegs{9, " "};
    vector<string> pegs{9, " "};
};