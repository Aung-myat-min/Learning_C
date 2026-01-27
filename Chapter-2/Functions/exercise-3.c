#include <stdio.h>

double find_max(double num1, double num2);

int main()
{
    printf("In 6 and 4, bigger one is %.2f.\n", find_max(6, 4));
    printf("In 4 and 4, bigger one is %.2f.\n", find_max(4, 4));
    printf("In 4 and -4, bigger one is %.2f.\n", find_max(4, -4));
    return 0;
}

double find_max(double num1, double num2)
{
    if (num1 >= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}