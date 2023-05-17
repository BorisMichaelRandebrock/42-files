/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:50:10 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/17 19:34:39 by brandebr         ###   ########.fr       */
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
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**willy;

	i = 0;
	count = word_counter(s, c);
	willy = (char **)malloc(count + 1);
	if (!willy)
		return (NULL);
	willy[count] = NULL;
	if (!s)
		return (NULL);
	while (i < count)
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
	/*
	int		i;
	char	**willy;
//	char	**retrn;

//	retrn = NULL;
	i = 0;
	willy = malloc(ft_strlen(s) + 1);
	if (!willy)
		return (NULL);
	while (s[i] != c)
	{
		willy[i] = s[i];
		i++;
	}
	willy[i] = '\0';
(void	free(willy);
	willy = (char *)malloc(i * 1);
	if (!willy)
		return (NULL);

	return (willy);
*/
/*
static void	the_splitter(int i, char const *s, char c, char **willy )
{
	int	j;

	j = 0;
	while (s[j] && s[j] != c)
		j++;
	willy[i] = (char *)malloc(sizeof(char) * (j + 1));
	if (!willy[i])
		return ;
	ft_memcpy(willy[i], s, j);
	willy[i][j] = '\0';
	s += j;
	if (*s == c)
		s++;
	i++;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**willy;

	i = 0;
	willy = (void *)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!willy)
		return (NULL);
	i = 0;
	while (*s)
	{
		the_splitter(i, s, c, willy);
		i++;
		while (*s && *s != c)
            s++;
        if (*s == c)
            s++;
	}
	willy[i] = NULL;
	return (willy);
}*/
