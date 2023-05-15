/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:10:42 by admin             #+#    #+#             */
/*   Updated: 2023/05/13 16:39:37 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ptr_len(unsigned long ptr)
{
    unsigned int len;

    len = 0;
    while (ptr != 0)
    {
        ptr /= 16;
        len++;
    }
    return (len);
}

void ft_printptr(unsigned long ptr)
{
    if(ptr >=16)
    {
        ft_printptr(ptr / 16);
        ft_printptr(ptr % 16);
    }
    else
    {
        if(ptr <= 9)
            ft_putchar(ptr + '0');
        else
            ft_putchar(ptr - 10 + 'a');
        
                
    }
    
}

int ft_putptr(unsigned long ptr)
{
   unsigned int len;

   len = 0;
   if (ptr == 0)
        len = ft_putstr("(nil)");
   else
   {
    len = ft_putstr("0x");
    ft_printptr(ptr);
    len += ptr_len(ptr);
   }
   return (len);
}

// int main()
// {
//     int k;
//     k = 1;
//         ft_putptr(k);
// }