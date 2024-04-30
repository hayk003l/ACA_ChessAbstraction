#ifndef __PAWNCLASS__
#define __PAWNCLASS__

#include "figureClass.hpp"


class Pawn : public Figure {
    public:
    Pawn();
    ~Pawn();

    void printFigureName() override;
};

#endif // __PAWNCLASS__