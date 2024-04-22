#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int len;
    int start = 0;
    while (*s1 && ft_strchr(set, *s1))
    {
        s1++;
        start++;
    }
    len = ft_strlen(s1);
    while (len > start && ft_strchr(set, s1[len - 1]))
    {
        len--;
        
    }
    return ft_substr(s1, 0, len-start-1);
}
/*
 #include <string.h>
 #include <stdlib.h>
 #include <stdio.h>
 
 int main(void)
 {
 char string[] = "---,Hello000,,--\n";
 char trim[] = "-,";
 printf("%s", ft_strtrim(string, trim));
 }
 */
