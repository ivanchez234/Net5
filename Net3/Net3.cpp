#include <iostream>
#include <string>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"

void print_Triangle(Triangle* tri) {
    std::cout << tri->get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << tri->get_sideA() << " b=" << tri->get_sideB() << " c=" << tri->get_sideC() << std::endl;
    std::cout << "Углы: A=" << tri->get_vertex_A() << " B=" << tri->get_vertex_B() << " C=" << tri->get_vertex_C() << std::endl << std::endl;
}

void print_Quadrangle(Quadrangle* qua) {
    std::cout << qua->get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << qua->get_sideA() << " b=" << qua->get_sideB() << " c=" << qua->get_sideC() << " d=" << qua->get_sideD() << std::endl;
    std::cout << "Углы: A=" << qua->get_vertex_A() << " B=" << qua->get_vertex_B() << " C=" << qua->get_vertex_C() << " D=" << qua->get_vertex_D() << std::endl << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    Triangle t(10, 20, 30, 50, 60, 70);
    RightTriangle rt(10, 20, 30, 50, 60);
    IsoscelesTriangle it(10, 20, 50, 60);
    EquilateralTriangle et(30);

    Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram p(20, 30, 30, 40);
    Rectangle r(10, 20);
    Square s(20);
    Rhombus rh(30, 30, 40);

    print_Triangle(&t);
    print_Triangle(&rt);
    print_Triangle(&it);
    print_Triangle(&et);
    print_Quadrangle(&q);
    print_Quadrangle(&p);
    print_Quadrangle(&r);
    print_Quadrangle(&s);
    print_Quadrangle(&rh);

    return 0;
}