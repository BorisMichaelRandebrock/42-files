/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:34:22 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/15 17:46:10 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pu(char c)
{
		write(1, &c, 1);
}

void	last_word(char *str)
{
		int		i;
		int		start;

		i = 0;
		while (str[i])
		{
				if (str[i] <= 32 && str[i + 1] >= 33 && str[i] <= 126)
						start = i + 1;
				i++;
		}
		while (str[start] >= 33 && str[start] <= 126)
				pu(str[start++]);
}

int		main(int argc, char **argv)
{
		if (argc == 2)
				last_word(argv[1]);
		write(1, "\n", 1);
		return (1);
}
