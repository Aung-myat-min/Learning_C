#include <stdio.h>
#include <stdbool.h>

int main(){
    int total = 0;
    int attampts = 0;
    int number;

    printf("This program will ask you to enter a number. If you enter a negative number, it will skip it. To stop the program, enter '0'.\n");

    do{
        printf("Please a number: ");
        scanf("%d", &number);

        if(number < 0){
            continue;
        }else if(number == 0){
            break;
        }else{
            total += number;
            attampts++;
        }
    }while (true);

    printf("The average of all inputted numbers is %d.\n", total / attampts);
    
    return 0;
}