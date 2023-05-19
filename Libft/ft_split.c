/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:50:10 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/18 13:17:57 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (counter);
}

static char	**free_willy(char **willy, int i)
{
	while (i--)
		free(willy[i]);
	free(willy);
	return (NULL);
}

static char	*word_dup(char const *s, char c)
{
	size_t	len;
	char	*willy;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	willy = (char *)malloc((len + 1) * sizeof(char));
	if (!willy)
		return (NULL);
	ft_strlcpy(willy, s, len + 1);
	return (willy);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**willy;

	i = 0;
	words = word_counter(s, c);
	willy = (char **)malloc((words + 1) * sizeof(char *));
	if (!s || !willy)
		return (NULL);
	willy[words] = NULL;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		willy[i] = word_dup(s, c);
		if (!willy[i])
			return (free_willy(willy, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	return (willy);
}
