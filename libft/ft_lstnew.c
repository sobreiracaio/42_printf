/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:46:55 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/02 19:16:20 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(*element));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

// int main()
// {
// 	int *content = malloc(sizeof(int));
// 	*content = 42;

// 	t_list *new = ft_lstnew(content);
// 	printf("conteudo de new : %d\n", *(int *)new->content);
// 	printf("ponteiro para o prox elemento: %p\n", new->next);
// 	free(content);
// 	free(new);
// }