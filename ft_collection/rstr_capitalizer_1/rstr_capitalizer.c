/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:26:41 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/14 15:55:03 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puts(char c)
{
	write(1, &c, 1);
}

void	minor(char *str)
{
}

void	rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else
			str[i] = str[i];
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '\t' ) && (str[i] >= 'a' && str[i] <= 'z'))
			puts(str[i] - 32);
		else
			puts(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			rstr_capitalizer(argv[i]);
			i++;
			write(1, "\n", 1);
		}
	}
	else 
		write(1, "\n", 1);
	return (0);
}
