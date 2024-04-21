 #include "libft.h"

char *ft_strchr(const char *s, int c)
{
    const unsigned char *str =(const unsigned char *)s;
    unsigned char b = (unsigned char)c;

    while (*str != '\0')
    {
        if (*str == b)
        {
            return (char *)str;  // Correct casting back to char* when returning
        }
        str++;
    }
    if (b == '\0')
    {
        return (char *)str; // Also cast back to char* for the null terminator
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "My name is Dilara-";
    printf("My function: %s\n", ft_strchr(str, 'a'));

    char str2[] = "My name is Dilara-";
    printf("Library function: %s", strchr(str2, 'a'));
    return 0;
}
*/

