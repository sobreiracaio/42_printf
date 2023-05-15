/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:07:45 by admin             #+#    #+#             */
/*   Updated: 2023/05/12 21:46:31 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	lenght(unsigned int n)
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

int ft_putunbr(unsigned int nb)
{
    int len;
    char *number;
    len = lenght(nb);
    number = ft_uitoa(nb);
    write(1, number, len);
    free(number);
    return (len);
    
}