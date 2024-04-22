/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:02:28 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/22 10:08:04 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	i;
	size_t	totalsize;
	char	*outcome;

	totalsize = size * nitems;
	i = 0;
	if (size == 0 || nitems == 0)
	{
		return (NULL);
	}
	outcome = malloc(totalsize);
	if (!outcome)
		return (NULL);
	while (i < totalsize)
	{
		outcome[i] = 0;
		i++;
	}
	return (outcome);
}
