/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:16:35 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/12 17:33:40 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*willy;

	i = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	willy = (char *)ft_calloc(len + 1, sizeof(char));
	if (!willy)
		return (NULL);
	if (ft_strlen(s) < start)
		return (willy);
	while ((i < len) && s[start] != '\0')
	{
		willy[i] = s[start];
		i++;
		start++;
	}
	return (willy);
}
