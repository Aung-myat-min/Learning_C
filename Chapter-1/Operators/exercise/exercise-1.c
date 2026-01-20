#include <stdio.h>

int main(){
    int numA = 25;
    int numB = 7;
    int numC = 3;

    int result = (numA + numB) * numC - numA / numB % numC;
    printf("(numA + numB) * numC - numA / numB %% numC = %d\n", result);
    return 0;
}