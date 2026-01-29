
#include <iostream>
#include "Header.h"


int main()
{
    setlocale(LC_ALL, "Rus");
    double num1{};
    double num2{};
    int operation{};
    double result{};
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;
    switch (operation)
    {
    case 1:
        result = sum(num1, num2);
        std::cout << num1 << " + " << num2 << " = " << result << std::endl;
        break;
    case 2:
        result = min(num1, num2);
        std::cout << num1 << " - " << num2 << " = " << result << std::endl;
        break;
    case 3:
        result = multip(num1, num2);
        std::cout << num1 << " * " << num2 << " = " << result << std::endl;
        break;
    case 4:
        if (num2 == 0)
        {
            std::cout << "делить на ноль нельзя" << std::endl;
            break;
        }
        result = div(num1, num2);
        std::cout << num1 << " / " << num2 << " = " << result << std::endl;
        break;
    case 5:
        result = exp(num1, num2);
        std::cout << num1 << " в степени " << num2 << " = " << result << std::endl;
        break;

    default:
        std::cout << "Неверная операция" << std::endl;
        break;
    }
}
