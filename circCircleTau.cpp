// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: March 1, 2025
// Program that calculates the circumference of a circle,
// using tau and user-defined radius

#include <iostream>

int main() {
    // declare tau as a constant
    const float TAU = 6.28;

    // declare variables
    double radius, circumference;

    // Get the radius from the user
    std::cout << "Enter the radius (km): ";
    std::cin >> radius;
    std::cout << std::endl;

    // Calculate the circumference
    circumference = TAU * radius;

    // Display the circumference
    std::cout << "The Circumference is " << circumference;
    std::cout << "km";
    std::cout << std::endl;
}
