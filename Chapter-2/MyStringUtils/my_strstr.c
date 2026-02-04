#include <stdio.h>

const char *my_strstr(const char *haystack, const char *needle);
const char *my_strstr_ptr(const char *haystack, const char *needle);

int main()
{
    char test_string[] = "Hello World!";
    char test1[] = "World";

    printf("The start index is %p.\n", test_string);
    // printf("In '%s', '%s' is at: %p.\n", test_string, test1, my_strstr(test_string, test1));
    // printf("In '%s', '%s' is at: %p.\n", test_string, "", my_strstr(test_string, ""));

    printf("In '%s', '%s' is at: %p.\n", test_string, test1, my_strstr_ptr(test_string, test1));
    printf("In '%s', '%s' is at: %p.\n", test_string, "", my_strstr_ptr(test_string, ""));
    printf("In '%s', '%s' is at: %p.\n", "programming", "gram", my_strstr_ptr("programming", "gram"));

    return 0;
}

const char *my_strstr(const char *haystack, const char *needle)
{
    int i = 0;

    if (needle[0] == '\0' || needle == "")
    {
        return haystack;
    }

    while (1)
    {
        if (haystack[i] == needle[0])
        {
            int j = 0;
            while (1)
            {
                if (haystack[i + j] != needle[j])
                {
                    break;
                }
                j++;
            }
            if (needle[j] == '\0')
            {
                return haystack + i;
            }
        }

        if (haystack[i] == '\0')
        {
            break;
        }
        i++;
    }
    return NULL;
}

const char *my_strstr_ptr(const char *haystack, const char *needle)
{
    const char *haystack_start = haystack;
    if (*needle == '\0')
    {
        return haystack;
    }

    while (1)
    {
        if (*haystack == *needle)
        {
            const char *temp_h_ptr = haystack;
            const char *temp_n_ptr = needle;
            while (*temp_h_ptr == *temp_n_ptr &&
                   *temp_h_ptr != '\0' &&
                   *temp_n_ptr != '\0')
            {
                *temp_h_ptr++;
                *temp_n_ptr++;
            }
            printf("%c", *temp_n_ptr);
            if (*temp_n_ptr == '\0')
            {
                return haystack;
            }
        }

        if (*haystack == '\0')
        {
            break;
        }
        *haystack++;
    }

    return NULL;
}
