// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program calculates the cost of pizza using constants

#include <iostream>
#include <string>

float perimeterSquare(float length) {
    // calculate perimeter
    float perimeter;

    // process
    perimeter = length * 4;

    // output
    return perimeter;
}

int main() {
    // this function gets the user input

    std::string lengthString;
    float lengthSide;
    float perimeter;
    float perimeterCalculated;

    // input
    std::cout << "Enter the length of the side of a square in cm : ";
    std::cin >> lengthString;
    try {
        lengthSide = std::stof(lengthString);
        if (lengthSide > 0) {
            perimeterCalculated = perimeterSquare(lengthSide);
            std::cout << "The perimeter of a square with a side of " <<
                lengthSide << " cm is " << perimeterCalculated << " cm²"
                << std::endl;
        } else {
            std::cout << "\nNegative number entered, please try again."
                << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid number entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
