/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:32:10 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/22 10:36:07 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	unsigned int	slen;

	slen = ft_strlen(s);
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	if (start >= slen)
		return (ft_strdup(""));
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
  const char string[] = "This is Dilara";
  printf("%s", ft_substr(string,8, 4));
}*/
