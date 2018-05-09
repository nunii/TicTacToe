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
            ~Board();
            void rmv();
           friend ostream& operator<<(ostream& out,const Board& b);
            void reset();
            Board& operator=(const Board& other);
            char operator=(char c);
           
            X_O& operator[](const pairs pair);
            

         
    };
    
inline ostream& operator<<(ostream& out,const Board& b)
{
   for(int i = 0; i < b.getLength(); i++){
			for(int j = 0; j < b.getLength(); j++ ){
				out << (b.board[i][j]).getChar();
			}
			out << endl;
		}
        return out;
}
 
    
#endif

