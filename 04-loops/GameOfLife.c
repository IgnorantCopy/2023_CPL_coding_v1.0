//
// Created by Ignorant on 2023/10/20.
//

/*
 * rules of the game:
 *  1.Any live cell with two or three live neighbours survives.
 *  2.All other live cells die in the next generation.
 *  3.Any dead cell with three live neighbours becomes a live cell.
 *  4.All other dead cells stay dead.
 */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define SIZE 6

const int board[SIZE][SIZE] = {
        {0},
        {0, 1, 1, 0, 0, 0},
        {0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0},
        {0, 0, 0, 1, 1, 0},
        {0}
};

int main() {
    // expand the board(to solve the problem of the boundaries)
    int oldBoard[SIZE + 2][SIZE + 2] = {0};
    // copy the original board
    for (int i = 1; i <= SIZE; i++) {
        for (int j = 1; j <= SIZE; j++) {
            oldBoard[i][j] = board[i - 1][j - 1];
        }
    }
    // print the oldBoard
    for (int i = 1; i <= SIZE; i++) {
        for (int j = 1; j < SIZE; j++) {
            printf("%c ", oldBoard[i][j] ? '*' : ' ');
        }
        printf("\n");
    }
    int newBoard[SIZE + 2][SIZE + 2] = {0};
    for (int i = 0; i < 10; i++) {
        for (int j = 1; j < SIZE; j++) {
            for (int k = 1; k < SIZE; k++) {
                // count live cells in the neighbour board[i][j]
                int neighbours = oldBoard[j - 1][k - 1] + oldBoard[j - 1][k] +
                                oldBoard[j - 1][k + 1] + oldBoard[j][k - 1] +
                                oldBoard[j][k + 1] + oldBoard[j + 1][k - 1] +
                                oldBoard[j + 1][k] + oldBoard[j + 1][k + 1];
                // update the board: apply the rules
                if (oldBoard[j][k]) {
                    newBoard[j][k] = (neighbours == 2 || neighbours == 3);
                } else {
                    newBoard[j][k] = (neighbours == 3);
                }
            }
        }
        // print the new board
        for (int i = 1; i <= SIZE; i++) {
            for (int j = 1; j < SIZE; j++) {
                printf("%c ", newBoard[i][j] ? '*' : ' ');
            }
            printf("\n");
        }
        Sleep(1000);
        system("cls");
        // swap oldBoard and newBoard
        for (int i = 1; i <= SIZE; i++) {
            for (int j = 1; j <= SIZE; j++) {
                oldBoard[i][j] = newBoard[i][j];
            }
        }
    }
    return 0;
}
