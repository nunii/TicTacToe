CXX=clang++-5.0
CPPFLAGS=-std=c++17 

all: Board.o XO.o exceptions.o
		
Board.o: Board.cpp Board.h
		$(CXX) -c Board.cpp
		
XO.o: XO.cpp XO.h
		$(CXX) -c XO.cpp
		

exceptions.o: exceptions.h 
		$(CXX) -c exceptions.h
		
Clean:
		rm *.o a.out
