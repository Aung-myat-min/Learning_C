#include <stdio.h>

int main()
{
    int numbers[] = {1, 5, 2, 8, 5, 3, 5, 9, 1};
    int count = 0;
    int matching = 5;

    for (int i = 0; i < 9; i++)
    {
        if (matching == numbers[i])
        {
            count++;
        }
    }

    printf("The number (%d) has appeared %d times in the array.\n", matching, count);

    return 0;
}