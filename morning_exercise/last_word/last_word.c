/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:35 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/04 14:08:05 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{}
































/*
static void	bo(char c)
{
		write(1, &c, 1);
}

static int		ok(char c)
{
		if (c > 32 && c < 127)
				return (1);
		return (0);
}

void	last_word(char *str)
{
		int		i;
		int		start;

		i = 0;
		start = 0;
		while (str[i])
		{
				if (!ok(str[i]) && ok(str[i + 1]))
						start = i + 1;
				i++;
		}
		while (ok(str[start]))
				bo(str[start++]);
}

int	main(int argc, char **argv)
{
		if (argc == 2)
			last_word(argv[1]);
		bo('\n');
}
*/
