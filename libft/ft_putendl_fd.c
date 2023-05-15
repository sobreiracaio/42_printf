/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:00:25 by admin             #+#    #+#             */
/*   Updated: 2023/05/02 17:56:38 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	size;

	size = ft_strlen(s);
	write(fd, s, size);
	write(fd, "\n", 1);
}

// int main ()
// {
// 	ft_putendl_fd ("abcdef", 1);
// }
