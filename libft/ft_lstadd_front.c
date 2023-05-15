/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:22:44 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/04 19:59:12 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}	
}

// int main ()
// {
//     char *s = "eu sou primeiro node";
//     char *s1 = "agora eu sou o primeiro node";
//     char *s2 = "eu que sou agora";
//     t_list    *list;
//     t_list    *new_node;
//
//     list = NULL;
//     new_node = ft_lstnew(s);
//     ft_lstadd_front(&list, new_node);
//
//     new_node = ft_lstnew(s1);
//     ft_lstadd_front(&list, new_node);
//
//     new_node = ft_lstnew(s2);
//     ft_lstadd_front(&list, new_node);
//
//   
// }