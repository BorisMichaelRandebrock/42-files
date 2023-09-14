/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:32:52 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/13 12:34:28 by brandebr         ###   ########.fr       */
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

void	rstr_capitalizer(char *str)
{
	int	i;
	char	*new;
	
	i = 0;
	new = str;
	while (new[i])
	{
		if (new[i] >= 'A' && new[i] <= 'Z')
		{
			new[i] += 32;
		}
		i++;
	}
	i = 0;
	while (new[i])
	{
		if (new[i + 1] == ' ' && (new[i] >= 'a' && new[i] <= 'z'))
		{
			puts(new[i] - 32);
			i++;
		}
		else if (new[i + 1] == '\0' && (new[i] >= 'a' && new[i] <= 'z'))
		{
			puts(new[i] - 32);
			i++;
		}
		else
		{
			puts(new[i]);
			i++;
		}
	}
	write(1, "\n", 1);
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
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
