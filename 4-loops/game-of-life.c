//
// Created by 赵政杰 on 2021/11/1.
//
#include <stdio.h>
#include <unistd.h>

#define SIZE 6
#define ROUND 10

int board[SIZE][SIZE] = {
        {0},
        {0, 1, 1, 0, 0, 0},
        {0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0},
        {0, 0, 0, 1, 1, 0},
        {0}};

int main() {
    /**
     * (extended) old board
     */
    int old_board[SIZE + 2][SIZE + 2];
    for (int row = 0; row < SIZE + 2; ++row) {
        for (int col = 0; col < SIZE + 2; ++col) {
            if (row == 0 || row == SIZE + 1 || col == 0 || col == SIZE + 1) {
                old_board[row][col] == 0;
            } else {
                old_board[row][col] = board[row - 1][col - 1];
            }
        }
    }
    /**
     * print the current configuration
     */


    for (int row = 1; row < SIZE + 1; ++row) {
        for (int col = 1; col < SIZE + 1; ++col) {
            printf("%c ",old_board[row][col] ? '*' : ' ');
        }
        printf("\n");
    }
    /**
     * windows:clrscr() (#include <conio.h>)
     */

    int new_board[SIZE + 2][SIZE + 2];
    for (int round = 0; round < ROUND; round++) {
        for (int row = 1; row < SIZE + 1; ++row) {
            for (int col = 1; col < SIZE + 1; ++col) {
                int neighbours = old_board[row - 1][col - 1]
                                 + old_board[row - 1][col]
                                 + old_board[row - 1][col + 1]
                                 + old_board[row][col - 1]
                                 + old_board[row][col + 1]
                                 + old_board[row + 1][col - 1]
                                 + old_board[row + 1][col]
                                 + old_board[row + 1][col + 1];

                new_board[row][col] =
                        (old_board[row][col] && (neighbours == 2 || neighbours == 3))
                        || (!old_board[row][col] && neighbours == 3);
            }
        }

       /**
        * printf the new configuration
        */
         for (int row = 1; row < SIZE + 1; ++row) {
            for (int col = 1; col < SIZE + 1; ++col) {
                printf("%c ", new_board[row][col] ? '*' : ' ');
            }
             printf("\n");
        }
        sleep(1);

        for (int row = 1; row < SIZE + 1; row++) {
            for (int col = 1; col < SIZE + 1; col++) {
                old_board[row][col] = new_board[row][col];
            }
        }
}

 return 0;
}
