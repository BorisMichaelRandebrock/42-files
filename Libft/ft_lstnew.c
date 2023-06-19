/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:33:51 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/13 19:09:49 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*willy_node;

	willy_node = ((t_list *)malloc(sizeof(t_list)));
	if (!willy_node)
		return (NULL);
	willy_node -> content = content;
	willy_node -> next = NULL;
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
