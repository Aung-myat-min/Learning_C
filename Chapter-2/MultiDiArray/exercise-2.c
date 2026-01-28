#include <stdio.h>

#define STUDENT 5
#define DAYS 7

int main()
{
    char records[STUDENT][DAYS] = {
        {'P', 'P', 'P', 'A', 'P', 'P', 'A'},
        {'P', 'A', 'P', 'A', 'P', 'P', 'P'},
        {'P', 'P', 'P', 'P', 'P', 'A', 'A'},
        {'A', 'P', 'P', 'P', 'A', 'A', 'P'},
        {'A', 'P', 'A', 'A', 'P', 'A', 'P'}};

    for (int i = 0; i < STUDENT; i++)
    {
        int total_presented_days = 0;
        printf("Student (%d) records are:\n", i + 1);
        for (int j = 0; j < DAYS; j++)
        {
            char *day;
            switch (j)
            {
            case 0:
                day = "Monday";
                break;
            case 1:
                day = "Tuesday";
                break;
            case 2:
                day = "Wednesday";
                break;
            case 3:
                day = "Thursday";
                break;
            case 4:
                day = "Friday";
                break;
            case 5:
                day = "Saturday";
                break;
            case 6:
                day = "Sunday";
                break;
            default:
                day = "Unknown";
                break;
            }

            switch (records[i][j])
            {
            case 'P':
                total_presented_days++;
                printf("%s: Present!\n", day);
                break;
            case 'A':
                printf("%s: Absent!\n", day);
                break;
            default:
                printf("Error: The record (%c) is not valid!\n", records[i][j]);
                break;
            }
        }
        printf("The Student presented total of (%d) days.\n\n", total_presented_days);
    }

    return 0;
}