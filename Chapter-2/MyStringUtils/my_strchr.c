#include <stdio.h>

const char *my_strchr(const char *s, char c);
const char *my_strchr_ptr(const char *s, char c);

int main()
{
    char test_string[] = "Test String";

    // printf("In '%s', '%c' is at: %p.\n", test_string, 'e', my_strchr(test_string, 'e'));
    // printf("In '%s', '%c' is at: %p.\n", test_string, 'a', my_strchr(test_string, 'a'));
    // printf("In '%s', '%c' is at: %p.\n", test_string, '\0', my_strchr(test_string, '\0'));

    printf("In '%s', '%c' is at: %p.\n", test_string, 'e', my_strchr_ptr(test_string, 'e'));
    printf("In '%s', '%c' is at: %p.\n", test_string, 'a', my_strchr_ptr(test_string, 'a'));
    printf("In '%s', '%c' is at: %p.\n", test_string, '\0', my_strchr_ptr(test_string, '\0'));

    return 0;
}

const char *my_strchr(const char *s, char c)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    for (int j = 0; j <= i; j++)
    {
        if (s[j] == c)
        {
            return s + j;
        }
    }
    return NULL;
}

const char *my_strchr_ptr(const char *s, char c)
{
    while (1)
    {
        if (*s == c)
        {
            return s;
        }

        if (*s == '\0')
        {
            break;
        }
        *s++;
    }

    return NULL;
}
