/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:18:41 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/03 19:32:21 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!del || !lst || !(*lst))
		return ;
	while (*lst && lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// void	free_content(void *content)
// {
// 	free(content);
// }
//
// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new_node;
//
// 	list = NULL;
// 	new_node = ft_lstnew(strdup("first node"));
// 	ft_lstadd_back(&list, new_node);
//
// 	new_node = ft_lstnew(strdup("second node"));
// 	ft_lstadd_back(&list, new_node);
//
// 	new_node = ft_lstnew(strdup("third node"));
// 	ft_lstadd_back(&list, new_node);
//
// 	ft_lstclear(&list, &free_content);
//
// }
