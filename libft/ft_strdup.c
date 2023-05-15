/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:35:52 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 18:05:22 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s) +1;
	new_str = malloc(len);
	if (new_str != NULL)
	{
		ft_memcpy(new_str, s, len);
	}
	return (new_str);
}

// int main ()
// {
// 	printf("O resultado de strdup e: %s\n", ft_strdup("abcdef"));
// }