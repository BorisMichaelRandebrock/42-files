/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:59:22 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/04 13:11:48 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))






























/*

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
		t_list	*aux;

		aux = begin_list;
		while (aux)
		{
				if (aux->data)
					(*f)(aux->data);
				aux = aux->next;
		}
}


int	main(void)
{
		t_list	*lst;

		lst = malloc(sizeof(t_list));
		lst->data = ("Follow ");
		lst->next =(t_list*) malloc(sizeof(t_list));
		lst->next->data = ("the ");
		lst->next->next = malloc(sizeof(t_list));
		lst->next->next->data = ("white ");
		lst->next->next->next  = malloc(sizeof(t_list));
		lst->next->next->next->data = ("rabbi");
		lst->next->next->next->next = malloc(sizeof(t_list));
		lst->next->next->next->next->data = (".");
		ft_list_foreach(lst, (void *)printf);
		printf("\n");
	return (0);
}
*/






























		/*void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
		t_list	*lst;

		lst = begin_list;
		while (lst)
		{
				if (lst->data)
				{
						(*f)(lst->data);
				}
				lst = lst->next;
		}
}

t_list	*ft_new_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

int	main(void)
{
	t_list	*test_list;

	test_list = ft_new_elem("Follow ");
	test_list->next = ft_new_elem("the ");
	test_list->next->next = ft_new_elem("white ");
	test_list->next->next->next = ft_new_elem("rabbit");
	test_list->next->next->next->next = ft_new_elem(".");
	ft_list_foreach(test_list, (void *)printf);
	printf("\n");
	return (0);
}
*/
