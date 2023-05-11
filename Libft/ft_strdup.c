/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:46:38 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/11 18:41:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*willy;

	len = ft_strlen(s1) + 1;
	willy = (char *) malloc(len * sizeof(char));
	if (!willy)
		return (NULL);
	ft_strlcpy(willy, s1, len);
	return (willy);
}
