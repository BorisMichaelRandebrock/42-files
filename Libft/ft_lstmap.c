/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:39:40 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/25 18:46:06 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			new_content = f(lst -> content);
			new_node = ft_lstnew(new_content);
			if (!new_node)
			{
				free(new_content);
				ft_lstclear(&new_lst, del);
				return (0);
			}
			ft_lstadd_back(&new_lst, new_node);
			lst = lst -> next;
		}
	}		
	return (new_lst);
}
