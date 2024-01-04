/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:31:57 by brandebr          #+#    #+#             */
/*   Updated: 2024/01/04 19:49:55 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ok(char c)
{
		if (c != ' ' && c != '\t' && c != '\0')
				return (1);
		return (0);
}

int	wc(char *str)
{
		int	i;
		int	w;

		i = 0;
		w = 0;
		while (str[i])
		{
				if ((i == 0 && ok(str[i])) || (ok(str[i]) && !ok(str[i - 1])))
						w++;
				i++;
		}
		return (w);
}

char    **ft_split(char *str)
{
		char	**res;
		int		words;
		int		w;
		int		i;
		int		j;
		int		start;
		int		end;

		words = wc(str);
		w = 0;
		i = 0;
		res = (char **)malloc(sizeof(char *) * (words + 1));
		while (w < words)
		{
			if ((i == 0 && ok(str[i])) || (ok(str[i]) && !ok(str[i - 1])))
			{
				j = 0;
				start = i;
				end = start;
				while (ok(str[end]))
						end++;
				res[w] = (char *)malloc(sizeof(char) * ((end - start) + 1));
				while (start <= end)
				{
						res[w][j] = str[start];
						start++;
						j++;
				}
				res[w][j] = '\0';
				w++;
			}				
			i++;
		}
		res[words] = NULL;
		return (res);
}

