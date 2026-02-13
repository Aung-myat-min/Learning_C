#include <stdio.h>

void copy_string(char *destination, const char *source);

int main()
{
    char message[] = "Copying String!...";
    char cpy_message[50];

    copy_string(message, cpy_message);

    printf("Here is the copied message: '%s'\n", cpy_message);

    return 0;
}

void copy_string(char *destination, const char *source)
{
    int count = 0;
    char *source_start = source;
    while (1)
    {
        *(source_start + count) = *(destination + count);
        if (*(destination + count) == '\0')
        {
            break;
        }
        count++;
    }
}
