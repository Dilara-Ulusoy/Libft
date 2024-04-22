#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Assume ft_substr is defined as you provided
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *subs = (char *)malloc(sizeof(char) * (len + 1));
    if (!subs) return NULL;
    
    unsigned int i = 0;
    while (s[start + i] && i < len)
    {
        subs[i] = s[start + i];
        i++;
    }
    subs[i] = '\0';
    return subs;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int len = strlen(s1);
    while (*s1 && strchr(set, *s1)) 
    {
        s1++;
    }
    while (*s1 && strchr(set, s1[len - 1]))
    {
        len--;
    }
    return ft_substr(s1, 0, len);
}

int main(void)
{
    char string[] = "---,Hello,,--\n";
    char trim[] = "-,";
    printf("%s", ft_strtrim(string, trim));
}
