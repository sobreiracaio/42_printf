/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:33:51 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/16 17:36:31 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(const char *format, unsigned int i, va_list ap)
{
	int	buffer;

	buffer = 0;
	if (format[i] == '%')
		buffer += (ft_putchar(format[i]));
	else if (format[i] == 'c')
		buffer += (ft_putchar(va_arg(ap, int)));
	else if (format[i] == 's')
		buffer += (ft_putstr(va_arg(ap, char *)));
	else if (format[i] == 'p')
		buffer += (ft_putptr(va_arg(ap, unsigned long)));
	else if (format[i] == 'd' || format[i] == 'i')
		buffer += (ft_putnbr(va_arg(ap, int)));
	else if (format[i] == 'u')
		buffer += (ft_putunbr(va_arg(ap, unsigned int)));
	else if (format[i] == 'x' || format[i] == 'X')
		buffer += (ft_puthex(va_arg(ap, unsigned int), format[i]));
	return (buffer);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			buffer;

	i = 0;
	buffer = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			buffer += ft_printf_arg(format, i, ap);
		}
		else
		{
			ft_putchar(format[i]);
			buffer++;
		}
	i++;
	}
	va_end(ap);
	return (buffer);
}
