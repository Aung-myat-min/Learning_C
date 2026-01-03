#include <stdio.h>

int global_counter;

int main() {
    int age;                //Declare but not assigned value
    int score = 100;

    float average = 95.67f;
    char grade = 'A';

    //Assign Value
    age = 21;
    score = score - 6;

    printf("Age: %d\n", age);
    printf("Score: %d\n", score);
    printf("Average: %.1f\n", average);
    printf("Grade: %c\n", grade);
    printf("Global Counter: %d\n", global_counter);

    return 0;
}