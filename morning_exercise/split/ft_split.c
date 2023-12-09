/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:52:36 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/08 12:26:39 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int		ok(char c)
{
		if (c > 32 && c < 127)
				return (1);
		return (0);
}

int		wc(char *s)
{
		int		ws;
		int 	i;

		ws = 0;
		i = 0;
		while (s[i])
		{
				if ((i == 0 && ok(s[i])) || (!ok(s[i - 1]) && ok(s[i])))
						ws++;
				i++;
		}
		return (ws);	
}


char    **ft_split(char *str)
{
		char	**res;
		int		len;
		int		w;
		int		i;
		int		j;
		int		start;
		int		end;

		len = wc(str);
		w = 0;
		i = 0;
		res = (char **)malloc(sizeof(char *) * (len + 1));
		if (!res)
				free(res);
		while (w < len)
		{
				if ((i == 0 && ok(str[i])) || (ok(str[i]) && !ok(str[i -1])))
				{
						start = i;
						j = 0;
						end = start;
						while (ok(str[end]))
								end++;
						res[w] = (char *)malloc(sizeof(char) * ((end - len) + 1));
						if (!res[w])
								free(res[w]);
						while (start < end)
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
		res[w] = NULL;
		return (res);
}

int		main(int argc, char **argv)
{
		char	**res;
		int		i;

		i = 0;
		res = NULL;
		if (argc == 2)
		{
				res = ft_split(argv[1]);
				while (res[i])
				{
						printf("%s\n", res[i]);
						i++;
				}
		}
		return (0);			
}














































/*
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
		i = 0;=
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
		wo = count(argv[1]);
		res = NULL;
		if (argc == 2)
		{
				res = ft_split(argv[1]);
				while (res[i])
				{
					printf("%s\n", res[i]);
					i++;
				}
				i = 0;
					printf("\n");
				while (i < wo)
					printf("%s\n", res[i++]);
						
		}
		return (0);
}
*/
