#pragma once
#include "Board.h"


class Player {
    protected:
        char myChar;
    public:
        
        const char getChar() const {return myChar;}
        const void setChar(char c) {myChar=c;}
        virtual const string name() const;
        virtual const Coordinate play(const Board&);
        
    
};

