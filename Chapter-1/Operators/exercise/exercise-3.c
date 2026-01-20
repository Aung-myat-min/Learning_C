#include <stdio.h>

int main(){
    int divisor = 0;
    int dividend = 100;

    // The Understatement is false and short-circuited because the first expression is already false.
    if (divisor != 0 && dividend / divisor > 5) {
        printf("The statement is false\n");
    }else{
        printf("The statement is false\n");
    }

    // The Understatement results in error because the first statement is divided by 0. "Floating point exception (core dumped)"
     if (dividend / divisor > 5 && divisor != 0) {
        printf("The statement 2 is false\n");
    }else{
        printf("The statement 2 is false\n");
    }
    return 0;
}