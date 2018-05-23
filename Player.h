#ifndef _PLAYER_H
#define _PLAYER_H
#include "Board.h"

class Player {
    protected:
        char myChar;
    public:
        
        inline const char getChar() const {return myChar;}
        inline const void setChar(char c) {myChar=c;}
        virtual const string name() const;
        virtual const Coordinate play(const Board&);
        
    
};



#endif