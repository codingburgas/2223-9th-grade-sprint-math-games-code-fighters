#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

int playGameOne() //This is the main function in this header file. 
{                 //It's called playGameOne so there aren't more than one functions called main
    srand(time(nullptr)); // Seed the random number generator

    std::cout << "Welcome to the math game!\n";
    std::cout << "You will be given two random numbers between 0 and 15, and you must guess their sum.\n";
    std::cout << "You have three attempts. Good luck!\n\n";

    int num1 = rand() % 16; // Generate random number between 0 and 15
    int num2 = rand() % 16; // Generate random number between 0 and 15
    int sum = num1 + num2; // Calculate the sum

    int guess;
    int attempts = 0;

    while (attempts < 3) {
        std::cout << "Attempt " << attempts + 1 << ": ";
        std::cin >> guess;

        if (guess == sum) {
            std::cout << "Congratulations! You guessed the correct answer.\n";
            break;
        }
        else {
            std::cout << "Incorrect. Please try again.\n";
        }

        attempts++;
    }

    if (attempts == 3) {
        std::cout << "Sorry, you didn't guess the correct answer. The correct answer was " << sum << ".\n";
    }

    return 0;
}
