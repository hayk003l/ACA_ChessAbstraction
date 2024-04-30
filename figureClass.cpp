#include "figureClass.hpp"


Figure::Figure(){}
Figure::~Figure() {}

void Figure::setFigureColor(const std::string& color) {
    _figureColor = color;
}

std::string Figure::getFigureColor() {
    return _figureColor;
}

void Figure::printFigureDetails() {
    std::cout << "I am a ";
    printFigureName();
    std::cout << "My color is " << getFigureColor() << std::endl;
}