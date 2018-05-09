CCX=g++ -std=c++11

all: Board.o XO.o exceptions.o
		
Board.o: Board.cpp Board.h XO.h
		$(CCX) -c Board.cpp -o Board.o
		
XO.o: XO.cpp XO.h Board.h
		$(CCX) -c XO.cpp -o XO.o

exceptions.o: exceptions.h
		$(CCX) -c exceptions.h -o exceptions.o
		
Clean:
	rm *.o 
