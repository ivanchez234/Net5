#include "Triangle.h"
Triangle::Triangle(int a, int b, int c, int A, int B, int C): side_A(a), side_B(b), side_C(c), vertex_A(A), vertex_B(B), vertex_C(C) { }

int Triangle::get_sideA() const { return side_A; }
int Triangle::get_sideB() const { return side_B; }
int Triangle::get_sideC() const { return side_C; }
int Triangle::get_vertex_A() const { return vertex_A; }
int Triangle::get_vertex_B() const { return vertex_B; }
int Triangle::get_vertex_C() const { return vertex_C; }

std::string Triangle::get_name() const {
    return "Треугольник";
}