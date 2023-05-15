/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:11:42 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 17:22:51 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	data;
	size_t			i;

	ptr = s;
	data = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = data;
		i++;
	}
	return (s);
}

// int main ()
// {
// 	char c[8];
//
//    printf("Resultado de memset e: %p\n", ft_memset(c,'$',8));
//    printf("Valor no ponteiro de memset e: %s\n",c);
// }
