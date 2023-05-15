/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:58:26 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 17:28:31 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}

// int main ()
// {
// 	 printf ("Resultado de Calloc e: %p\n", ft_calloc(5, 5));
// }
