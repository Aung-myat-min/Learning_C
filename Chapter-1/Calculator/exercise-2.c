#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    This became the combination of both exercise 2 and 3.
    Because I made the program to be able to calculate based on the previous result.
*/

void print_menu()
{
    printf("Format:\n");
    printf("  number operator number   (e.g. 3 + 2)\n");
    printf("  operator number          (e.g. N 5)\n\n");

    printf("Unary operators:\n");
    printf("  N  - Negation (-x)\n");
    printf("  A  - Absolute value |x|\n");
    printf("  R  - Square root\n");
    printf("  Q  - Square (x^2)\n");
    printf("  C  - Cube (x^3)\n");
    printf("  I  - Reciprocal (1/x)\n");
    printf("  F  - Factorial (x!)\n");
    printf("  L  - Natural log (ln x)\n");
    printf("  S  - Sine\n");
    printf("  O  - Cosine\n");
    printf("  T  - Tangent\n");
    printf("  U  - Ceiling\n");
    printf("  D  - Floor\n\n");

    printf("Binary operators:\n");
    printf("  +  - Addition\n");
    printf("  -  - Subtraction\n");
    printf("  *  - Multiplication\n");
    printf("  /  - Division\n");
    printf("  %%  - Modulus\n\n");

    printf("Enter Q to quit.\nEnter M for menu.\n");
    printf("Use Binary Operators to calculate based on the previous result. (operator number)\n");
    return;
}

int main()
{
    double num1, num2;
    char operator;
    double result = 0;
    char line_buffer[256];
    char first_char_of_line;

    printf("Simple C Calculator\n");
    print_menu();

    while (1)
    {
        printf(">> ");

        if (fgets(line_buffer, sizeof(line_buffer), stdin) == NULL)
        {
            printf("Error reading input. Exiting.\n");
            break;
        }

        if (sscanf(line_buffer, " %c", &first_char_of_line) == 1)
        {
            if (first_char_of_line == 'q' || first_char_of_line == 'Q')
            {
                printf("Exiting calcuator....\n");
                break;
            }
            else if (first_char_of_line == 'm' || first_char_of_line == 'M')
            {
                print_menu();
                continue;
            }
        }

        int item_read = sscanf(line_buffer, "%lf %c %lf", &num1, &operator, &num2);

        if (item_read != 3)
        {
            item_read = sscanf(line_buffer, "%c %lf", &operator, &num2);
            if (item_read != 2)
            {
                printf("Invalid format. Please use 'number operator number' or 'operator number' format!\n");
                continue;
            }
        }

        switch (item_read)
        {
        case 2:
            switch (operator)
            {
            case '+':
                result = result + num2;
                printf("Result: %.2f\n", result);
                break;
            case '-':
                result = result - num2;
                printf("Result: %.2f\n", result);
                break;
            case '*':
                result = result * num2;
                printf("Result: %.2f\n", result);
                break;
            case '%':
                long long ll_num1 = num1;
                long long ll_num2 = num2;
                result = ll_num1 % ll_num2;
                printf("Result: %.2f\n", result);
                break;
            case '/':
                if (num2 == 0)
                {
                    printf("Error: Division by zero is not allowed. \n");
                }
                else
                {
                    result = result / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            // Special Operations
            case 'N':
            case 'n':
                result = -num2;
                printf("Result: %.2f\n", result);
                break;
            case '`':
                if (num2 < 0)
                {
                    result = -num2;
                }
                else
                {
                    result = num2;
                }
                printf("Result: %.2f\n", result);
                break;
            case 'R':
            case 'r':
                if (num2 >= 0)
                {
                    if (num2 == 0)
                    {
                        result = 1;
                    }
                    else
                    {
                        printf("Error: Cannot calculate square for negative values");
                        continue;
                    }
                }
                else
                {
                    result = sqrt(num2);
                }
                printf("Result: %.2f\n", result);
                break;
            case 'Q':
            case 'q':
                result = num2 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 'C':
            case 'c':
                result = num2 * num2 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 'I':
            case 'i':
                if (num2 == 0)
                {
                    printf("Error: Division by zero is not allowed. \n");
                }
                else
                {
                    result = 1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            case 'F':
            case 'f':
                result = 0;
                for (int i = num2; i > 0; i++)
                {
                    result *= i;
                }
                printf("Result: %.2f\n", result);
                break;
            case 'L':
            case 'l':
                result = log(num2);
                printf("Result: %.2f\n", result);
                break;
            case 'S':
            case 's':
                result = sin(num2);
                printf("Result: %.2f\n", result);
                break;
            case 'O':
            case 'o':
                result = cos(num2);
                printf("Result: %.2f\n", result);
                break;
            case 'T':
            case 't':
                result = tan(num2);
                printf("Result: %.2f\n", result);
                break;
            case 'U':
            case 'u':
                result = ceil(num2);
                printf("Result: %.2f\n", result);
                break;
            case 'D':
            case 'd':
                result = floor(num2);
                printf("Result: %.2f\n", result);
                break;
            default:
                printf("Error: Unknown operator '%c'. \n", operator);
                break;
            }
            break;

        case 3:
            switch (operator)
            {
            case '+':
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case '%':
                long long ll_num1 = num1;
                long long ll_num2 = num2;
                result = ll_num1 % ll_num2;
                printf("Result: %.2f\n", result);
                break;
            case '/':
                if (num2 == 0)
                {
                    printf("Error: Division by zero is not allowed. \n");
                }
                else
                {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            default:
                printf("Error: Unknown operator '%c'. \n", operator);
                break;
            }
            break;
        }
    }

    return EXIT_SUCCESS;
}