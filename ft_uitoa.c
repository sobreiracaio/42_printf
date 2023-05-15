/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 20:07:04 by admin             #+#    #+#             */
/*   Updated: 2023/05/12 20:47:54 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ulenght(unsigned int n)
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

char	*ft_uitoa(unsigned int n)
{
	char			*result;
	unsigned int	length;
	unsigned int		nb;

	nb = n;
	length = ulenght(nb);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	result[length] = '\0';
    if (nb == 0)
		result[0] = '0';
	while (nb)
	{
       	result[--length] = '0' + (nb % 10);
		nb /= 10;
	}
	return (result);
}


