#include <stdio.h>
#include <string.h>

int check_password(char *password);

int main()
{
    char user_password[50];

    printf("Please enter a secure password: ");
    fgets(user_password, sizeof(user_password), stdin);
    user_password[strlen(user_password) + 1] = '\0';

    if (check_password(user_password))
    {
        printf("Your Password is secure.\n");
    }
    else
    {
        printf("Your Password is NOT secure.\n");
    }

    return 0;
}

int check_password(char *password)
{
    char invalid_pass_1[] = "password";
    char invalid_pass_2[] = "12345678";
    char invalid_pass_3[] = "PASSWORD";

    if (strlen(password) < 8)
    {
        return 0;
    }

    if (strncmp(password, invalid_pass_1, strlen(invalid_pass_1)) == 1)
    {
        return 0;
    }
    else if (strncmp(password, invalid_pass_2, strlen(invalid_pass_2)) == 1)
    {
        return 0;
    }
    else if (strncmp(password, invalid_pass_3, strlen(invalid_pass_3)) == 1)
    {
        return 0;
    }

    if (strstr(password, "secure") == NULL)
    {
        return 0;
    }

    return 1;
}