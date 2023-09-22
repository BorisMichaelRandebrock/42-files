/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:12:10 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/21 12:34:13 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>






/*
int	wordcnt(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		if  (str[i] != ' ' && str[i])
		{
			j++;
			i++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	return (j);
}

int	stle(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && str[i] != ' ')
	{
		j++;
		i++;
	}
	return (j);
}

void	pu(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	rostring(char *str)
{
	int	i;
	int	j;
	int	flag;
	char	fword[123];

	j = 0;
	i = 0;
	flag = 0;
	while (str[i] && str[i] != ' ')
	{
		fword[j] = str[i];
		i++;
		j++;
	}
	fword[j] = '\0';
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
		{
			flag = 1;
			i++;
		}
		while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		{
			write(1, &str[i++], 1);
			flag = 0;
		}
		if (wordcnt(str) > 1)
			write(1, " ", 1);
	}
	pu(fword);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
*/
