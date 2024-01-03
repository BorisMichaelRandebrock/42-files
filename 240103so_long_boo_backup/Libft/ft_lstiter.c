/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:04:20 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/16 13:34:11 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*
void	number_x_2(void	*nb)
{
	int	*number;

	number = (int *)nb;
	*number *= 2;
}

void	string_to_upper(void * str)
{
	int	i;
	char	*string;

	string = (char *)str;
	i = 0;
	while (string[i])
	{
		string[i] = ft_toupper(string[i]);
		i++;
	}
}

int	main(void)
{
	char	*data;
	char	*moredata;
	char	*somemoredata;
	int	number;
	t_list	*list;
	t_list	*new_node;
	t_list	*temp;

	number = 21;
	data = ft_strdup("i");
	moredata = ft_strdup("love");
	somemoredata = ft_strdup("you");
	list = ft_lstnew(data);
	new_node = ft_lstnew(moredata);
	ft_lstadd_back(&list, new_node);
	new_node = ft_lstnew(somemoredata);
	ft_lstadd_back(&list, new_node);
	temp = list;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstiter(list, &string_to_upper);
	temp = list;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	printf("initial number:%i\n", number);
	number_x_2(&number);
	printf("final number:%i\n", number);
	return (0);
}*/
