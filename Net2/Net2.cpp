#include <iostream>
#include <string>
#include <Windows.h>
#include "Header.h"

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;

    Counter counter;
    if (answer == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        int n;
        std::cin >> n;
        counter = Counter(n);
    }
    else {
        counter = Counter();
    }

    char command;
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == '+') {
            counter.increment();
        }
        else if (command == '-') {
            counter.decrement();
        }
        else if (command == '=') {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == 'x') {
            std::cout << "До свидания!" << std::endl;
            break;
        }

    }

    return 0;
}