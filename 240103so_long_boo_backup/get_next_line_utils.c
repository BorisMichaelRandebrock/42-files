/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:31:22 by brandebr          #+#    #+#             */
/*   Updated: 2023/07/19 13:58:23 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i <= len)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*willy;

	i = 0;
	j = 0;
	if (!s1)
		return (ft_strdup(s2));
	willy = (char *)malloc(sizeof(char) * (ft_strlen(s1) +ft_strlen(s2) + 1));
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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

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
