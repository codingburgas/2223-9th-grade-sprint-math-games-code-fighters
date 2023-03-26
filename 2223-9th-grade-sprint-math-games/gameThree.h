#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

void generate_question(int* num1, int* num2, int* op)
{
    *num1 = rand() % 256;
    *num2 = rand() % 256;
    *op = rand() % 4;
}

bool validate_answer(int result, int answer)
{
    return (result == answer);
}

int playGameThree()
{
    srand(time(nullptr));

    int score = 0;
    int numQuestions = 10;
    int numAttempts = 3;

    std::cout << "Welcome to the Bitwise Math Quiz!" << std::endl;
    std::cout << "You will be given " << numQuestions << " questions to answer." << std::endl;

    for (int i = 0; i < numQuestions; i++)
    {
        int num1, num2, op;
        generate_question(&num1, &num2, &op);

        int result;
        std::string operatorStr;

        switch (op)
        {
        case 0:
            result = num1 & num2;
            operatorStr = " & ";
            break;
        case 1:
            result = num1 | num2;
            operatorStr = " | ";
            break;
        case 2:
            result = num1 ^ num2;
            operatorStr = " ^ ";
            break;
        case 3:
            result = ~num1;
            operatorStr = "~";
            break;
        }

        std::cout << "Question " << (i + 1) << "/" << numQuestions << ": ";
        std::cout << num1 << operatorStr << num2 << " = ?" << std::endl;

        int answer;
        bool answeredCorrectly = false;

        for (int j = 0; j < numAttempts; j++)
        {
            std::cout << "Attempt " << (j + 1) << "/" << numAttempts << ": ";
            std::cin >> answer;

            if (validate_answer(result, answer))
            {
                std::cout << "Correct!" << std::endl;
                answeredCorrectly = true;
                break;
            }
            else
            {
                std::cout << "Incorrect. Please try again." << std::endl;
            }
        }

        if (answeredCorrectly)
        {
            score++;
        }
    }

    std::cout << "Game over. Your score is " << score << "/" << numQuestions << "." << std::endl;

    return 0;
}
