CCX=g++ -std=c++11

all: Board.o X_O.o Exceptions.o

//a.out: Board.o X_O.o Exceptions.o 
//		$(CCX) main.cpp *.o
		
Board.o: Board.cpp Board.h X_O.h
		$(CCX) -c Board.cpp -o Board.o
		
X_O.o: X_O.cpp X_O.h Board.h
		$(CCX) -c X_O.cpp -o X_O.o
		
Exceptions.o: exceptions.h
		$(CCX) -c exceptions.h -o exceptions.o
		
Clean:
	rm *.o 
