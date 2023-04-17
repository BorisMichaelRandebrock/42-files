/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferna <sarferna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:16:56 by sarferna          #+#    #+#             */
/*   Updated: 2023/04/16 21:35:31 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

open_dict(argc, argv);

unsigned int	str_len(char *str[j])
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

void	ft_dec(char *argv[j], unsigned int len_i, unsigned int i)
{
	char	willy[3];

	willy = (char *) malloc(sizeof(char) * 3);
	if ((((len_i) - 2) % 3) == 0)
	{
		if (argv[j][i] == 1)
		{
			willy[0] = argv[j][i];
			willy[1] = argv[j][i + 1];
			if (willy == NULL)
				free(willy);
			read(file, willy[i], sizeof(char) * str_len);
		}
		else
		{
			willy[0] = argv[j][i];
			willy[1] = '0';
			if (willy == NULL)
				free(willy);
		}
	}
	free(willy);
}

void	ft_rest(char *argv[j], unsigned int len_i, unsigned int i)
{
	argv[j][i];
	if (((len_i) % 3) == 0)
	{
	}
	if ((len_i) == 4)
	{
	}
	if ((len_i) == 7)
	{
	}
	if ((len_i) == 10)
	{
	}
}

void	trans_num(char *argv[j])
{
	unsigned int	len_i;
	unsigned int	i;

	i = 0;
	len_i = str_len(argv) - i;
	while (len_str != 0)
	{
		if (argv[j][i] != 0)
		{
			if ((((len_i) - 2) % 3) == 0)
				ft_dec(argv, len_i, i);
			if ((((len_i) - 1) % 3) == 0 || ((len_i) % 3) == 0)
				ft_rest(argv, len_i, i);
		}
		i++;
	}
}
