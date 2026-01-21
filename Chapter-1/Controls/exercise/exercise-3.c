#include <stdio.h>

int main(){
    int number;
    int result = 0;

    printf("Please enter a positive number: ");
    scanf("%d", &number);

    if(number < 0){
        printf("Please enter a positive number!\n");
    }else{
        for(int j = 1; j <= number; j++){
            printf("%d",j);
            result += j;
        }
        printf("The result is %d.\n", result);
    }
    return 0;
}