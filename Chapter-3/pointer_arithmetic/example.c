#include <stdio.h>

int main()
{
    float grades[] = {85.5, 92.0, 78.5, 95.0, 88.0};
    int num_grades = sizeof(grades) / sizeof(grades[0]);
    float *current_grade_ptr = grades; // Start at the beginning of the array

    printf("Grades:\n");
    for (int i = 0; i < num_grades; i++)
    {
        printf("Element %d: %.1f (Address: %p)\n", i, *current_grade_ptr, (void *)current_grade_ptr);
        current_grade_ptr++; // Move to the next element
    }

    // Resetting the pointer and traversing backwards
    printf("\nGrades in reverse:\n");
    current_grade_ptr = grades + num_grades - 1; // Start at the last element
    printf("The new pointer: %d\n", sizeof(grades));
    for (int i = num_grades - 1; i >= 0; i--)
    {
        printf("Element %d: %.1f (Address: %p)\n", i, *current_grade_ptr, (void *)current_grade_ptr);
        current_grade_ptr--; // Move to the previous element
    }

    return 0;
}