
CC = g++

main: main.o figureClass.o kingClass.o queenClass.o bishopClass.o pawnClass.o knightClass.o rookClass.o allIncludes.o
	$(CC) -o main main.o figureClass.o kingClass.o queenClass.o bishopClass.o pawnClass.o knightClass.o rookClass.o allIncludes.o

main.o: main.cpp allIncludes.hpp 
	$(CC) -c main.cpp

allIncludes.o :	allIncludes.hpp
	$(CC) -c allIncludes.cpp	

figureClass.o: figureClass.cpp figureClass.hpp
	$(CC) -c figureClass.cpp

kingClass.o: kingClass.cpp kingClass.hpp
	$(CC) -c kingClass.cpp

queenClass.o: queenClass.cpp queenClass.hpp figureClass.hpp
	$(CC) -c queenClass.cpp

pawnClass.o: pawnClass.cpp pawnClass.hpp figureClass.hpp
	$(CC) -c pawnClass.cpp

rookClass.o: rookClass.cpp rookClass.hpp figureClass.hpp
	$(CC) -c rookClass.cpp

bishopClass.o: bishopClass.cpp bishopClass.hpp figureClass.hpp
	$(CC) -c bishopClass.cpp

knightClass.o: knightClass.cpp knightClass.hpp figureClass.hpp
	$(CC) -c knightClass.cpp

clean:
	rm -f main main.o figureClass.o kingClass.o queenClass.o bishopClass.o pawnClass.o knightClass.o rookClass.o allIncludes.o *d.
