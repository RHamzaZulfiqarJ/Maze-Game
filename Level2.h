#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <iomanip>
#include <thread>

#include "Globals.h"

#include "Layout.h"

using namespace std;

void printMaze2 ();
bool updateMaze2 ();

char maze2[21][21] = {
    {'#', 'S', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    {'#', '^', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#'},
    {'#', ' ', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', '#', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#'},
    {'#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#'},
    {'#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#', '#', '#'},
    {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#'},
    {'#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#'},
    {'#', '#', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#'},
    {'#', '#', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', 'E'},
    {'#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', '#', '#'},
    {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#'},
    {'#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#'},
    {'#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#'},
    {'#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#'},
    {'#', '#', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#'},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
};

int h2 = 0;
int m2 = 0;
int s2 = 0;

void timer2() {
    while (true) {
        s2 += 1;
        Sleep(1000);
        if (s2 > 59) {
            m2 += 1;
            s2 = 0;
        }
        if (m2 > 59) {
            h2 += 1;
            m2 = 0;
        }
    }
}

void printMaze2() {

    const int N = 21;
    const int M = 21;
	
	system("cls");
	mazeHeading();
    instructions();
    timerMenu(h2, m2, s2);

    for (int i = 0; i < N; i++) {
        for (int spaces = 0; spaces < 35; spaces++) {
            cout << " ";
        }
        for (int j = 0; j < M; j++) {
            cout << maze2[i][j] << " ";
        }
        cout << endl;
   }

}

bool gameRunning2 = true;


bool updateMaze2() {
    
    int playerX = 1;
    int playerY = 1;

    const int N = 21;
    const int M = 21;
    
    bool WinOrLose;
    gameRunning2 = true;

    thread timerThread(timer2);
    timerThread.detach(); // Detach the thread to run independently
    
	char move;

    while (gameRunning2) {
        move = _getch();

        int prevPlayerX = playerX;
        int prevPlayerY = playerY;
        
        if (maze2[11][19] == '^') {
            SCORE = SCORE + 2000 - (m2 * 200);
        	WinOrLose = true;
        	gameRunning2 = false;        	
		} else {
			WinOrLose = false;
		}

        switch (move) {
            case 'w':
                if (maze2[playerY - 1][playerX] != '#') {
                    playerY--;
                }
                break;
            case 's':
                if (maze2[playerY + 1][playerX] != '#') {
                    playerY++;
                }
                break;
            case 'a':
                if (maze2[playerY][playerX - 1] != '#') {
                    playerX--;
                }
                break;
            case 'd':
                if (maze2[playerY][playerX + 1] != '#') {
                    playerX++;
                }
                break;
            case 'q':
                gameRunning2 = false;
                break;
        }

        maze2[prevPlayerY][prevPlayerX] = ' ';
        maze2[playerY][playerX] = '^';
        printMaze2();
    }
    
    return WinOrLose;
}
