/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:27:06 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/14 17:37:50 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*willy;

	i = 0;
	j = 0;
	if (!s1)
		return (ft_strdup(s2));
	willy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!willy)
	{
		free(s1);
		return (NULL);
	}
	while (s1[i])
	{
		willy[i] = s1[i];
		i++;
	}
	while (s2[j])
		willy[i++] = s2[j++];
	willy[i] = '\0';
	free(s1);
	return (willy);
}
