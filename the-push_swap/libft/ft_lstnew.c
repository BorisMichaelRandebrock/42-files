/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:33:51 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/18 20:13:18 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int *content)
{
	(void)content;
	t_list	*willy_node;

	willy_node = ((t_list *)malloc(sizeof(t_list)));
	if (!willy_node)
		return (NULL);
//	willy_node -> first->content = content;
	willy_node -> index = -1;
	willy_node -> first->next = NULL;
	return (willy_node);
}
/*
int	main(void)
{
	char	*data;
	
	data = "Hello there, my name is Data.";
	t_list *l = ft_lstnew(data);
	puts((char *)l->content);
	printf("lstnew: %s\n", (char *)l->content);
	return (0);
}
*/
//	return ((t_list *) malloc(sizeof(t_list)));
