#include <stdio.h>

int main()
{
    int numbers[7] = {10, 20, 30, 40, 50, 60, 70};
    int *num_ptr;

    num_ptr = numbers;

    printf("Printing using pointer arithmetic and dereference:\n");
    // Loop to print elements using *(num_ptr + i)
    for (int i = 0; i < 7; i++)
    {
        printf("%d. %d\n", i + 1, *(num_ptr + i));
    }

    printf("\nPrinting using array subscript notation on pointer:\n");
    // Loop to print elements using num_ptr[i]
    for (int i = 0; i < 7; i++)
    {
        printf("%d. %d\n", i + 1, numbers[i]);
    }

    // Modify the 4th element (index 3) using pointer arithmetic
    *(num_ptr + 3) = 969;

    printf("\nArray after modification (using array name and subscript):\n");
    // Loop to print elements using numbers[i] to verify
    for (int i = 0; i < 7; i++)
    {
        printf("%d. %d\n", i + 1, numbers[i]);
    }

    return 0;
}

/*
    NOTE: we cannot use sizeof(array) here because sizeof takes 28UL as an argument.
    And, when we pass the int array to the size of int will be promoted to the unsigned long
    and it will takes 28 bytes in memory resulting the array length as 28.
*/