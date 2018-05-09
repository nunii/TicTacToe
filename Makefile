CCX=g++ -std=c++11


a.out: Board.o XO.o exceptions.o 
		$(CCX) main.cpp *.o
		
Board.o: Board.cpp Board.h
		$(CCX) -c Board.cpp
		
XO.o: XO.cpp XO.h
		$(CCX) -c XO.cpp
		

exceptions.o: exceptions.h 
		$(CCX) -c exceptions.h
		
Clean:
		rm *.o a.out
