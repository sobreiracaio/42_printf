/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:41:57 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/15 21:05:23 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int hex_len(unsigned int nb)
{
    int len;
    
    if(nb == 0)
        return (1);

    len = 0;
    while (nb)
    {
		len++;
        nb /= 16;
		
        
    }
    return (len);
}

void ft_printhex(unsigned int nb, const char format)
{
    if(nb >=16)
    {
        ft_printhex(nb / 16, format);
        ft_printhex(nb % 16, format);
    }
    else
    {
        if(nb <= 9)
            ft_putchar(nb + '0');
        else
		{
			if(format == 'x')
            	ft_putchar((nb - 10 + 'a'));
			else if (format == 'X')
				ft_putchar((nb - 10 + 'A'));
		}
        
                
    }
    
}

int ft_puthex(unsigned int nb, const char format)
{
   int len;

   len = 0;

   
  
   if (nb == 0)
   {
       ft_putchar('0');
	   return (1);
   }
  	ft_printhex(nb, format);
    len += hex_len(nb);
	return (len);
   }
   

