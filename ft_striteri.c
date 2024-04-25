#include "libft.h"

void	*ft_striteri (char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
}
