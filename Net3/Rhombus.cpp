#include "Rhombus.h"

Rhombus::Rhombus(int side, int A, int B)
    : Quadrangle(side, side, side, side, A, B, A, B) {
}

std::string Rhombus::get_name() const {
    return "Ромб";
}