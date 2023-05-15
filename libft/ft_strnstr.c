/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:28:20 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 17:28:08 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	j = 0;
	while (j < len && big[j])
	{
		i = 0;
		while (j < len && little[i] && big[j] && little[i] == big[j])
		{
			++i;
			++j;
		}
		if (little[i] == '\0')
			return ((char *)&big[j - i]);
	j = j - i + 1;
	}
	return (0);
}

// int main ()
// {
// 	char *str3 = "aseqwwasdaweavbnasdaweasase";
//    char *str4 = "vbn";
//      printf ("Resultado de strnstr: %s\n", ft_strnstr(str3,str4,2));
// }
