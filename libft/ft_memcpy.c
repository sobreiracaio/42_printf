/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 11:32:34 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 17:23:24 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_c;
	const char	*src_c;
	size_t		i;

	if (dest == NULL && src == NULL)
		return (0);
	dest_c = (char *)dest;
	src_c = (const char *) src;
	i = 0;
	while (i < n)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}

// int main ()
// {
// 	 char dest_m[8];
//    char *src = "testando";
//
//    printf("Resultado de memcpy e: %p\n", ft_memcpy(dest_m, src, 5));
//    printf("Valor no ponteiro de memcpy: %s\n", src);
// }
