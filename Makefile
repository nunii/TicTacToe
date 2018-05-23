CXX=clang++-5.0
CPPFLAGS=-std=c++17 

all: Board.o XO.o exceptions.o Player.o DummyPlayers.o Champion.o TicTacToe.o
		
		
Board.o: Board.cpp Board.h
		$(CXX) $(CPPFLAGS) --compile Board.cpp -o Board.o
		
XO.o: XO.cpp XO.h
		$(CXX) $(CPPFLAGS) --compile XO.cpp -o XO.o
		

exceptions.o: exceptions.h 
		$(CXX) $(CPPFLAGS) --compile exceptions.h -o exceptions.o

Player.o: Player.h
		$(CXX) $(CPPFLAGS) --compile Player.h -o Player.o

DummyPlayers.o: DummyPlayers.cpp DummyPlayers.h
		$(CXX) $(CPPFLAGS) --compile DummyPlayers.cpp -o DummyPlayers.o

Champion.o: Champion.cpp Champion.h
		$(CXX) $(CPPFLAGS) --compile Champion.cpp -o Champion.o
		
TicTacToe.o: TicTacToe.cpp TicTacToe.h
		$(CXX) $(CPPFLAGS) --compile Champion.cpp -o Champion.o

Clean:
		rm *.o a.out
