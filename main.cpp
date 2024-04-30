#include <iostream>

#include "allIncludes.hpp"

int main() {
    Figure* king = new King();
    king->setFigureColor("White");
    king->printFigureDetails();

    Figure* queen = new Queen();
    queen->setFigureColor("Black");
    queen->printFigureDetails();

    Figure* pawn = new Pawn();
    pawn->setFigureColor("White");
    pawn->printFigureDetails();

    delete king;
    king = nullptr;

    delete queen;
    queen = nullptr;

    delete pawn;
    pawn = nullptr;

    return 0;    
}