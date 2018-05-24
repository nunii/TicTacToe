#pragma once
#include "DummyPlayers.h"
#include "Champion.h"
#include "Board.h"
#include "exceptions.h"

// this class runs the game, the players are returning coordinate 
//and here we are placing the chars at those cordinates.
// we also setting up the game, deciding which player starts first as 'X'
// the second gets to play the 'O'
//1. if theres a tie - second player wins
//2. if one of the players are throwing exception, he is losing immidietley.
//3. theres a board func which returns the final board.
//4 theres a winner func which returns the winner player.
//5. Need to think about these lines:
//cout << "The winner is " << game.winner().name() 
//	     << ", playing as " << game.winner().getChar() << "!" << endl;


    class TicTacToe{
        
        private:
            Coordinate last;
            Board game_board;
            Player* Winner;
            //char sign;
        public:
          //  static int stepCount=0;
            TicTacToe(int);
            void play(Player&,Player&);
            bool check();
            
            inline Player& winner()const{return *this->Winner;}
            inline string name()const{return Winner->name();}
            //inline char getChar(){return sign;}
            inline Board board()const{return game_board;}
            
    };
     
