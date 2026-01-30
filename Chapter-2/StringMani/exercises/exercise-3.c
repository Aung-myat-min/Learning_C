#include <stdio.h>
#include <string.h>

void commandline_parser(char *s);

int main()
{
    char sample_command[] = "ls -l -a /home/user /dummy";

    commandline_parser(sample_command);

    return 0;
}

void commandline_parser(char *s)
{
    if (strlen(s) == 0)
    {
        printf("Your didn't enter any command.\n");
        return;
    }

    // Detect The Command
    char *first_space = strchr(s, ' ');
    char *second_space = NULL;
    if (first_space == NULL)
    {
        // Just print out the command if there is no space in the command (e.g. 'ls')
        printf("The command is '%s'.\n", s);
        return;
    }

    char command[strlen(s)];
    char flag[strlen(s)];
    char argument[strlen(s)];

    for (int i = 0; i < (first_space - s); i++)
    {
        command[i] = s[i];
    }
    command[strlen(command)] = '\0';

    // Detect The Flags or Arugments
    if (first_space[1] == '-')
    {
        // There is flag(s).
        do
        {
            if (second_space == NULL)
            {
                second_space = strchr((first_space + 1), ' '); // Starting to find space after the first one
            }
            else
            {
                second_space = strchr((second_space + 1), ' ');
            }

            if (second_space[1] != '-')
            {
                break;
            }
            else
            {
                continue;
            }

        } while (1);

        if (second_space != NULL)
        {
            for (int i = 0; i < (second_space - first_space); i++)
            {
                char temp_char = first_space[i + 1];
                if (temp_char == ' ')
                {
                    flag[i] = '`';
                }
                else
                {
                    flag[i] = temp_char;
                }
            }
            flag[strlen(flag)] = '\0';
        }
    }
    else
    {
        // If not, it is argument(s)
        for (int i = 0; i < (int)(strlen(s) - (first_space - s)); i++)
        {
            char temp_char = first_space[i + 1];
            if (temp_char == ' ')
            {
                argument[i] = '`';
            }
            else
            {
                argument[i] = temp_char;
            }
        }
        argument[strlen(argument)] = '\0';
    }

    // Detect The Arguments
    if (second_space != NULL)
    {
        for (int i = 0; i < (int)(strlen(s) - (second_space - s)); i++)
        {
            char temp_char = second_space[i + 1];
            if (temp_char == ' ')
            {
                argument[i] = '`';
            }
            else
            {
                argument[i] = temp_char;
            }
        }
        argument[strlen(argument)] = '\0';
    }

    printf("Command:\n> %s\n", command);
    if (strlen(flag) > 0)
    {
        printf("Flag(s):\n");
        for (size_t i = 0; i < strlen(flag); i++)
        {
            printf("> ");
            for (size_t j = i; j < strlen(flag); j++)
            {
                if (flag[j] == '`')
                {
                    printf("\n");
                    i = j;
                    break;
                }
                else
                {
                    printf("%c", flag[j]);
                }
            }
        }
    }
    if (strlen(argument))
    {
        printf("Argument(s):\n");
        for (size_t i = 0; i < strlen(argument); i++)
        {
            printf("> ");
            for (size_t j = i; j < strlen(argument) + 1; j++)
            {
                if (argument[j] == '`')
                {
                    printf("\n");
                    break;
                }
                else
                {
                    printf("%c", argument[j]);
                }
                i = j + 1;
            }
        }
        printf("\n");
    }
}