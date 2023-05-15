/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:44:55 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 17:25:56 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	x;

	x = (unsigned char) c;
	while (*s && *s != x)
		s++;
	if (*s == x)
		return ((char *)s);
	else
		return (NULL);
}

// int main()
// {
// 	char *str1 = "bgdfgadsdf";
// 	printf ("Resultado de strchr e: %s\n", ft_strchr(str1, 'a'));
// }