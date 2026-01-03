#include <stdio.h>

int main() {
    const float conversion1 = 1.8;
    const int conversion2 = 32;

    float temperatureCel = 32.3f;
    
    float tempFer = (temperatureCel * conversion1) + conversion2;

    printf("Celsius: %.2f\nFahrenheit: %.3f\n", temperatureCel, tempFer);

    temperatureCel = 24;
    tempFer = (temperatureCel * conversion1) + conversion2;

    printf("Celsius: %.2f\nFahrenheit: %.3f\n", temperatureCel, tempFer);

    return 0;
}