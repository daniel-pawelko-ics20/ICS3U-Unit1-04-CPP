// Copyright (c) 2021 Daniel Pawelko All rights reserved
//
// Created by: Daniel Pawelko
// Created on: Sep 2020
// This program calculates the area and perimeter of a rectangle
//    with dimensions 5cm x 3cm

#include <iostream>

int main() {
    std::cout << "If a rectangle has the dimensions: " << std::endl;
    std::cout << "Length: 5cm" << std::endl;
    std::cout << "Width: 3cm" << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (5 * 3) << "cm²." << std::endl;
    std::cout << "Perimeter is " << (2 * (5 + 3)) << "cm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
