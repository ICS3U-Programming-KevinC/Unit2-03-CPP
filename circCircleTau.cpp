// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Sep. 14, 2022
// This program prints "Hello, World!" and has comments

#include <iostream>
#include <cmath>

int main() {
    // Initializes tau constant
    const float TAU = 2 * M_PI;

    // Initialises radius variable
    float radius;

    // Asks user for radius then outputs circumference
    std::cout << "What is the radius of your circle? ";
    std::cin >> radius;
    std::cout << "The circumference of your circle is: 𝞽 * radius = ";
    std::cout << (TAU * radius) << "cm" << std::endl;
}
