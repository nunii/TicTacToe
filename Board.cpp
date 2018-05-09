#include "Board.h"
#include "exceptions.h"
using namespace std;

Board :: Board(int len){
    this -> length = len;
    this -> place = {0,0};
    this -> board = new X_O*[length];
    for (int i = 0; i < length; ++i)
        this-> board[i] = new X_O[length];
    this->reset(); // maybe not necessary
}

Board :: Board(const Board& other){
   this -> length  = other.getLength();
   this -> place = {0,0};
    
    board = new X_O*[length];
    for (int i = 0; i < length; ++i)
         board[i] = new X_O[length];
    for(int i = 0; i < (this-> length); i++)
    	 for(int j = 0; j < (this-> length); j++)
		(this-> board[i][j]) = other.board[i][j].geChar();
    
}

  Board :: ~Board(){
    rmv();
}

void Board :: rmv(){
    for(int i = 0; i < length; i++)
		delete [] board[i];
	delete [] board; 
}



void Board :: reset()
{
                for(int i=0; i<this ->getLength() ; i++){
                    for(int j=0; j<this ->getLength(); j++){
                        board[i][j].setDot();
                    }
                }
            }

Board& Board :: operator=(const Board& other){
  /*  if(this -> length != other.getLength()){
        cout << "boards are not the same size!" << endl;
    }*/
    if(this == &other) return *this;
    rmv();	
    this-> length = other.getLength();
    this-> board = new X_O*[length];
        for(int i = 0; i < (this-> length); i++){
	    board[i] = new X_O[length];
    	     for(int j = 0; j < (this-> length); j++)
    	       (this-> board[i][j]) = other.board[i][j];
    }
        return *this;
    
}
/*
char Board :: operator= (char symbol){
    if(symbol == '.'){ fill(symbol); }
    else if (symbol != 'X' && symbol != 'O'){
        IllegalCharException ichar;
        ichar.set_illegal(symbol);
        throw ichar; }
    return symbol;
}

*/
char Board :: operator=(char c){
    
    if(c=='.'){
        this -> reset();
    }
    else if (c != 'X' && c!= 'O'){
        throw IllegalCharException(c);
    }
    
    return c;    
}


X_O& Board :: operator[](const pairs pair)
{
  if((pair.i >= this -> getLength() || pair.j >= this -> getLength()) ||
     (pair.i < 0 || pair.j <0))
     {
      throw (IllegalCoordinateException(pair));
   }
  
    return board[pair.i][pair.j];
}
