/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:50:44 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/04 19:44:45 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     int x;
//     int y;
//     int z;
//     t_list *list;
//     t_list *node1;
//     t_list *node2;
//     t_list *node3;
//   
//     x = 10;
//     y = 20;
//     z = 30;
//     list = NULL;
//    
//     node1 = malloc(sizeof(t_list));
//     node1->content = &x;
//    
//     node2 = malloc(sizeof(t_list));
//     node2->content = &y;
//   
//     node3 = malloc(sizeof(t_list));
//     node3->content = &z;
//    
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;
//    
//     list = node1;
//    
//     int size = ft_lstsize(list);
//     printf("O tamanho da lista é: %d\n", size);
// }
