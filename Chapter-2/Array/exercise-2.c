#include <stdio.h>

int main()
{
    int temperature[7] = {20, 22, 18, 25, 23, 19, 21};
    float sensor_readings[] = {5.6, 7.8, 2.5, 3.7, 1.9};
    char aplhabet_start = {'\0'};

    printf("The Temperature from day 2 is %d.\n", temperature[2]);

    temperature[4] = 26;

    for (int i = 0; i < 7; i++)
    {
        printf("Day %d - %d\n", i + 1, temperature[i]);
    }

    return 0;
}