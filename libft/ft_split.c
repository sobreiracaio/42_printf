/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:32:13 by admin             #+#    #+#             */
/*   Updated: 2023/05/02 18:05:37 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	countwords(const char *str, char c)
{
	int	counter;
	int	marker;

	counter = 0;
	marker = 0;
	while (*str)
	{
		if (*str != c && marker == 0)
		{
			marker = 1;
			counter++;
		}
		else if (*str == c)
		{
			marker = 0;
		}
		str++;
	}
	return (counter);
}

static char	*duplicatewords(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		word[i++] = str[start++];
	}
	word [i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	unsigned int		i;
	unsigned int		j;
	int					index;
	char				**split;

	i = 0;
	j = 0;
	index = -1;
	split = (char **)malloc((countwords(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = duplicatewords(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
