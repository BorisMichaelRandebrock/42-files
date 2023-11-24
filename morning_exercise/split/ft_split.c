/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:52:36 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/24 13:23:55 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


































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
				if ((!is_valid(str[i - 1]) && is_valid(str[i])) || (i == 0 && is_valid(str[i])))
						wc++;
				i++;
		}
		return (wc);
}

int		word_length(char *str)
{
		int		i;
		int		len;

		i = 0;
		len = 0;
		while (str[i] && is_valid(str[i + 1]))
		{
				if (!is_valid(str[i]))
						i++;
				while (is_valid(str[i]))
				{
						len++;
						i++;
				}
		}
		return (len);
}

char	*cpy(char *s)
{
		int		wl;
		int		i;
		char	*new;

		i = 0;
		wl = word_length(s);
		new = malloc((wl + 1) * sizeof(char));
		if (!new)
		{
				free(new);
				return (NULL);
		}
		while (i < wl)
		{
				new[i] = s[i];
				i++;
		}
		new[i] = '\0';
		return (new);
}

char    **ft_split(char *str)
{
		int 	i;
		int		wc;
		int		wl;
		char	**words;

		wc = word_count(str);
		words = malloc(sizeof(char *) * (wc + 1));
		if (!words)
				return NULL;
		wl = word_length(str);
		i = 0;
		printf("word length:%i\n", i);

		while (words[i])
		{
				if (is_valid(str[i]))
						write(1, &str[i], 1);
				i++;
		}
		char **result = malloc(sizeof(char *) * 2);

		result[0] = "Hello";
		result[1] = "World";
		return (result);
}

int		main(int argc, char **argv)
{
		if (argc == 2)
				ft_split(argv[1]);
		write(1, "\n", 1);
		return (0);
}*/
