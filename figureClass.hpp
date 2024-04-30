
#ifndef __FIGURECLASS__
#define __FIGURECLASS__
 

#include <iostream>

class Figure {
    public:

    Figure();
    virtual ~Figure();

    public:

    void setFigureColor(const std::string& color);
    virtual void printFigureName() = 0;
    std::string getFigureColor();

    void printFigureDetails();

    private:
    std::string _figureColor = "White";
};

#endif // __FIGURECLASS__