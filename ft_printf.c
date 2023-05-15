/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:33:51 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/15 21:20:05 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_arg(const char *format, unsigned int i, va_list ap)
{
	int buffer;

	buffer = 0;
	if(format[i] == '%')
		buffer += (ft_putchar(format[i]));
	else if(format[i] == 'c')
		buffer += (ft_putchar(va_arg(ap, int)));
	else if(format[i] == 's')
		buffer += (ft_putstr(va_arg(ap, char*)));
	else if(format[i] == 'p')
		buffer += (ft_putptr(va_arg(ap, unsigned long)));
	else if (format[i] == 'd' || format[i] == 'i')
		buffer += (ft_putnbr(va_arg(ap, int)));
	else if(format[i] == 'u')
		buffer += (ft_putunbr(va_arg(ap, unsigned int)));
	else if(format[i] == 'x' || format[i] == 'X')
		buffer += (ft_puthex(va_arg(ap, unsigned int), format[i]));
		
	return (buffer);
	}

int ft_printf(const char *format, ...)
{
	va_list ap;
	int i;
	int buffer;

	
	i = 0;
	buffer = 0;
	va_start(ap, format);
	
	while (format[i])
	{
		if(format[i] == '%')
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

//  int main ()
// {
	
//  	//ft_printf("O char é: %c.\nA string é: %s .\nO ptr é: %p .\nO decimal é: %d .\n ",'C' , "String", "abc", -245);
//  	//ft_printf("O unsigned int é: %u\n", 523);
//   	ft_printf(" %x %X \n", -99, 99);
// }

// int	main(void)
// {
// 	char c = 'c';
// 	char s[] = "Hello, world!";
// 	int	n1 = INT_MIN;
// 	int	n2 = INT_MAX;
// 	int	n3 = 0;
// 	unsigned int u = 55;
// 	int or = 0;
// 	int ft = 0;
	
// 	printf("Mandatory test:\n\n");

// 	or = printf("Or %%c: %c ", c);
// 	printf("Return: %d\n", or);
// 	ft = ft_printf("My %%c: %c ", c);
// 	printf("Return: %d\n", ft);

// 	printf("\n");

// 	or = printf("Or %%s: %s ", s);
// 	printf("Return: %d\n", or);
// 	ft = ft_printf("My %%s: %s ", s);
// 	printf("Return: %d\n", ft);

// 	printf("\n");

// 	or = printf("Or %%d: %d - %d - %d ", n1, n2, n3);
// 	printf("Return: %d\n", or);
// 	ft = ft_printf("My %%d: %d - %d - %d ", n1, n2, n3);
// 	printf("Return: %d\n", ft);

// 	printf("\n");

// 	or = printf("Or %%i: %i - %i - %i ", n1, n2, n3);
// 	printf("Return: %d\n", or);
// 	ft = ft_printf("My %%i: %i - %i - %i ", n1, n2, n3);
// 	printf("Return: %d\n", ft);

// 	printf("\n");

// 	or = printf("Or %%x: %x - %x - %x ", n1, n2, n3);
// 	printf("Return: %d\n", or);
// 	ft = ft_printf("My %%x: %x - %x - %x ", n1, n2, n3);
// 	printf("Return: %d\n", ft);

// 	printf("\n");

// 	or = printf("Or %%X: %X - %X - %X ", n1, n2, n3);
// 	printf("Return: %d\n", or);
// 	ft = ft_printf("My %%X: %X - %X - %X ", n1, n2, n3);
// 	printf("Return: %d\n", ft);

// 	printf("\n");

// 	or = printf("Or %%u: %u ", u);
// 	printf("Return: %d\n", or);
// 	ft = ft_printf("My %%u: %u ", u);
// 	printf("Return: %d\n", ft);

// 	printf("\n");

// 	or = printf("Or %%p: %p ", &u);
// 	printf("Return: %d\n", or);
// 	ft = ft_printf("My %%p: %p ", &u);
// 	printf("Return: %d\n", ft);

// 	printf("\n");

// 	printf("Mix printf:\n");
// 	or = printf("\nThis is a mix of tests\n%c and %s\n%d, %i and %u\n%x and %X\nfinishing with %p\n", c, s, n1, n2, u, n2, n2, &s);
// 	printf("\nReturn: %d\n", or);
// 	printf("\nMix ft_printf:\n");
// 	ft = ft_printf("\nThis is a mix of tests\n%c and %s\n%d, %i and %u\n%x and %X\nfinishing with %p\n", c, s, n1, n2, u, n2, n2, &s);
// 	printf("\nReturn: %d\n", ft);

// 	printf("\n");
// }