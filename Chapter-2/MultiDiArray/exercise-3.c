#include <stdio.h>

#define ROW 5
#define COLUMN 10
char convert_to_img(int number);

int main()
{
    char image[ROW][COLUMN] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 255, 128, 128, 128, 128, 128, 128, 255, 0},
        {0, 128, 255, 128, 128, 128, 128, 255, 128, 0},
        {0, 128, 128, 255, 128, 128, 255, 128, 128, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

    char inverted_img[ROW][COLUMN] = {
        {255, 255, 255, 255, 255, 255, 255, 255, 255, 255},
        {255, 0, 127, 127, 127, 127, 127, 127, 0, 255},
        {255, 127, 0, 127, 127, 127, 127, 0, 127, 255},
        {255, 127, 127, 0, 127, 127, 0, 127, 127, 255},
        {255, 255, 255, 255, 255, 255, 255, 255, 255, 255}};

    printf("--- A Simple Image ---\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf(" %c ", convert_to_img(image[i][j]));
        }
        printf("\n");
    }
    printf("\n");

    printf("--- Inverted Image ---\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf(" %c ", convert_to_img(255 - inverted_img[i][j]));
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

char convert_to_img(int number)
{
    switch (number)
    {
    case 255:
        return '#';
        break;
    case 0:
        return '.';
        break;
    default:
        return '*';
        break;
    }
}
