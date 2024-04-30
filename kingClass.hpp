#ifndef __KINGCLASS__
#define __KINGCLASS__
 
#include "figureClass.hpp"


class King : public Figure {
    public:
    King();
    ~King();

    void printFigureName() override;
};

#endif // __KINGCLASS__