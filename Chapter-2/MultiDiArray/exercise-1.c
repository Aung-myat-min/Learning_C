#include <stdio.h>

#define ROW 3
#define COLUMN 3

int main()
{
    int matrixA[ROW][COLUMN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int matrixB[ROW][COLUMN] = {
        {4, 5, 6},
        {7, 1, 4},
        {6, 8, 3}};

    printf("--- Matrix A ---\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf(" %d ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("--- Matrix B ---\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf(" %d ", matrixB[i][j]);
        }
        printf("\n");
    }

    return 0;
}