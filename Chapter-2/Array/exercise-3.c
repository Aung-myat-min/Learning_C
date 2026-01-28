#include <stdio.h>

int main()
{
    int numbers[10] = {5, 12, 3, 20, 8, 15, 1, 10, 7, 18};
    int largest_value;

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            largest_value = numbers[i];
            continue;
        }
        else
        {
            if (largest_value < numbers[i])
            {
                largest_value = numbers[i];
            }
        }
    }

    printf("The Largest value in the array is: %d\n.", largest_value);

    return 0;
}