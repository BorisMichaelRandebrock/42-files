/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:54:47 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/13 11:09:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

void	puts(char c)
{
	write(1, &c, 1);
}

void	rev_print(char *str)
{
	int	i;

	i = str_len(str);
	while (i >= 0)
	{
		puts(str[i]);
		i--;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
