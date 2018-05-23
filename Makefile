CCX=g++ -std=c++11


a.out: Board.o XO.o exceptions.o Player.o DummyPlayers.o Champion.o TicTacToe.o
		$(CCX) main.cpp *.o
		
Board.o: Board.cpp Board.h
		$(CCX) -c Board.cpp
		
XO.o: XO.cpp XO.h
		$(CCX) -c XO.cpp
		

exceptions.o: exceptions.h 
		$(CCX) -c exceptions.h

Player.o: Player.h
		$(CCX) -c Player.h

DummyPlayers.o: DummyPlayers.cpp DummyPlayers.h
		$(CCX) -c DummyPlayers.cpp

Champion.o: Champion.cpp Champion.h
		$(CCX) -c Champion.cpp

TicTacToe.o: TicTacToe.cpp TicTacToe.h
		$(CCX) -c TicTacToe.cpp

Clean:
		rm *.o a.out
