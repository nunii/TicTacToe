#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP
#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>
#include <exception>
using namespace std;
#endif




struct pairs
{
  int i, j;
};


class IllegalCoordinateException : public exception {
    
    string msg;
    pairs pair;
public:

    IllegalCoordinateException(pairs couple) {
      this -> pair = couple;
  }
    ~IllegalCoordinateException(){
        
    }
  
  string theCoordinate() const {
      
     ostringstream msg;
     msg << this -> pair.i << "," << this -> pair.j << endl;
      return  msg.str();
  }
  
 };
 
 
 class IllegalCharException : public exception {
    char c;
public:

    IllegalCharException(const char theChar) {
      this -> c = theChar;
    }
  
   ~IllegalCharException(){
    }
  
  char theChar() const {
    return this -> c;
  }
  
 };





