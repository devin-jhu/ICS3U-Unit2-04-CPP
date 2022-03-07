// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// The proper format "Hello, World!"

#include <iostream>

int main() {
    // this function calculates circumference
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "enter radius (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "circumference is " << circumference << "mm" << std::endl;
}
