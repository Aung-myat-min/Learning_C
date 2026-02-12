#include <stdio.h>

int main()
{
    char message[] = "Hello World";
    char *msg_ptr = message;

    // Print sizeof(message)
    printf("The sizeof 'message': %d\n", sizeof(message));

    // Print sizeof(msg_ptr)
    printf("The sizeof 'msg_ptr': %d\n", sizeof(msg_ptr));

    // Add a comment explaining the difference in output
    /*
        The size of message is 12.
        The size of msg_ptr is 8.
        They are different because the sizeof function determine the actual size of bytes taking in memory.
        In this case, C String has a null terminator '\0' in the end.
        The original text has 11 length, plus the null terminator, resulting in 12.
        But msg_ptr result is 8 because my current machine is 64 bit based.
        So, my memory addesses are represented in 8 characters-long text.
    */

    return 0;
}