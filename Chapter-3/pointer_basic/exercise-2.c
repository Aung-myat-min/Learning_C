#include <stdio.h>

int main()
{
    float price = 99.99;
    char status_code = 'P';
    float *p_price = &price;
    char *p_status = &status_code;

    printf("The original value of price: %.2f\n", *p_price);
    printf("The original value of status code: %c\n", *p_status);

    *p_price = 125.50;
    *p_status = 'C';

    printf("New price value: %.2f\n", price);
    printf("New status code: %c\n", status_code);
    return 0;
}