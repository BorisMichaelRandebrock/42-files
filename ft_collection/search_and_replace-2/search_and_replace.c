/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:21:34 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/20 13:00:44 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pu(char c)
{
	write(1, &c, 1);
}

void	pups(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		pu(str[i++]);
}

void	search_and_replace(char *str, char s, char r)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == s)
		{
			pu(r);
			i++;
		}
		else
			pu(str[i++]);
	}
}

int	count(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if ((count(argv[2]) >= 2 || count(argv[3]) >= 2) || count(argv[2]) == 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc == 4)
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
