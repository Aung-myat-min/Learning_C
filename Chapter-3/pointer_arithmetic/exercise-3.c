#include <stdio.h>

int *find_max_ptr(int *arr, int size);

int main()
{
    int sample_arr[] = {4, 5, 1, 5, 34, 5, 56, 2, 0};

    int *largest_ptr = find_max_ptr(sample_arr, 9);
    printf("The largest integer is %d\n", *largest_ptr);
    printf("The largest integer is at %p\n", largest_ptr);

    return 0;
}

int *find_max_ptr(int *arr, int size)
{
    int largest_i = 0;

    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *(arr + largest_i))
        {
            largest_i = i;
        }
    }

    return (arr + largest_i);
}
