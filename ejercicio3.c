
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

    for (int i = 1; i < size; i++) {
        for (int j = 1; j < size; j++) {
            if (matrix[i][j] == 1) {
                am[i][j] = 1 + (am[i-1][j] > 0 && am[i][j-1] > 0 && am[i-1][j-1] > 0 ?
                                (am[i-1][j] < am[i][j-1] ? (am[i-1][j] < am[i-1][j-1] ? am[i-1][j] : am[i-1][j-1]) : (am[i][j-1] < am[i-1][j-1] ? am[i][j-1] : am[i-1][j-1])) : 0);
                if (am[i][j] > maxSquareSize) {
                    maxSquareSize = am[i][j];
                }
            }
        }
    }


    return maxSquareSize;
}




int main() {
    int size;
    int matrix[MAX_SIZE][MAX_SIZE];


    printf("Ingrese el numero de filas de la matriz nxn (admite valores entre 1 y 10): ");
    scanf("%d", &size);


    if (size < 1 || size > 10) {
        printf("Tamano no valido. Se utilizara el tamano predeterminado de 5x5.\n");
        size = 5;
    }


    printf("La matriz utilizada corresponde a:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 2;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    int largestSquareSize = findLargestSquare(matrix, size);


    printf("El tamano del cuadrado mas grande de unos es: %dx%d.\n", largestSquareSize, largestSquareSize);


    return 0;
}


