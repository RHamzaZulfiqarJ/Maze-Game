#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <thread>
#include <chrono>

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

int main(int argc, char** argv) {

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	
	mazeHeading();

	startMenuInput();

	cout << endl;

	return 0;
}

void levelMenuInput () {
	
	char input = levelMenu();
	
	bool message;
	
	cout << endl << endl;

	switch (input) {
		case '1':
			system("cls");
			printMaze1();
			message = updateMaze1();
			if (message) {	
				system("cls");
				youWon();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			} else {
				system("cls");
				youLost();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			}
			break;

		case '2':
			system("cls");
			printMaze2();
			message = updateMaze2();

			if (message) {	
				system("cls");
				youWon();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			} else {
				system("cls");
				youLost();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			}
			break;

		case '3':
			system("cls");
			printMaze3();
			message = updateMaze3();

			if (message) {	
				system("cls");
				youWon();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			} else {
				system("cls");
				youLost();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			}
			break;

		case '4':
			system("cls");
			printMaze4();
			message = updateMaze4();
			if (message) {	
				system("cls");
				youWon();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			} else {
				system("cls");
				youLost();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			}
			break;

		case '5':
			system("cls");
			printMaze5();
			message = updateMaze5();
			if (message) {	
				system("cls");
				youWon();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			} else {
				system("cls");
				youLost();
				this_thread::sleep_for(chrono::seconds(5));
				system("cls");
			}
			break;
		default:
			cout << "     You entered invalid input";
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
			scoreCard(2000);
			break;
		case '4':
			system("cls");
			quitGame();
			this_thread::sleep_for(chrono::seconds(3));
			exit(0);
			break;
		default:
			cout << "     You entered an invalid option";
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
            break;
    }
    mazeHeading();
    startMenuInput();
}
