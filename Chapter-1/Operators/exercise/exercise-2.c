#include <stdio.h>

int main(){
    float temp1 = 98.6f;
    float temp2 = 100.1f;

    printf("temp1 == temp2: %d\n", temp1 == temp2);
    printf("temp1 != temp2: %d\n", temp1 != temp2);
    printf("temp1 < temp2: %d\n", temp1 < temp2);
    printf("temp1 >= 98.6: %d\n", temp1 >= 98.6);
    return 0;
}