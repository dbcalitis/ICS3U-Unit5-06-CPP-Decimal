// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program rounds numbers

#include <iostream>
#include <cmath>
#include <string>

float RoundNumber(float &enteredInput, int decimalInput) {
    // This function rounds numbers with decimals
    float roundedNumFloat = enteredInput * pow(10.0, decimalInput);
    int roundedNumInt = static_cast<int>(roundedNumFloat + 0.5);
    roundedNumFloat = roundedNumInt / pow(10.0, decimalInput);

    enteredInput = roundedNumFloat;
}

int main() {
    // This function is the main function
    std::string enteredInputString;
    std::string decimalInputString;
    float enteredInput;
    int decimalInput;

    // input & process
    try {
        std::cout << "Enter a number you want to round: ";
        getline(std::cin, enteredInputString);
        enteredInput = std::stof(enteredInputString);

        std::cout << "Enter how many decimal places you want to round by: ";
        getline(std::cin, decimalInputString);
        decimalInput = std::stoi(decimalInputString);

        // call function
        RoundNumber(enteredInput, decimalInput);

        // output
        std::cout << "\nThe rounded number is " << enteredInput << std::endl;
    } catch(...) {
        std::cout << "\nInvalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
