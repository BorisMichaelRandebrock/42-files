/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:04:13 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/14 15:10:26 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}
/* 
int	main(void)
{
	char	*data;
	char	*spock;
	t_list	*list;

	data = "Hello there,.. they call me Data 🙋🏼‍♂️.";
	spock = "Hello there, my name is Spock. 🖖";
	list = ft_lstnew(data);
	t_list *new_lst_node = ft_lstnew(spock);
	ft_lstadd_back(&list, new_lst_node);
	printf("pointer lst node added:\n %p", ft_lstlast(list));
	printf("\ncontent lst node (should be spock)\n%s",(char *)/
	ft_lstlast(list)->content);
	return (0);
}
*/
