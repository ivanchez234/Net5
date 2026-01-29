#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int side)
    : Triangle(side, side, side, 60, 60, 60) {
}

std::string EquilateralTriangle::get_name() const {
    return "Равносторонний треугольник";
}