#include <stdio.h>
#include <stdbool.h>

int main(){
    int secretNum = 7;
    int userGuess;
    
    while (true)
    {
        printf("Guess the secret number: ");
        scanf("%d", &userGuess);
        
        if(userGuess == secretNum){
            printf("Congratulations! You guessed it!\n");
            break;
        }else if(userGuess < secretNum){
            printf("Too low! Try again.\n");
        }else if(userGuess > secretNum){
            printf("Too high! Try again.\n");
        }
    }
    
    return 0;
}