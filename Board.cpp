#include "Board.h"
#include "exceptions.h"
using namespace std;

Board :: Board(int len){
    this -> length = len;
    this -> place = {0,0};
    board = new X_O*[length];
    for (int i = 0; i < length; ++i)
        board[i] = new X_O[length];
    this->reset(); // maybe not necessary
}

Board :: Board(const Board& other){
   this -> length  = other.getLength();
   this -> place = {0,0};
    
    board = new X_O*[length];
    for (int i = 0; i < length; ++i)
         board[i] = new X_O[length];
    this->reset(); // maybe not necessary
    
}

  /*Board :: ~Board(){
    for(int i = 0; i < (this-> length); i++){
		delete [] board[i];
	}
	delete [] board;
}*/

/*string Board :: toString()const{
    string s;
    for(int i=0; i<length ; i++){
        for(int j=0; j<length; j++){
            s += (board[i][j].getChar());
        }
        s+='\n';
    }
    return s;
}*/

ostream& operator<<(ostream& out, Board& b)
{
   for(int i = 0; i < b.getLength(); i++){
			for(int j = 0; j < b.getLength(); j++ ){
				out << (b.board[i][j]).getChar();
			}
			out << endl;
		}
        return out;
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
    if(this -> length != other.getLength()){
        cout << "boards are not the same size!" << endl;
    }
    
    else{
        for(int i=0; i<this -> length ; i++){
            for(int j=0; j<this -> length; j++){
              
                char c = other.board[i][j].getChar();
                this -> fill(c,i,j);
            }
        }
        return *this;
    }
}

char Board :: operator=(char c){
    
    if(c=='.'){
        this -> reset();
    }
    else {
        throw IllegalCharException(c);
         return c;
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
