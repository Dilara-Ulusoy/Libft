#include "libft.h"

char *ft_strrchr(const char *s, int c) 
{
    const unsigned char *str =(const unsigned char *)s;
    unsigned char b = (unsigned char)c;
    const unsigned char *lastoccur = 0;

    while (*str != '\0')
    {
        if (*str == b)
        {
            lastoccur = str;
        }
        str++;
    }
    if (b == '\0')
    {
            return (char *)str;
    }
    return(char *)lastoccur;
}
/*
int main()
{
    char str1[] = "My name is Dilara";
    printf("String 1: %s\n", ft_strrchr(str1, 'a'));
    
    char str2[] = "My name is Dilara";
    printf("String 2: %s",  strrchr(str2, 'a'));
    return 0;
}*/
