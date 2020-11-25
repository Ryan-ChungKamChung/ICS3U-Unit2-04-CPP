// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in November 2020
// Program calculating the cost of a pizza

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost of a pizza
    float diameter;
    float sub_total;
    float total;
    const float RENT = 1;
    const float LABOUR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;

    // Input
    std::cout << "What diameter pizza would you like? (inch): ";
    std::cin >> diameter;

    // Process
    sub_total = RENT + LABOUR + (diameter * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // Output
    std::cout << "The final cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
}
