/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:29:54 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/15 13:29:44 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*strtdlt;

	while (*lst)
	{
		strtdlt = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = strtdlt;
	}
	*lst = NULL;
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
	t_list	*list;
	t_list	*new_node;

	data = "Hello there,.. they call me Data.";
	spock = "Hello there, my name is Spock.";
	list = ft_lstnew(data);
	new_node = ft_lstnew(spock);
	ft_lstadd_back(&list, new_node);
	printf("list size, should be 2: %i\n", ft_lstsize(list));
	ft_lstclear(&list, delete);
	printf("list size, should be null: %i\n", ft_lstsize(list));
}*/
