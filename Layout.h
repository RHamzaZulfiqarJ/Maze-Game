#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

void mazeHeading ();
void youWon ();
void youLost ();
void quitGame ();
char startMenu ();
char settingMenu ();
char levelMenu ();
void scoreCard (int score);
int timerView (int h, int m, int s);
void timerMenu (int h, int m, int s);
void instructions();

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

void instructions () {
	cout << "      ____________________________________________________________________________________________________  " << endl;
	cout << "     |                                                                                                    | " << endl;
	cout << "     |                                          HOW TO PLAY THE GAME:                                     | " << endl;
	cout << "     |                                                                                                    | " << endl;
	cout << "     |                              -> Press A for moving the character (^) left.                         | " << endl;
	cout << "     |                              -> Press W for moving the character (^) up.                           | " << endl;
	cout << "     |                              -> Press D for moving the character (^) right.                        | " << endl;
	cout << "     |                              -> Press S for moving the character (^) down.                         | " << endl;   
	cout << "     |                              -> Press Q to quit the game.                                          | " << endl;             
	cout << "     |____________________________________________________________________________________________________| " << endl;
}

int timerView (int h, int m, int s) {
	cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s;
	return 0;
}

void timerMenu (int h, int m, int s) {
	cout << "      __________________________________________________________________________________________________  " << endl;
	cout << "     |                                                                                                  | " << endl;
	cout << "     |                                             " << timerView(h, m, s) << "\b                                             | " << endl;
	cout << "     |__________________________________________________________________________________________________| " << endl << endl;
}

void youWon() {
	cout << "     ____________________________________________________________________________________________________" << endl;
	cout << "     |                                                                                                  |" << endl;
	cout << "     |           *     *  *******   *      *             *         *   ********    *      *             |" << endl;
	cout << "     |            *   *   *     *   *      *             *    *    *   *      *    * *    *             |" << endl;
	cout << "     |             * *    *     *   *      *             *   * *   *   *      *    *  *   *             |" << endl;
	cout << "     |              *     *     *   *      *             *  *   *  *   *      *    *   *  *             |" << endl;
	cout << "     |              *     *     *   *      *             * *     * *   *      *    *    * *             |" << endl;
	cout << "     |              *     *******   ********             *         *   ********    *      *             |" << endl;
	cout << "     |__________________________________________________________________________________________________|" << endl << endl;
}

void youLost() {
	cout << "     ____________________________________________________________________________________________________" << endl;
	cout << "     |                                                                                                  |" << endl;
	cout << "     |        *     *  *******   *      *             *           *******   *******    *********        |" << endl;
	cout << "     |         *   *   *     *   *      *             *           *     *   *              *            |" << endl;
	cout << "     |          * *    *     *   *      *             *           *     *   *******        *            |" << endl;
	cout << "     |           *     *     *   *      *             *           *     *         *        *            |" << endl;
	cout << "     |           *     *     *   *      *             *           *     *         *        *            |" << endl;
	cout << "     |           *     *******   ********             ********    *******   *******        *            |" << endl;
	cout << "     |__________________________________________________________________________________________________|" << endl << endl;
}

void quitGame() {
	cout << "     _____________________________________________________________________________________________________________" << endl;
	cout << "     |                                                                                                           |" << endl;
	cout << "     |    *******   *     *        **        *      *   *   *   *******           *******   ********   *******   |" << endl;
	cout << "     |       *      *     *       *  *       * *    *   *  *    *                 *         *      *   *     *   |" << endl;
	cout << "     |       *      *     *      *    *      *  *   *   * *     *                 *******   *      *   *******   |" << endl;
	cout << "     |       *      *******     ********     *   *  *   *  *    *******           *         *      *   * *       |" << endl;
	cout << "     |       *      *     *    *        *    *    * *   *   *         *           *         *      *   *   *     |" << endl;
	cout << "     |       *      *     *   *          *   *      *   *    *  *******           *         ********   *     *   |" << endl;
	cout << "     |                                                                                                           |" << endl;
	cout << "     |                     ******  *             **       *     *  *********  *      *  ********                 |" << endl;
	cout << "     |                     *    *  *            *  *       *   *       *      * *    *  *                        |" << endl;
	cout << "     |                     ******  *           *    *       * *        *      *  *   *  *                        |" << endl;
	cout << "     |                     *       *          ********       *         *      *   *  *  *   ****                 |" << endl;
	cout << "     |                     *       *         *        *      *         *      *    * *  *      *                 |" << endl;
	cout << "     |                     *       *******  *          *     *     *********  *      *  ********                 |" << endl;
	cout << "     |___________________________________________________________________________________________________________|" << endl << endl;
}

char startMenu () {
	char value = ' ';
	
	cout << "     ____________________________________________________________________________________________________" << endl << endl;

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
	cout << "                            |    5. Level 5                                       |        "<< endl;
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
	cout << "                            |  Your Total Score : " << setw(4) << setfill(' ') << score << "                            |        "<< endl;
	cout << "                            |_____________________________________________________|        "<< endl << endl;

	cout << "     ____________________________________________________________________________________________________" << endl << endl;
}
