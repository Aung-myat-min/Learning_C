#include <stdio.h>
#include "utils.h"

int main() {
    int num1 = 56;
    int num2 = 98;

    printf("Using utils.h functions:\n");
    printf("Addition: %d + %d = %d,\n", num1, num2, add(num1, num2));
    printf("Subtraction: %d - %d = %d.\n", num1, num2, subtract(num1, num2));

    return 0;
}