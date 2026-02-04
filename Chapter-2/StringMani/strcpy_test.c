#include <stdio.h>
#include <string.h> // Required for strcpy

int main()
{
    char source[] = "Hello World";
    char destination[20]; // Ensure destination has enough space

    // strcpy(destination, source);              // Copy source to destination
    // printf("Source: %s\n", source);           // Output: Source: Hello World
    // printf("Destination: %s\n", destination); // Output: Destination: Hello World

    char short_buffer[5];         // Too small for "Hello World"
    strcpy(short_buffer, source); // DANGER! Buffer overflow here, undefined behavior
    printf("Short buffer: %s\n", short_buffer);

    return 0;
}