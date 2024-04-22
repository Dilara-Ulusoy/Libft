#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set)
{
    int len = strlen(s1);
    char *buffer;
    int occurrence = 0;
    int i= 0;
    int j;
    
    while(s1[i] != '\0')
    {
        j=0;
        while(set[j] != '\0')
        {
            if(s1[i] == set[j])
            {
            occurrence++;
            }
            j++;
        }
       i++;
    }
    buffer=(char *)malloc(sizeof(char) * occurrence);
    if(!buffer)
    {
    return (NULL);
    }
    while(s1[i] != '\0')
    {
        j=0;
        while(set[j] != '\0')
        {
            if(s1[i] != set[j])
            {
            buffer[i] = s1[i];
            }
            j++;
        }
       i++;
    }
    return (buffer);
}

int main()
{
    char string[] = "---,Hello,,--";
    char trim[] = "-,";
    printf("%s", ft_strtrim(string,trim));
}
