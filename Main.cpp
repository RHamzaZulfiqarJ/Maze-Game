#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void startGame () {
	char input = ' ';

	cout << "     ____________________________________________________________________________________________________" << endl << endl;

	cout << "                             _____________________________________________________         "<< endl;
	cout << "                            |                                                     |        "<< endl;
	cout << "                            |    Press the number of level to start that level:   |        "<< endl;
	cout << "                            |    1. Level 1                                       |        "<< endl;
	cout << "                            |    2. Level 2                                       |        "<< endl;
	cout << "                            |    3. Level 3                                       |        "<< endl;
	cout << "                            |    4. Level 4                                       |        "<< endl;
	cout << "                            |_____________________________________________________|        "<< endl << endl;

	cout << "     ____________________________________________________________________________________________________" << endl << endl;

	cout << "     Enter your input here : ";
	input = getche();
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

void changeSettings () {

	char value = ' ';

    cout << "     ____________________________________________________________________________________________________" << endl << endl;
	cout << "                             _____________________________________________________         "<< endl;
	cout << "                            |                                                     |        "<< endl;
	cout << "                            |  Press Corresponding value to change color of game  |        "<< endl;
	cout << "                            |  1. Red                                             |        "<< endl;
	cout << "                            |  2. Green                                           |        "<< endl;
	cout << "                            |  3. Blue                                            |        "<< endl;
	cout << "                            |_____________________________________________________|        "<< endl << endl;

	cout << "     ____________________________________________________________________________________________________" << endl << endl;
    cout << "     Enter your input here : ";
	value = getche();

    switch (value) {
        case '1':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            break;
        case '2':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            break;
        case '3':
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            break;
        default:
            cout << "Invalid color code. Using default color." << endl;
            break;
    }
}

void scoreChecker () {
	cout << "     ____________________________________________________________________________________________________" << endl << endl;
	cout << "                             _____________________________________________________         "<< endl;
	cout << "                            |                                                     |        "<< endl;
	cout << "                            |  Press Corresponding value to change color of game  |        "<< endl;
	cout << "                            |  1. Red                                             |        "<< endl;
	cout << "                            |  2. Green                                           |        "<< endl;
	cout << "                            |  3. Blue                                            |        "<< endl;
	cout << "                            |_____________________________________________________|        "<< endl << endl;

	cout << "     ____________________________________________________________________________________________________" << endl << endl;
}

char startMenu () {
	char value = ' ';

	cout << "                             _____________________________________________________         "<< endl;
	cout << "                            |                                                     |        "<< endl;
	cout << "                            |               To Start game, Press 1                |        "<< endl;
	cout << "                            |               To Change Settings, Press 2           |        "<< endl;
	cout << "                            |               To View Scores, Press 3               |        "<< endl;
	cout << "                            |               To Quit Game, Press 4                 |        "<< endl;
	cout << "                            |_____________________________________________________|        "<< endl << endl;

	cout << "     ____________________________________________________________________________________________________" << endl << endl;

	cout << "     Enter your input here : ";
	value = getche();
	return value;
}

void inputChecker () {

	int input = startMenu();
	cout << endl << endl;

		switch (input) {
			case '1':
				startGame();
				break;
			case '2':
				changeSettings();
				break;
			case '3':
				cout << "     You pressed 3";
				break;
			case '4':
				cout << "     You pressed 4";
				break;
			default:
				cout << "     You entered an invalid option";
		}
}

int main(int argc, char** argv) {

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);

	cout << "     ____________________________________________________________________________________________________ " << endl;
	cout << "     |                                                                                                  | " << endl;
	cout << "     |  **      **       **      *******   *******         ********      **      * *      **  *******   | " << endl;
	cout << "     |  * *    * *      *  *          *    *               *            *  *     *  *    * *  *         | " << endl;
	cout << "     |  *  *  *  *     *    *        *     *               *           *    *    *   *  *  *  *         | " << endl;
	cout << "     |  *   **   *    ********      *      *******         *   ****   ********   *    **   *  *******   | " << endl;
	cout << "     |  *        *   *        *    *       *               *      *  *        *  *         *  *         | " << endl;
	cout << "     |  *        *  *          *  *******  *******         ******** *          * *         *  *******   | " << endl;
	cout << "     |__________________________________________________________________________________________________| " << endl << endl;

	cout << "     _____________________________________________________________________________________________________" << endl;
	cout << "     _____________________________________________________________________________________________________" << endl << endl;

	inputChecker();

	cout << endl;

	return 0;
}
