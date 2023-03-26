#include <iostream>

#include "gameOne.h"
#include "gameTwo.h"
#include "gameThree.h"

void chooseGame(int num);

int startGame()
{
	int num;
	std::cout << "Hi, hello, welcome to our game!\n\n" << "Type in 1 or 2:\n1 is to choose a game.\n2 is to stop playing\n";
	std::cin >> num;
	while (num != 1 && num != 2)
	{
		std::cout << "WRONG INPUT! YOU SHOULD TYPE IN 1 OR 2\n";
		std::cin >> num;
	}
	if (num == 1)
	{
		std::cout << "Choose a number between 1 and 3 to choose which game you want to play";
		std::cin >> num;
		chooseGame(num);
	}
	else if (num == 2)
	{
		std::cout << "It seems like you don't want to play anymore. We hope you will return to the game. Bye!";
		return 0;
	}
}

void chooseGame(int num)
{
	if (num == 1)
	{
		playGameOne();
		//std::cout << "Call gameOne.h -> main function!";
	}
	else if (num == 2)
	{
		playGameTwo();
		//std::cout << "Call gameTwo.h -> main function!";
	}
	else if (num == 3)
	{
		playGameThree();
		//std::cout << "Call gameThree.h -> main function!";
	}
}