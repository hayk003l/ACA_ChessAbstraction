#ifndef __QUEENCLASS__
#define __QUEENCLASS__


#include "figureClass.hpp"


class Queen : public Figure {
    public:
    Queen();
    ~Queen();

    void printFigureName() override;
};

#endif // __QUEENCLASS__