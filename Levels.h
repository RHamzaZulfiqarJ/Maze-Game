#include <iostream>
#include <conio.h>
#include <cstdlib>

#include "Layout.h"

using namespace std;

int playerX = 1;
int playerY = 1;

bool gameRunning = true;

void print_maze(char maze[][50]) {
	
	const int N = 15;
    const int M = 50;
	
	system("cls");
	mazeHeading();
    for (int i = 0; i < N; i++) {
    	cout << "     ";
        for (int j = 0; j < M; j++) {
            cout << maze[i][j] << " ";
        }
        cout << endl;
   }
   maze[playerY][playerX] = '^';
}

bool updateMaze (char maze[][50]) {
	
	const int N = 15;
    const int M = 50;
    
    bool WinOrLose = false;
    
	char move;

    while (gameRunning) {
        move = _getch();

        int prevPlayerX = playerX;
        int prevPlayerY = playerY;
        
        if (maze[13][48] == '^') {
        	WinOrLose = true;
        	gameRunning = false;        	
		}

        switch (move) {
            case 'w':
                if (maze[playerY - 1][playerX] != '#') {
                    playerY--;
                }
                break;
            case 's':
                if (maze[playerY + 1][playerX] != '#') {
                    playerY++;
                }
                break;
            case 'a':
                if (maze[playerY][playerX - 1] != '#') {
                    playerX--;
                }
                break;
            case 'd':
                if (maze[playerY][playerX + 1] != '#') {
                    playerX++;
                }
                break;
            case 'q':
                gameRunning = false;
                break;
        }

        maze[prevPlayerY][prevPlayerX] = ' ';
        maze[playerY][playerX] = '^';
        print_maze(maze);
    }
    
    return WinOrLose;
}
