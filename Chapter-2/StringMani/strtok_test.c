#include <stdio.h>
#include <string.h> // Required for strtok

int main()
{
    char command_line[] = "cp -r /path/to/source /path/to/destination";
    char *token;

    printf("Original command: \"%s\"\n", command_line);

    // Get the first token (the command name)
    token = strtok(command_line, " "); // " " is the delimiter
    printf("Command: %s\n", token);

    // Subsequent calls to strtok should pass NULL as the first argument
    // to continue tokenizing the *same* string
    printf("Arguments:\n");
    while ((token = strtok(NULL, " ")) != NULL)
    {
        printf("- %s\n", token);
    }

    // IMPORTANT: The original command_line array has been modified!
    // printf("Modified original string: \"%s\"\n", command_line); // Will print "cp" followed by junk or nothing

    // Example with multiple delimiters
    char data[] = "apple,banana;orange,grape";
    const char *delimiters = ",;"; // Multiple delimiters
    printf("\nOriginal data: \"%s\"\n", data);
    token = strtok(data, delimiters);
    while (token != NULL)
    {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiters);
    }

    return 0;
}