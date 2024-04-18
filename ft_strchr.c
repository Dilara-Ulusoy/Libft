#include <stdio.h>

char *ft_strchr(const char *s, int c) 
{
    const unsigned char *str =(const unsigned char *)s;
    unsigned char b = (unsigned char)c;  // Cast the search character to unsigned char

    while (*str != '\0') // Iterate through the string looking for 'b' or the end of the string
    {
        if (*str == b) 
        {
            return (char *)str;  // Correct casting back to char* when returning
        }
        if (b == '\0') 
        {
            return (char *)str; // Also cast back to char* for the null terminator
        }
        str++;
    }
    return NULL; // If not found, return NULL
}

int main()
{
    char str[] = "My name is Dilara";
    printf("%s", ft_strchr(str, 'a'));
    return 0;

    char str2[] = "My name is Dilara";
    printf("%s", strchr(str2, 'a'));
    return 0;
}
