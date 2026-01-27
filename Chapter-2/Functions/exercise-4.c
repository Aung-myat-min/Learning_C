#include <stdio.h>

double power(int base, int exp);

int main()
{
    printf("2 to the power of 3 is %.2f.\n", power(2, 3));
    printf("6 to the power of 8 is %.2f.\n", power(6, 8));

    return 0;
}

double power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else
    {
        double result = base;
        for (int i = 1; i < exp; i++)
        {
            result *= base;
        }
        return result;
    }
}