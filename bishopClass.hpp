#ifndef __BISHOPCLASS__
#define __BISHOPCLASS__
 


#include "figureClass.hpp"


class Bishop : public Figure {
    public:
    Bishop();
    ~Bishop();

    void printFigureName() override;
};

#endif // __BISHOPCLASS__