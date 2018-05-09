#ifndef BOARD_H
#define BOARD_H
#include "XO.h"
using namespace std;

    class Board{
        
        private:
            int length;
            X_O** board;
            pairs place;
        
        public:
            
            inline int getLength() const {return this -> length;}
            inline pairs getPair() const {return this -> place;}
            inline void fill(char c, int i, int j){
              
                board[i][j].setCurr(c);
                
            }
            
            Board(int len);
            Board(const Board& other);
            Board();
           // ~Board();
           friend ostream& operator<<(ostream& out, Board& b);
           void reset();
            Board& operator=(const Board& other);
            char operator=(char c);
           
            X_O& operator[](const pairs pair);
            

          /*  string toString()const;*/
    };
    

 
    
#endif
