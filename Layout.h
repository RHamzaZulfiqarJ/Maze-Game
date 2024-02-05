#include <iostream>

using namespace std;

void mazeHeading ();
char startMenu ();
char settingMenu ();
char levelMenu ();
void scoreCard (int score);

void mazeHeading () {
	cout << "     ____________________________________________________________________________________________________ " << endl;
	cout << "     |                                                                                                  | " << endl;
	cout << "     |  **      **       **      *******   *******         ********      **      * *      **  *******   | " << endl;
	cout << "     |  * *    * *      *  *          *    *               *            *  *     *  *    * *  *         | " << endl;
	cout << "     |  *  *  *  *     *    *        *     *               *           *    *    *   *  *  *  *         | " << endl;
	cout << "     |  *   **   *    ********      *      *******         *   ****   ********   *    **   *  *******   | " << endl;
	cout << "     |  *        *   *        *    *       *               *      *  *        *  *         *  *         | " << endl;
	cout << "     |  *        *  *          *  *******  *******         ******** *          * *         *  *******   | " << endl;
	cout << "     |__________________________________________________________________________________________________| " << endl << endl;
}

char startMenu () {
	char value = ' ';
	
	cout << "     _____________________________________________________________________________________________________" << endl;
	cout << "     _____________________________________________________________________________________________________" << endl << endl;

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

char settingMenu () {
	
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
	
	return value;
}

char levelMenu () {
	
	char value = ' ';

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
	value = getche();
	
	return value;
}

void scoreCard (int score) {
	cout << "     ____________________________________________________________________________________________________" << endl << endl;
	
	cout << "                             _____________________________________________________         "<< endl;
	cout << "                            |                                                     |        "<< endl;
	cout << "                            |  The score depends upon the time in which you       |        "<< endl;
	cout << "                            |  complete the maze. Finishing game in low time      |        "<< endl;
	cout << "                            |  means higher score.                                |        "<< endl;
	cout << "                            |                                                     |        "<< endl;
	cout << "                            |  Higest Score so far : " << score << "                         |        "<< endl;
	cout << "                            |_____________________________________________________|        "<< endl << endl;

	cout << "     ____________________________________________________________________________________________________" << endl << endl;
}