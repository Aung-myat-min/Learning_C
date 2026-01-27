#include <stdio.h>

void print_char_n_times(char character, int times);

int main()
{
    print_char_n_times('W', 5);
    return 0;
}

void print_char_n_times(char character, int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("%c", character);
    }
    printf("\n");
}