#include "Board.h"
#include "exceptions.h"
using namespace std;






Board :: Board(int len){
    this -> Size = len;
    this -> place = {0,0};
    board = new X_O*[Size];
    for (int i = 0; i < Size; ++i)
        board[i] = new X_O[Size];
    this->reset(); // maybe not necessary
}

Board :: Board(const Board& other){
   this -> Size  = other.size();
   this -> place = {0,0};
    
    board = new X_O*[Size];
    for (int i = 0; i < Size; ++i)
         board[i] = new X_O[Size];
    this->reset(); // maybe not necessary
    
}

  Board :: ~Board(){
    rmv();
}

void Board :: rmv(){
    for(int i = 0; i < Size; i++)
		delete [] board[i];
	delete [] board; 
}



void Board :: reset()
{
                for(int i=0; i<this ->size() ; i++){
                    for(int j=0; j<this ->size(); j++){
                        board[i][j].setDot();
                    }
                }
            }

Board& Board :: operator=(const Board& other){
    if(this -> Size != other.size()){
        cout << "boards are not the same Size!" << endl;
    }
    if(this == &other) return *this;
    rmv();	
        Size = other.Size;
        board = new X_O*[Size];
        for(int i = 0; i < (this-> Size); i++){
	    board[i] = new X_O[Size];
    	     for(int j = 0; j < (this-> Size); j++)
    	       (this-> board[i][j]) = other.board[i][j];
    }
        return *this;
    
}

char Board :: operator=(char c){
    
    if(c=='.'){
        this -> reset();
    }
    else if (c != 'X' && c!= 'O'){
        throw IllegalCharException(c);
    }
    
    return c;    
}
/*
char& Board :: operator[](const Coordinate c){
  return board[c.i][c.j];  
}*/

X_O& Board :: operator[](const Coordinate c)const
{
  if((c.i >= this -> size() || c.j >= this -> size()) ||
     (c.i < 0 || c.j <0))
     {
      throw (IllegalCoordinateException(c));
   }
  
    return board[c.i][c.j];
}