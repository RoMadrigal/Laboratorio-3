
#include <stdio.h>

#include <stdlib.h>

#define MAX_SIZE 10


int findLargestSquare(int matrix[][MAX_SIZE], int size) {
    int am[MAX_SIZE][MAX_SIZE] = {0};
    int maxSquareSize = 0;

    for (int i = 0; i < size; i++) {
        am[i][0] = matrix[i][0];
        am[0][i] = matrix[0][i];
        if (am[i][0] == 1 || am[0][i] == 1) {
            maxSquareSize = 1;
        }
    }


