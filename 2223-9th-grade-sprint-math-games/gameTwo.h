#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

int playGameTwo() //This is the main function in this header file. 
{                 //It's called playGameTwo so there aren't more than one functions called main
    srand(time(nullptr)); // Seed the random number generator

    std::cout << "Welcome to the math game!\n";
    std::cout << "You will be given two random numbers between 10 and 99, and you must solve their multiplication.\n";
    std::cout << "You have three attempts. Good luck!\n\n";

    int num1 = rand() % 90 + 10; // Generate random number between 10 and 99
    int num2 = rand() % 90 + 10; // Generate random number between 10 and 99
    int product = num1 * num2; // Calculate the product

    int guess;
    int attempts = 0;

    while (attempts < 3) {
        std::cout << "Attempt " << attempts + 1 << ": ";
        std::cin >> guess;

        if (guess == product) {
            std::cout << "Congratulations! You solved the problem.\n";
            break;
        }
        else {
            std::cout << "Incorrect. Please try again.\n";
        }

        attempts++;
    }

    if (attempts == 3) {
        std::cout << "Sorry, you didn't solve the problem. The correct answer was " << product << ".\n";
    }

    return 0;
}
