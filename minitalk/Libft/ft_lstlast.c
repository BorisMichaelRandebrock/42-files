/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:05:27 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/14 14:40:28 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (NULL);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}
/*
int	main(void)
{
	char	*data;
	char	*spock;
	t_list	*list;

	data = "Hello there,.. they call me Data.";
	spock = "Hello there, my name is Spock.";
	list = ft_lstnew(data);
	t_list *new_frode = ft_lstnew(spock);
	ft_lstadd_front(&list, new_frode);
	printf("pointer adress of the last node:\n%p", ft_lstlast(list));
	printf("\ncontent of the last node:\n%s", (char *)ft_lstlast(list)->content);
	return (0);
}
*/
