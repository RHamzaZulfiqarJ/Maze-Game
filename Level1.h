#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <iomanip>
#include <thread>

#include "Globals.h"

#include "Layout.h"

using namespace std;

char maze1[17][17] = {
    {'#', 'S', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    {'#', '^', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#'},
    {'#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#'},
    {'#', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '#'},
    {'#', '#', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#'},
    {'#', '#', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#'},
    {'#', '#', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#'},
    {'#', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', 'E'},
    {'#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', '#', '#', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', '#', '#', ' ', '#'},
    {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '#'},
    {'#', ' ', '#', ' ', '#', '#', '#', '#', '#', ' ', '#', ' ', '#', '#', '#', '#', '#'},
    {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
};

int h1 = 0;
int m1 = 0;
int s1 = 0;

void timer1() {
    while (true) {
        s1 += 1;
        Sleep(1000);
        if (s1 > 59) {
            m1 += 1;
            s1 = 0;
        }
        if (m1 > 59) {
            h1 += 1;
            m1 = 0;
        }
    }
}

void printMaze1() {

    const int N = 17;
    const int M = 17;
    
	system("cls");
	mazeHeading();
    instructions();
    timerMenu(h1, m1, s1);

    for (int i = 0; i < N; i++) {
        for (int spaces = 0; spaces < 35; spaces++) {
            cout << " ";
        }
        for (int j = 0; j < M; j++) {
            cout << maze1[i][j] << " ";
        }
        cout << endl;
   }
}

bool gameRunning1 = true;

bool updateMaze1() {

    h1 = 0;
    m1 = 0;
    s1 = 0;
    
    int playerX = 1;
    int playerY = 1;

    const int N = 17;
    const int M = 17;
    
    bool WinOrLose;
    gameRunning1 = true;

    thread timerThread(timer1);
    timerThread.detach(); // Detach the thread to run independently
    
	char move;

    while (gameRunning1) {
        move = _getch();

        int prevPlayerX = playerX;
        int prevPlayerY = playerY;
        
        if (maze1[9][15] == '^') {
            SCORE = SCORE + 2000 - (m1 * 200);
        	WinOrLose = true;
        	gameRunning1 = false;        	
		} else {
			WinOrLose = false;
		}

        switch (move) {
            case 'w':
                if (maze1[playerY - 1][playerX] != '#') {
                    playerY--;
                }
                break;
            case 's':
                if (maze1[playerY + 1][playerX] != '#') {
                    playerY++;
                }
                break;
            case 'a':
                if (maze1[playerY][playerX - 1] != '#') {
                    playerX--;
                }
                break;
            case 'd':
                if (maze1[playerY][playerX + 1] != '#') {
                    playerX++;
                }
                break;
            case 'q':
                gameRunning1 = false;
                break;
        }

        maze1[prevPlayerY][prevPlayerX] = ' ';
        maze1[playerY][playerX] = '^';
        printMaze1();
    }
    
    return WinOrLose;
}
