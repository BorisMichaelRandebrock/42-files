/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:36:12 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/16 11:22:51 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	bo(char c)
{
		write(1, &c, 1);
}

void	search_and_replace(char *s, char f, char r)
{
		int		i;

		i = 0;
		while (s[i])
		{
				if (s[i] == f)
						bo(r);
				else
						bo(s[i]);
				i++;
		}
}

int		main(int argc, char **argv)
{
		int		i;

		i = 0;
		if (argc != 4)
		{
				write(1, "\n", 1);
				exit (0);
		}
		while (argv[2][i])
		{
				i++;
				if (i > 1)
				{
						write(1, "\n", 1);
						exit (0);
				}
		}
		if (argv[3][1])
		{
				write(1, "\n", 1);
				exit (0);
		}
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
		write(1, "\n", 1);
		return (0);
}
