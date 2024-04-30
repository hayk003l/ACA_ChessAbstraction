#ifndef __KNIGHTCLASS__
#define __KNIGHTCLASS__
#include "figureClass.hpp"


class Knight : public Figure {
    public:
    Knight();
    ~Knight();

    void printFigureName() override;
};

#endif // __KNIGHTCLASS__