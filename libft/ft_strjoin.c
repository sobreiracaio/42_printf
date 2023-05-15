/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:57:13 by admin             #+#    #+#             */
/*   Updated: 2023/05/02 17:30:09 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*sum;

	i = -1;
	j = 0;
	sum = (char *)malloc ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!sum || (!s1 && !s2))
		return (NULL);
	if (s1)
	{
		while (s1[++i] != '\0')
			sum[i] = s1[i];
	}
	if (s2)
	{
		while (s2[j])
			sum[i++] = s2[j++];
	}
	sum[i] = '\0';
	return (sum);
}

// int main ()
// {
// 	 printf("Resultado de strjoin e: %s\n", ft_strjoin("","def"));
// }
