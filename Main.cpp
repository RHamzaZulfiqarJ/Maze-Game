#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

#include "Layout.h"

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
	
	cout << endl << endl;

	switch (input) {
		case '1':
			cout << "     You pressed 1";
			break;
		case '2':
			cout << "     You pressed 2";
			break;
		case '3':
			cout << "     You pressed 3";
			break;
		case '4':
			cout << "     You pressed 4";
			break;
		default:
			cout << "     You entered invalid input";
	}
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
			cout << "     You pressed 4";
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
