/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:00:41 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 17:40:00 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	n_len(long n)
{
	long	len;
	long	nb;

	nb = n;
	len = 0;
	if (nb == 0)
	{
		len = 1;
		return (len);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	length;
	long int		nb;

	nb = n;
	length = n_len(nb);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	result[length] = '\0';
	if (nb == 0)
		result[0] = '0';
	else if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		result[--length] = '0' + (nb % 10);
		nb /= 10;
	}
	return (result);
}

// int main ()
// {
// 	printf("O resultado de itoa e: %s\n",ft_itoa(3453));
// }
