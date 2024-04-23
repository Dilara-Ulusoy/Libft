#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
   int end;
   int start;
   
   start = 0;
   if(!s1 && !set)
       return (0);
    if (*s1 == '\0' || *set == '\0')
        return (ft_strdup(""));
   while (s1[start] && ft_strchr(set, s1[start]))
   {
       start++;
   }
   end = ft_strlen(s1);
   while (end > start && ft_strchr(set, s1[end - 1]))
   {
       end--;
   }
   return ft_substr(s1, start, end-start);
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
