/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:54:09 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 18:51:09 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !(*s) || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
//
// void function (unsigned int i, char* c)
// {
// 	*c = c[i] + 1;
// }
//
// int main ()
// {
// 	char *str = "hello";
// 	printf("string antes de iterar: %s\n", str);
// 	ft_striteri(str, &function);
// 	printf("string depois de iterar: %s\n", str);
// }