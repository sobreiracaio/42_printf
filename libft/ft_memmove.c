/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:52:58 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 17:44:20 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destination;
	const char	*source;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	destination = (char *)dest;
	source = (const char *)src;
	i = 0;
	if (source < destination)
	{
		i = n;
		while (i-- > 0)
			destination[i] = source[i];
	}
	else
	{
		while (i < n)
		{
			destination[i] = source [i];
			i++;
		}
	}
	return (dest);
}

// int main ()
// {
// 	char src[] = "Hello, world!";
// 	char dest[6];	
// 	printf("O resultado de memmove e: %p\n", ft_memmove(dest, src, 5));
// }
