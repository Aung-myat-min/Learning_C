#include <stdio.h>

int main()
{
    char user_input[30];
    int last_index = 0;

    printf("Enter your favourite word: ");
    fgets(user_input, sizeof(user_input), stdin);

    for (int i = 0; i < sizeof(user_input); i++)
    {
        if (user_input[i] == '\n')
        {
            last_index = i;
        }
    }
    user_input[last_index] = '\0';

    printf("You have entered: '%s'.\n", user_input);

    return 0;
}