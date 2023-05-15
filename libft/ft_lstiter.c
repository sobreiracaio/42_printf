/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:49:13 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/03 19:41:29 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// void	print_node_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }
//
// int	main(void)
// {
// 	t_list	*my_list;
// 	t_list	*new_node;
//
// 	my_list = ft_lstnew(strdup("node1"));
//
//	
// 	new_node = ft_lstnew(strdup("node2"));
// 	ft_lstadd_back(&my_list, new_node);
//
//	
// 	new_node = ft_lstnew(strdup("node3"));
// 	ft_lstadd_back(&my_list, new_node);
//
//	
// 	ft_lstiter(my_list, &print_node_content);
//
//	
// 	ft_lstclear(&my_list, &free);
//
// 	return (0);
// }