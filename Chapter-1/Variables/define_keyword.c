#include <stdio.h>

#define MAX_BUFFERSIZE 1024
#define MESSAGE "Program Started!\n"

int main(){
    int buffer =MAX_BUFFERSIZE;
    
    printf("%s", MESSAGE);
    printf("Max Buffer Size is: %d\n", buffer);

    return 0;
}