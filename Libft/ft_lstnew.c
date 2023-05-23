/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:33:51 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/23 15:59:02 by brandebr         ###   ########.fr       */
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
	//	return ((t_list *) malloc(sizeof(t_list)));
