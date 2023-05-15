/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:37:54 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 17:38:51 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{	
	size_t	i;
	char	*c;

	c = (char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

// int main ()
// {	
// 	int int_arr[5] = {1, 2, 3, 4, 5};
//     size_t number = 5 * sizeof(int);
// 	ft_bzero(int_arr, number);
// }
