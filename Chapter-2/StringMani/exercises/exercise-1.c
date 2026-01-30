#include <stdio.h>
#include <string.h>

char *trim(char *s);

int main()
{
    char a_string[] = "Here is a string.";
    char a_string_w[] = "   Here is a string with white space.Hehe\n\n   ";

    printf("%s\n%s\n", a_string, a_string_w);

    trim(a_string);
    trim(a_string_w);

    printf("After trimming:\n");
    printf("%s\n%s\n", a_string, a_string_w);

    return 0;
}

char *trim(char *s)
{
    size_t start_index = 0;
    size_t end_index = 0;
    for (size_t i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\0')
        {
            continue;
        }
        else
        {
            start_index = i;
            break;
        }
    }

    for (size_t i = strlen(s); i > 0; i--)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\0')
        {
            continue;
        }
        else
        {
            end_index = i;
            break;
        }
    }

    printf("Start Index: %ld\n", start_index);
    printf("End Index: %ld\n", end_index);

    char new_string[strlen(s) + 1];

    for (size_t i = 0; i < end_index - start_index + 1; i++)
    {
        new_string[i] = s[i + start_index];
    }
    new_string[end_index + 1] = '\0';

    return strcpy(s, new_string);
}