// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Nov.1, 2022
// This program calculates the factorial value of an integer.

#include <iostream>
#include <string>

int main() {
    // Initializing variables
    int wait;
    int counter = 0;
    int factorialAns = 1;
    std::string userStrNum;
    int userInt;

    // Asks the user for an integer
    std::cout << "Enter a positive integer:\n";
    std::cout << ">> ";
    std::cin >> userStrNum;
    std::cout << "\n";

    // Checks if there is a decimal in the user's number
    if (userStrNum.find('.') != std::string::npos) {
        std::cout << "You must enter a whole number.\n";
        std::cout << "Please restart.\n";
        std::cin >> wait;
    }

    // Tries casting the user's number to an integer
    try {
        userInt = std::stoi(userStrNum);

        // Tells the user to restart if they did not enter a number.
    } catch (const std::exception) {
        std::cout << "You must enter a positive integer.\n";
        std::cout << "Please try again.";
        std::cin >> wait;
    }

    // Tells the user to restart if they entered a negative number.
    if (userInt < 0) {
        std::cout << "You must enter a positive integer\n";
        std::cout << "Please try again.\n";
        std::cin >> wait;
    }

    // Loops through body code until the counter is greater than
    // the user's number.
    do {
        counter++;
        factorialAns *= counter;
        std::cout << "Looped through " << counter;
        std::cout << " times.\n";
    } while (counter < userInt);

    // Outputs the factorial value of the user's number.
    std::cout << "\n";
    std::cout << userInt << "! = " << factorialAns << "\n";
}
