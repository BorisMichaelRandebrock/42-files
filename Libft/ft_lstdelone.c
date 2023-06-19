/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:52:54 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/14 18:23:38 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst -> content);
	free(lst);
}
/*
void delete(void *content) 
{
	content = NULL;
}

int	main(void)
{
	char	*data;
	char	*spock;
	char	*getlost;
	t_list	*list;
	t_list	*new_node;
	t_list	*loose_node;
	t_list	*aux;

	data = "Hello there,.. they call me Data.";
	spock = "Hello there, my name is Spock.";
	getlost = "I will be deleted,... so i do not care what people call me";
	list = ft_lstnew(data);
	new_node = ft_lstnew(spock);
	ft_lstadd_back(&list, new_node);
	loose_node = ft_lstnew(getlost);
	aux = loose_node;
	ft_lstadd_back(&list, aux);
	printf("Current size of list (should be 3): \n%i\n", ft_lstsize(list));
	ft_lstdelone(loose_node, delete);
	aux = list->next;
	aux->next = NULL;
	printf("Current size of list (should be 2): \n%i", ft_lstsize(list));
	return (0);
}
*/
// comand to check leaks:
// leaks -atExit -- ./a.out
