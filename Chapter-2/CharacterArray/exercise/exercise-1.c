#include <stdio.h>

int main()
{
    char product_code[8] = "ABC1234";

    printf("The original string: '%s'.\n", product_code);

    product_code[2] = 'X';

    printf("The modified string: '%s'.\n", product_code);

    return 0;
}