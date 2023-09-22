/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:06:27 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/15 12:03:56 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puts(char c)
{
	write(1, &c, 1);
}

void	camel_to_snake(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			puts('_');
			puts(str[i++] + 32);
		}
		else
			puts(str[i++]);
	}	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	puts('\n');
	return (0);
}
/*
void	snake_to_camel(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == '_')
		{
			puts(str[++i] - 32);
		}
		puts(str[i++]);
	}
}*/
