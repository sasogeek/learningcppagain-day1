//
// Created by Samuel Mensah on 01/11/2024.
//

#include <iostream>
#include "day2.h"

void day2_1() {
    int x, y, z;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';
}

void doNothing(int&) {}
void day2_2() {
    int x;
    doNothing(x);
    std::cout << x << '\n';
}