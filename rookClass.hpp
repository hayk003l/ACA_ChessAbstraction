#ifndef __ROOKCLASS__
#define __ROOKCLASS__


#include "figureClass.hpp"


class Rook : public Figure {
    public:
    Rook();
    ~Rook();

    void printFigureName() override;
};

#endif // __ROOKCLASS__