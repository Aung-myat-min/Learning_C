#include <stdio.h>

int main()
{
    int *safe_ptr = NULL;

    if (safe_ptr != NULL)
    {
        printf("The value of safe_ptr is: %d\n", *safe_ptr);
    }
    else
    {
        printf("The safe ptr is NULL.\n");
    }

    int data_value = 123;
    safe_ptr = &data_value;

    if (safe_ptr != NULL)
    {
        printf("The value of safe_ptr is: %d\n", *safe_ptr);
    }
    else
    {
        printf("The safe ptr is NULL.\n");
    }

    return 0;
}