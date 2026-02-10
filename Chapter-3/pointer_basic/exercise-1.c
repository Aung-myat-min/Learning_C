#include <stdio.h>

int main()
{
    int item_count = 50;
    int *p_count = &item_count;

    printf("Original Value of IC: %d\n", item_count);
    printf("The vale that pointer points: %d\n", *p_count);
    printf("The address of IC: %p\n", &item_count);
    printf("The value of pointer: %p\n", p_count);

    *p_count = 75;
    printf("The new value of IC: %d\n", item_count);
    return 0;
}