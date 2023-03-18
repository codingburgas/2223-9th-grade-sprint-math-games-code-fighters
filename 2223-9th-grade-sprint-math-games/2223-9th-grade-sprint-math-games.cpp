#include <iostream>
#include <string>
using namespace std;

bool gameOn = true;
int live = 10;

void background() {
    for (int i = 1, y = 1; i <= 14 && y <= 10; i++) {
        cout << "⬜";
        if (i == 14) {
            cout << endl;
            i = 0;
            y = y + 1;
        }
    }
}

void numberBox() {
    cout << "⬜⬜" << "0️ " << "1️ " << "2️ " << "3️ " << "4️ " << "5️ " << "6️ " << "7️ " << "8️ " << "9️ " << "⬜⬜" << endl;
}

void line() {
    string lineNumber = "<━━━╊━━━━╊━━━━━╊━━━╊━━━>";
    cout << "⬜" << lineNumber << "⬜" << endl;
}

void kayakStart() {
    string ship1 = "🚤";
    string ship2 = "⛵";
    cout << "⬜⬜⬜⬜⬜⬜" << ship1 << ship2 << "⬜⬜⬜⬜⬜⬜" << endl;
    //🔵⬜⬛🔵🔺❌✔️
}

void restrictionSign() {
    string sign = "🚫";
    cout << "⬜";
    for (int i = 1; i < 13; i++) {
        cout << sign;
    }
    cout << "⬜";
    cout << endl;
}

void exams(int counterExam = 0) {
    int answer;
    int counterArrX = 0, counterArrY = 0;
    string arr[4][4]{
        {"[12-7]","[]","[]","[]"},
        {"[12-7]","[]","[]","[]"},
        {"[12-7]","[]","[]","[]"},
        {"[12-7]","[]","[]","[]"}
    };
    //for(int count=0; count<4; count++){
    for (int X = counterArrX, Y = counterArrY; X < 1 && Y < 4; Y++) {
        cout << arr[X][Y];
        if (Y == 3) {
            counterArrX = counterArrX + 1;
        }
        //}
    }

    cout << endl << "⬜⬜⬜⬜⬜⬜";
    cin >> answer;
    cout << "⬜⬜⬜⬜⬜⬜" << endl;
    if (counterArrX == 0) {

    }
    if (counterArrX == 1) {

    }
    if (counterArrX == 2) {

    }
    if (counterArrX == 3) {

    }
    else {

    }
}

//0️⃣   1️⃣  2️⃣  3️⃣  4️⃣  5️⃣  6️⃣  7️⃣  8️⃣  9️⃣  ➡  ⬅️  <━╊━╊━╊━╊━╊━╊━╊━╊━╊━╊>
//🚫   🛶  🚣🏾‍♂️  🚣🏽‍♂️
//🟦
int main() {
    while (gameOn != false) {
        background();
        restrictionSign();
        numberBox();
        line();
        kayakStart();
        background();
        exams();
    }
}