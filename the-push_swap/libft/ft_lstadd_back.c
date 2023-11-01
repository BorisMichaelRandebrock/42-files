/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:04:13 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/18 19:32:33 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> index = -1;
		last -> next = new;
	}
}*/

void ft_lstadd_back(t_number **lst, t_number *new)
{
    t_number *last;

    if (*lst == NULL)
        *lst = new;
    else
    {
        last = *lst;
        while (last->next != NULL)
            last = last->next;
        last->next = new;
        new->prev = last;
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
