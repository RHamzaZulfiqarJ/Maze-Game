#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

#include "Globals.h"

#include "Layout.h"

#include "Level1.h"
#include "Level2.h"
#include "Level3.h"
#include "Level4.h"
#include "Level5.h"

using namespace std;

void startMenuInput();
void levelMenuInput();
void settingMenuInput();

int SCORE;

int main(int argc, char** argv) {

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	
	mazeHeading();

	startMenuInput();

	cout << endl;

	return 0;
}

void levelMenuInput () {
	
	char input = levelMenu();

	bool message1 = true;
	bool message2 = true;
	bool message3 = true;
	bool message4 = true;
	bool message5 = true;

	cout << endl << endl;

	switch (input) {
		case '1':
			system("cls");
			printMaze1();
			message1 = updateMaze1();
			if (message1) {	
				system("cls");
				youWon();
				Sleep(3000);
				system("cls");
			} else {
				system("cls");
				youLost();
				Sleep(3000);
				system("cls");
			}
			break;

		case '2':
			system("cls");
			printMaze2();
			message2 = updateMaze2();
			if (message2) {
				system("cls");
				youWon();
				Sleep(3000);
				system("cls");
			} else {
				system("cls");
				youLost();
				Sleep(3000);
				system("cls");
			}
			break;

		case '3':
			system("cls");
			printMaze3();
			message3 = updateMaze3();

			if (message3) {	
				system("cls");
				youWon();
				Sleep(3000);
				system("cls");
			} else {
				system("cls");
				youLost();
				Sleep(3000);
				system("cls");
			}
			break;

		case '4':
			system("cls");
			printMaze4();
			message4 = updateMaze4();
			if (message4) {	
				system("cls");
				youWon();
				Sleep(3000);
				system("cls");
			} else {
				system("cls");
				youLost();
				Sleep(3000);
				system("cls");
			}
			break;

		case '5':
			system("cls");
			printMaze5();
			message5 = updateMaze5();
			if (message5) {	
				system("cls");
				youWon();
				Sleep(3000);
				system("cls");
			} else {
				system("cls");
				youLost();
				Sleep(3000);
				system("cls");
			}
			break;
		default:
			cout << "     You entered invalid input";
			system("cls");
	}
	
	mazeHeading();
	startMenuInput();
}

void startMenuInput () {

	int input = startMenu();
	cout << endl << endl;

	switch (input) {
		case '1':
			system("cls");
			mazeHeading();
			levelMenuInput();
			break;
		case '2':
			system("cls");
			mazeHeading();
			settingMenuInput();
			break;
		case '3':
			system("cls");
			mazeHeading();
			scoreCard(SCORE);
			Sleep(3000);
			system("cls");
			mazeHeading();
			startMenuInput();
			break;
		case '4':
			system("cls");
			quitGame();
			Sleep(3000);
			exit(0);
			break;
		default:
			cout << "     You entered an invalid option";
			system("cls");
	}
}

void settingMenuInput () {

	char value = settingMenu();

	cout << endl << endl;

    switch (value) {
        case '1':
        	system("cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            break;
        case '2':
        	system("cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            break;
        case '3':
        	system("cls");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            break;
        default:
            cout << "Invalid color code. Using default color." << endl;
			system("cls");
            break;
    }
    mazeHeading();
    startMenuInput();
}
