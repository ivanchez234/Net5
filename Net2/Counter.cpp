#include <iostream>
#include "Header.h"


Counter::Counter() {
    count = 1;
}

Counter::Counter(int value) {
    count = value;
}

void Counter::increment() {
    count++;
}

void Counter::decrement() {
    count--;
}

int Counter::getValue() const {
    return count;
}