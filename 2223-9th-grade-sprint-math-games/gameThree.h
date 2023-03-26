#pragma once
#include <iostream>
using namespace std;

bool start = true;
string strStrart;

int countGameThree = 1;

int gameThreeAnswerBoxX = 0;
int gameThreeAnswerBoxY = 0;

//Boxes containing answers to the task are printed
void gameThreeBox() {
	int gameThreeAnswerBox[4][5]{
	  {3,4,7,1,6},
	  {9,7,5,3,8},
	  {5,9,3,2,8},
	  {35,40,29,51,52}
	};
	if (gameThreeAnswerBoxY <= 4) {
		cout << "[" << gameThreeAnswerBox[gameThreeAnswerBoxX][gameThreeAnswerBoxY] << "]" << " ";
		gameThreeAnswerBoxY = gameThreeAnswerBoxY + 1;
		return gameThreeBox();
	}
	else {
		cout << endl;
	}
}

//Game three
void gameThree() {

	//variables bool

	bool answerTask = false;

	//variables int

	int answerPlayer = 0;
	int gameThreeLive = 5;
	int countGameThreeAnswer = 0;
	int gameThreeAnswer[4]{ 3,5,1,4 };
	int gameThreeX = 0;
	int gameThreeY = 0;
	int gameThree[4][2]{
	  {8,3},//3 11
	  {9,6},//5 15
	  {99,85},//1 14
	  {23,47}//4 70
	};

	int gameThreeAnswerBoxX = 0;
	int gameThreeAnswerBoxY = 0;
	int gameThreeAnswerBox[4][5]{
	  {3,4,7,1,6},
	  {9,7,5,3,8},
	  {5,9,3,2,8},
	  {35,40,29,51,52}
	};

	int countGameThreeEx = 0;
	int gameThreeEx[4]{ 4,7,19,29 };

	int countLineX = 0;
	int countLineY = 0;

	//variables string

	string line[11][1]{
	  {"   -------------"},
	  {"          // "},
	  {"         //  "},
	  {"        //   "},
	  {"       //|   "},
	  {"      // |   "},
	  {"       \\\\    "},
	  {"        \\\\   "},
	  {"         \\\\  "},
	  {"         |\\\\ "},
	  {"         | \\\\"}
	};
	string scales[6][1]{
	  {"         |  "},
	  {"         |  "},
	  {"         |  "},
	  {"        / \\ "},
	  {"       /   \\"},
	  {"      /_____\\"}
	};

	while (countGameThree <= 4) {
		while (answerPlayer != gameThreeAnswer[countGameThreeAnswer]) {
			if (gameThree[gameThreeX][gameThreeY] + gameThree[gameThreeX][gameThreeY + 1] > 100) {
				cout << "   " << gameThree[gameThreeX][gameThreeY] << " - " << gameThree[gameThreeX][gameThreeY + 1] << " = " << gameThreeEx[countGameThreeEx] << " - ?" << endl;
			}
			if (gameThree[gameThreeX][gameThreeY] + gameThree[gameThreeX][gameThreeY + 1] < 100) {
				cout << "   " << gameThree[gameThreeX][gameThreeY] << " + " << gameThree[gameThreeX][gameThreeY + 1] << " = " << gameThreeEx[countGameThreeEx] << " + ?" << endl;
			}

			cout << line[countLineX][countLineY] << endl;
			for (int x = 0, y = 0; x < 6; x++) {
				cout << scales[x][y] << endl;
			}
			cout << endl;
			gameThreeBox();
			cout << endl << "Enter a number from 1 to 5  - ";
			cin >> answerPlayer;
			cout << endl << endl;
			while (answerPlayer < 1 && answerPlayer>5) {
				cout << "You entered a number other than 1 to 5" << endl;
				cout << "Enter a number from 1 to 5  - ";
				cin >> answerPlayer;
				cout << endl;
			}
			if (answerPlayer == gameThreeAnswer[countGameThreeAnswer]) {
				cout << line[countLineX][countLineY] << endl;
				for (int x = 0, y = 0; x < 6; x++) {
					cout << scales[x][y] << endl;
				}
				cout << endl << "  Correct answer" << endl << endl;
				answerTask = true;
			}
			if (gameThree[gameThreeX][gameThreeY] + gameThree[gameThreeX][gameThreeY + 1] > 100) {
				if (gameThree[gameThreeX][gameThreeY] - gameThree[gameThreeX][gameThreeY + 1] < gameThreeAnswerBox[gameThreeAnswerBoxX][answerPlayer - 1] - gameThreeEx[countGameThree] && answerTask == false) {
					for (int x = 6, y = 0; x <= 10; x++) {
						cout << line[x][y] << endl;
					}
					for (int x = 2, y = 0; x < 6; x++) {
						cout << scales[x][y] << endl;
					}
					cout << endl << "  Wrong answer - " << answerPlayer << endl;
					cout << endl << "Lives - " << gameThreeLive - 1 << endl << endl;
					gameThreeLive = gameThreeLive - 1;
				}
				if (gameThree[gameThreeX][gameThreeY] - gameThree[gameThreeX][gameThreeY + 1] > gameThreeAnswerBox[gameThreeAnswerBoxX][answerPlayer - 1] - gameThreeEx[countGameThree]) {
					for (int x = 1, y = 0; x <= 5; x++) {
						cout << line[x][y] << endl;
					}
					for (int x = 2, y = 0; x < 6; x++) {
						cout << scales[x][y] << endl;
					}
					cout << endl << "  Wrong answer - " << answerPlayer << endl;
					cout << endl << "Lives - " << gameThreeLive - 1 << endl << endl;
					gameThreeLive = gameThreeLive - 1;
				}
			}
			if (((gameThree[gameThreeX][gameThreeY] + gameThree[gameThreeX][gameThreeY + 1]) < (gameThreeAnswerBox[gameThreeAnswerBoxX][answerPlayer - 1] + gameThreeEx[countGameThree])) && (answerTask == false)) {
				for (int x = 6, y = 0; x <= 10; x++) {
					cout << line[x][y] << endl;
				}
				for (int x = 2, y = 0; x < 6; x++) {
					cout << scales[x][y] << endl;
				}
				cout << endl << "  Wrong answer - " << answerPlayer << endl;
				cout << endl << "Lives - " << gameThreeLive - 1 << endl << endl;
				gameThreeLive = gameThreeLive - 1;
			}
			if (gameThree[gameThreeX][gameThreeY] + gameThree[gameThreeX][gameThreeY + 1] > gameThreeAnswerBox[gameThreeAnswerBoxX][answerPlayer - 1] + gameThreeEx[countGameThree] && answerTask == false) {
				for (int x = 1, y = 0; x <= 5; x++) {
					cout << line[x][y] << endl;
				}
				for (int x = 2, y = 0; x < 6; x++) {
					cout << scales[x][y] << endl;
				}
				cout << endl << "  Wrong answer - " << answerPlayer << endl;
				cout << endl << "Lives - " << gameThreeLive - 1 << endl << endl;
				gameThreeLive = gameThreeLive - 1;
			}
			if (gameThreeLive == 0) {
				cout << "  You lost";
			}
			if (gameThreeLive > 0 && countGameThree == 4) {
				cout << "  You won" << endl << endl;
				cout << "  Want a new game? Y / N -";
				cin >> strStrart;
				if (strStrart == "Y" || strStrart == "Yes" || strStrart == "YES" || strStrart == "yes" || strStrart == "y") {
					start = true;
				}
				if (strStrart == "N" || strStrart == "No" || strStrart == "NO" || strStrart == "no" || strStrart == "n") {
					start = false;
				}
				if (strStrart != "Y" || strStrart != "Yes" || strStrart != "YES" || strStrart != "yes" || strStrart != "y" || strStrart != "N" || strStrart != "No" || strStrart != "NO" || strStrart != "no" || strStrart != "n") {
					while (strStrart != "Y" || strStrart != "Yes" || strStrart != "YES" || strStrart != "yes" || strStrart != "y" || strStrart != "N" || strStrart != "No" || strStrart != "NO" || strStrart != "no" || strStrart != "n") {
						cout << "  Want a new game? Y / N -";
						cin >> strStrart;
						if (strStrart == "Y" || strStrart == "Yes" || strStrart == "YES" || strStrart == "yes" || strStrart == "y") {
							start = true;
						}
						if (strStrart == "N" || strStrart == "No" || strStrart == "NO" || strStrart == "no" || strStrart == "n") {
							start = false;
						}
					}
					cout << endl;
				}
				cout << endl;
			}
		}
		countLineX = 0;
		gameThreeX = gameThreeX + 1;
		answerPlayer = 0;
		gameThreeAnswerBoxX = gameThreeAnswerBoxX + 1;
		countGameThreeAnswer = countGameThreeAnswer + 1;
		countGameThree = countGameThree + 1;
	}
}

int playGameThree(){
	while (start == true) 
	{
		gameThree();
	}
}