#ifndef BOARD_H
#define BOARD_H
#include "X_O.h"
using namespace std;
#endif

    class Board{
        
        private:
            int length;
            X_O** board;
            pairs place;
        
        public:
            
            inline int getLength() const {return this -> length;}
            inline pairs getPair() const {return this -> place;}
            inline void reset(){
                for(int i=0; i<this ->getLength() ; i++){
                    for(int j=0; j<this ->getLength(); j++){
                        board[i][j].setDot();
                    }
                }
            }
            
            inline void fill(char c, int i, int j){
              
                board[i][j].setCurr(c);
                
            }
            
            Board(int);
            Board(const Board&);
            Board();
           // ~Board();
           friend ostream& operator<<(ostream& , Board&);
          
            Board& operator=(const Board&);
            char operator=(char);
           
            X_O& operator[](const pairs);
            

          /*  string toString()const;*/
    };
    
inline ostream& operator<<(ostream& out, Board& b)
{
   for(int i = 0; i < b.getLength(); i++){
			for(int j = 0; j < b.getLength(); j++ ){
				out << (b.board[i][j]).getChar();
			}
			out << endl;
		}
        return out;
}
 
    
   