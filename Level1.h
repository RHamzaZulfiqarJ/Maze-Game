#include <iostream>
#include <conio.h>
#include <cstdlib>

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

bool gameRunning1 = true;

void printMaze1() {

    const int N = 17;
    const int M = 17;
    
	system("cls");
	mazeHeading();
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

bool updateMaze1() {
    
    int playerX = 1;
    int playerY = 1;

    const int N = 17;
    const int M = 17;
    
    bool WinOrLose;
        
	char move;

    while (gameRunning1) {
        move = _getch();

        int prevPlayerX = playerX;
        int prevPlayerY = playerY;
        
        if (maze1[9][15] == '^') {
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
