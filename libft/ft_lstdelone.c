/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:01:08 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/04 19:06:28 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

// void	free_content(void *content)
// {
// 	free(content);
// }
//
// int	main(void)
// {
// 	t_list	*my_node;
//
// 	my_node = ft_lstnew(ft_strdup("test node"));
//
//
// 	ft_lstdelone(my_node, &free_content);
//
// 	return (0);
// }