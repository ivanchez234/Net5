#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B)
    : Triangle(a, b, a, A, B, A) {
}

std::string IsoscelesTriangle::get_name() const {
    return "Равнобедренный треугольник";
}