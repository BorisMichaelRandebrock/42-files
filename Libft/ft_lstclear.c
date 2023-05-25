/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:29:54 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/25 12:57:21 by brandebr         ###   ########.fr       */
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
