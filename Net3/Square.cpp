#include "Square.h"

Square::Square(int side)
    : Quadrangle(side, side, side, side, 90, 90, 90, 90) {
}

std::string Square::get_name() const {
    return "Квадрат";
}