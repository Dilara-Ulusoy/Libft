/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakcakoc <dakcakoce@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:49:53 by dakcakoc          #+#    #+#             */
/*   Updated: 2024/04/24 10:56:18 by dakcakoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && !is_word)
		{
			is_word = 1;
			count++;
		}
		else if (*s == c)
			is_word = 0;
		s++;
	}
	return (count);
}

static char	**malloc_list(int word_count)
{
	char	**list;

	list = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!list)
		return (NULL);
	return (list);
}

static char    *word_finder(const char *s, char c)
{
    int        len;
    char    *word;

    len = 0;
    while (s[len] && s[len] != c)
        len++;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    ft_strlcpy(word, s, len + 1 );
    word[len] = '\0';
    return (word);
}

char    **ft_split(const char *s, char c)
{
    int        word_count;
    char    **list;
    char    *word;
    int        i;
    int        k;

    i = 0;
    k = 0;
    word_count = count_words(s, c);
    list = malloc_list(word_count);
    while (s[i])
    {
        if (s[i] != c)
        {
            word = word_finder(s + i, c);
            list[k++] = word;
            i = i + ft_strlen(word);
        }
        else
            i++;
    }
    list[k] = NULL;
    return (list);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str = "Hello,World,This,Is,Sparta";
    char **result = ft_split(str, ',');
    int i = 0;
    // Print the result
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]); // Free memory
        i++;
    }
    free(result); // Free memory
    return 0;
}*/
