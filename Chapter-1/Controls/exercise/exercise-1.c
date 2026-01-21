#include <stdio.h>

int main(){
    int score;

    printf("Please enter your score:");
    scanf("%d", &score);

    if(score < 0 || score > 100){
        printf("Please enter a valid score.\n");
    }else if(score <= 100 && score >= 90){
        printf("You grade is A.\n");
    }else if(score <= 89 && score >= 80){
        printf("You grade is B.\n");
    }else if(score <= 79 && score >= 70){
        printf("You grade is C.\n");
    }else if(score <= 69 && score >= 60){
        printf("You grade is D.\n");
    }else{
        printf("You grade is F.\n");
    }
    return 0;
}