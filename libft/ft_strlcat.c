/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:59:37 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 17:21:35 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dest;
	size_t	j;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dest;
	if (dst == src)
		return (0);
	if (size != 0 && i < (size - 1))
	{
		j = 0;
		while (i < (size - 1) && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (len_dest > size)
		return (size + len_src);
	return (len_dest + len_src);
}

// int main ()
// {
// 	char destiny[5] = "aaaa";
//    const char thesource []= "sourtgdfce";
//    size_t i = ft_strlcat(destiny,thesource,6) ;
//	  printf ("Resultado de strlcat e: %lu\n", i );
// }
