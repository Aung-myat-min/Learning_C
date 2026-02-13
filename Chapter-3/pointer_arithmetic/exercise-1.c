#include <stdio.h>

int sum_arr(int *arr, int size);

int main()
{
    int sample_arr[] = {1, 2, 3, 4, 5};
    int total = sum_arr(sample_arr, 5);

    printf("The total is %d\n", total);

    return 0;
}

int sum_arr(int *arr, int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += *(arr + i);
    }

    return total;
}