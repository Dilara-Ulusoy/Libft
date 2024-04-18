#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c) 
{
    const unsigned char *str =(const unsigned char *)s;
    unsigned char b = (unsigned char)c;  // Cast the search character to unsigned char
    const unsigned char *lastoccur = NULL;

    while (*str != '\0') 
    // Iterate through the string looking for 'b' or the end of the string
    {
        if (*str == b) 
        {
            lastoccur = str;
        }
        if (b == '\0') 
        {
            return (char *)str;
        }
        str++;
        
    }
    return(char *)lastoccur;
}

int main()
{
    char str1[] = "My name is Dilara";
    printf("String 1: %s\n", ft_strrchr(str1, 'a'));
    
    char str2[] = "My name is Dilara";
    printf("String 2: %s",  strrchr(str2, 'a'));
    return 0;
}
