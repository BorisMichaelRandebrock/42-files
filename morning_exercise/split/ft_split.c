/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:52:36 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/06 13:15:06 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int		ok(char c)
{
		if (c > ' ' && c <= '~')
				return (1);
		return (0);
}

int		wc(char *s)
{
		int		i;
		int		words;

		i = 0;
		words = 0;
		while (s[i])
		{
				if ((i == 0 && ok(s[i])) || (!ok(s[i]) && ok(s[i + 1])))
						words++;
				i++;
		}
		return (words);
}

char    **ft_split(char *str)
{
		char	**res;
		int		len;
		int		word;
		int		i;
		int		j;
		int		start;
		int		end;
		
		word = 0;
		i = 0;
		len = wc(str);
		res = malloc(sizeof(char *) * (len + 1));
		if (!res)
				free(res);
		while (word < len)
		{
				if ((i == 0 && ok(str[i])) || (ok(str[i]) && !ok(str[i -1])))
				{			
						start = i;
						j = 0;
						while (ok(str[i]))
								end = i++;
						res[word] = malloc(sizeof(char) * ((end - start) + 1));
						if (!res[word])
								free(res[word]);
						while (start <= end)
						{
								res[word][j] = str[start];
								start++;
								j++;
						}
						res[word][j] = '\0';
						word++;
				}
				i++;
		}
		res[word] = NULL;
		return (res);
}

int	main(int argc, char **argv)
{
		int		i;
		char	**res;	
		int		wo;

		i = 0;
		wo = wc(argv[1]);
		res = NULL;
		if (argc == 2)
				res = ft_split(argv[1]);
		while (res[i])
		{
				printf("%s\n", res[i]);
				i++;
		}
		return (0);
}































/*
int		ok(char c)
{
		if (c > 32 && c < 127)
				return (1);
		return (0);
}

int		wc(char *s)
{
		int		i;
		int		words;

		i = 0;
		words = 0;
		while (s[i])
		{
				if ((i == 0 && ok(s[i])) || (ok(s[i]) == 0  && ok(s[i + 1]) == 1))
						words++;
				i++;
		}
		return (words);
}

char    **ft_split(char *str)
{
		char	**res;
		int		words;
		int		i;
		int		j;
		int		start;
		int		end;
		int		k;

		i = 0;
		j = 0;
		words = wc(str);
		res = malloc((words + 1) * sizeof(char *));
		if (!res)
				return NULL;
		while (i < words)
		{
				if ((j == 0 && ok(str[j])) || (!ok(str[j - 1]) && ok(str[j])))
				{
						start = j;
						k = 0;
						while (ok(str[j]))
						{
								end = j++;
						}
						res[i] = malloc(sizeof(char) * (end - start + 1));
						while (start <= end)
						{
								res[i][k] = str[start];
								start++;
								k++;
						}
						res[i][k] = '\0';
						i++;
				}
				j++;
		}
		res[i] = NULL;
		return (res);
}

int		main(int argc, char **argv)
{
		int		wo;
		int		i;
		char	**res;

		i = 0;
		wo = (wc(argv[1]));
		if (argc == 2)
				res = ft_split(argv[1]);
		while (i < wo)
				printf("%s\n", res[i++]);
		return (0);
}

*/
/*
bool		is_valid(char c)
{
		if (c >= '!' && c <= 126)
				return (true);
		return (false);
}

int		word_count(char	*str)
{
		int		wc;
		int		i;

		wc = 0;
		i = 0;
		while (str[i])
		{
				if ((i == 0 && is_valid(str[i])) || (!is_valid(str[i - 1]) && is_valid(str[i])))
						wc++;
				i++;
		}
		return (wc);
}

char    **ft_split(char *str)
{
		char	**words;
		int		wc;
		int 	w;
		int		i;
		int		j;
		int		start;
		int		end;
		
		w = 0;
		i = 0;
		wc = word_count(str);
		words = malloc(sizeof(char *) * (wc + 1));
		if (!words)
				return NULL;
		while (w < wc)
		{
				if ((i == 0 && is_valid(str[i])) || (!is_valid(str[i -1]) && is_valid(str[i])))
				{
						start = i;
						j = 0;
						while (is_valid(str[i]))
										end = i++;
						words[w] = malloc(sizeof(char) * ((end - start) + 1));
						while (start <= end)
						{
								words[w][j] = str[start];
								start++;
								j++;
						}
						words[w][j] = '\0';
						w++;
				}
				i++;
		}
		words[wc] = NULL;
		return (words);
}

int		main(int argc, char **argv)
{
		int		i;
		int		wo;
		char	**res;

		i = 0;
		wo = word_count(argv[1]);
		if (argc == 2)
				res = ft_split(argv[1]);
		while (i < wo)
				printf("%s\n", res[i++]);
		printf("\n");
		return (0);
}*/
