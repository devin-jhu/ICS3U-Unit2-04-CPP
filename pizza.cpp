// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// The pizza cost calculator

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost of a pizza
    const float rent = 1;
    const float labor = 0.75;
    const float cost_per_inch = 0.5;
    const float HST = 0.13;
    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "enter pizza diameter: ";
    std::cin >> diameter;

    // process
    sub_total = labor + rent + (diameter * cost_per_inch);
    total = sub_total + (sub_total * HST);

    // output
    std::cout << "" << std::endl;
    std::cout << "The final cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done" << std::endl;
}
