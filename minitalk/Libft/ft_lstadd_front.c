/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:57:40 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/14 13:05:25 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	char	*data;
	char	*data2;
	t_list	*list;

	data = "Hello there,.. they call me Data.";
	data2 = "Hello there, my name is Spock.";
	list = ft_lstnew(data);
	printf("Original list:\n");
	printf("Content: %s\n", (char *)list->content);
	printf("Next: %p\n", (void *)list->next);
	t_list *new_node = ft_lstnew(data2);
	ft_lstadd_front(&list, new_node);
	printf("\nModified list after adding a new node at the front:\n");
	printf("Content: %s\n", (char *)list->content);
	printf("Next: %p\n", (void *)list->next);
	printf("Content of the new node: %s\n", (char *)new_node->content);
 	printf("Next node pointer: %p\n", (char *)list->next->content);
	puts((char *)list->next->content);
	printf("Content (Node 2): %s\n", (char *)list->next->content);
	return (0);
}*/
