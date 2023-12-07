/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:52:36 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/07 17:44:37 by brandebr         ###   ########.fr       */
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

int		count(char *s)
{
		int		i;
		int		wc;

		i = 0;
		wc = 0;
		while (s[i])
		{
			if ((i == 0 && ok(s[i])) || (!ok(s[i]) && ok(s[i + 1])))
						wc++;
				i++;
		}
		return wc;
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

		res = NULL;
		len = count(str);
		i = 0;
		word = 0;
		res = (char **)malloc(sizeof(char *) * (len + 1));
		if (!res)
				free(res);
		while (word < len)
		{
				if ((i == 0 && ok(str[i])) || (!ok(str[i -1]) && ok(str[i])))
				{
						start = i;
					//	end = i;
						j = 0;
						while (ok(str[i]))
								end = i++;
						res[word] = (char *)malloc(sizeof(char) * ((end - start) +1));
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
		//	printf("%i \n",len );
		return (res);
}

int		main(int argc, char **argv)
{
		int		words;
		char	**ar;
		int		i;

		i  = 0;
		words = count(argv[1]);
		if (argc == 2)
		{
				ar = ft_split(argv[1]);
				while (i < words)
						printf("%s\n", ar[i++]);
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
