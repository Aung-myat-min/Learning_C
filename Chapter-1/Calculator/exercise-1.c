#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1, num2;
    char operator;
    double result;
    char line_buffer[256];
    char first_char_of_line;

    printf("A simple calculator built in C.\nEnter expressions (e.g. 3 + 2) or q to Quit.\nSupported operators: + - * / %%\n");

    while (1)
    {
        printf(">> ");
        
        if(fgets(line_buffer, sizeof(line_buffer), stdin) == NULL){
            printf("Error reading input. Exiting.\n");
            break;
        }

        if(sscanf(line_buffer, " %c", &first_char_of_line) == 1){
            if(first_char_of_line == 'q' || first_char_of_line == 'Q'){
                printf("Exiting calcuator....\n");
                break;
            }
        }

        int item_read = sscanf(line_buffer, "%lf %c %lf", &num1, &operator, &num2);

        if(item_read != 3){
            printf("Invalid format. Please use 'number operator number' format!\n");
            continue;
        }

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
            if(num2 == 0){
                printf("Error: Division by zero is not allowed. \n");
            }else{
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Error: Unknown operator '%c'. \n", operator);
            break;
        }

    }
    
    return EXIT_SUCCESS;
}