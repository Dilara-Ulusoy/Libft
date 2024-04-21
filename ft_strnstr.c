#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
    j = 0;
	if (needle[j] == '\0')
	{
        return ((char *)haystack); //We match the return type of the function
	}
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
            return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "This is an apple!";
    char needle[]= "is";
    printf("%s", ft_strnstr(str,needle,4));
}*/
