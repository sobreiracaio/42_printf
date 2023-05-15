/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:00:20 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/03 19:56:22 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*my_list;
// 	t_list	*last_node;
//
// 	my_list = ft_lstnew(strdup("node1"));
//
// 	// adiciona um novo nó à lista
// 	ft_lstadd_back(&my_list, ft_lstnew(strdup("node2")));
//
// 	// adiciona um novo nó à lista
// 	ft_lstadd_back(&my_list, ft_lstnew(strdup("node3")));
//
// 	// chama a função ft_lstlast com a lista ligada
// 	last_node = ft_lstlast(my_list);
//
// 	// imprime o conteúdo do último nó da lista
// 	printf("Último nó: %s\n", (char *)last_node->content);
//
// 	// limpa a lista
// 	ft_lstclear(&my_list, &free);
//
// }