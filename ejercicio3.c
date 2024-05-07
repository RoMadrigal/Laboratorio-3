
#include <stdio.h>

#include <stdlib.h>


#define MAX_SIZE 10


int findLargestSquare(int matrix[][MAX_SIZE], int size) {
    int dp[MAX_SIZE][MAX_SIZE] = {0};
    int maxSquareSize = 0;

