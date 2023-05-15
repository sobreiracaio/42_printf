/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:32:10 by admin             #+#    #+#             */
/*   Updated: 2023/05/13 15:06:25 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	n_lenght(int n)
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

int ft_putnbr(int nb)
{
    int len;
    char *number;
    len = n_lenght(nb);
    number = ft_itoa(nb);
    write(1, number, len);
    free(number);
    return (len);
    
}