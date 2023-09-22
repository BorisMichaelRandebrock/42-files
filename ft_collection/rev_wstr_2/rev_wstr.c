/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:16:11 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/15 17:17:40 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	puts(char c)
{
	write(1, &c, 1);
}

void	print_it(char *str)
{
	int	i;

	i = 0;
	while (str[i] &&  str[i] != ' ')
	{
		puts(str[i]);
		i++;
	}
}

int	stlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rev_wstr(char *str)
{
	int	i;

	i = stlen(str);
	while  (i > 0)
	{
		while (str[i - 1] != ' ' && i > 0)
		{
			i--;
		}
		print_it(&str[i]);
		if (i != 0)
			puts(' ');
		i--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
