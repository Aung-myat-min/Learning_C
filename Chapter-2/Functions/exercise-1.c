#include <stdio.h>

double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main()
{
    double a = 5;
    double b = 2;

    printf("%.2f + %.2f = %.2f\n", a, b, add(a, b));
    printf("%.2f - %.2f = %.2f\n", a, b, subtract(a, b));
    printf("%.2f * %.2f = %.2f\n", a, b, multiply(a, b));
    printf("%.2f + %.2f = %.2f\n", a, b, divide(a, b));

    return 0;
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}
double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed!.\n");
        return 1;
    }
    else
    {
        return num1 / num2;
    }
}
