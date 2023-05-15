/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 20:27:48 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/03 18:22:59 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main ()
// {
// 	t_list	*list;
// 	t_list	*new_node;
//
// 	list = NULL;
// 	new_node = ft_lstnew("primeiro node");
// 	ft_lstadd_back(&list, new_node);
//
// 	new_node = ft_lstnew("segundo node");
// 	ft_lstadd_back(&list, new_node);
//
// 	new_node = ft_lstnew("terceiro node");
// 	ft_lstadd_back(&list, new_node);
//
// 	void print(void *lst)
// 	{
// 		printf("O conteudo da lista neste nó é: %s\n", (char*)lst);
// 	}
//	
// 	ft_lstiter(list, &print);
// }