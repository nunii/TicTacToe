CCX=g++ -std=c++11


a.out: Board.o X_O.o Exceptions.o 
		$(CCX) main.cpp *.o
		
Board.o: Board.cpp Board.h
		$(CCX) -c Board.cpp
		
X_O.o: X_O.cpp X_O.h
		$(CCX) -c X_O.cpp
		
Exceptions.o: 
		$(CCX) -c exceptions.h
		
Clean:
