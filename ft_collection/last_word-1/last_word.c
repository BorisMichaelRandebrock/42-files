/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:33:58 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/16 11:44:25 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	bo(char c)
{
		write(1, &c, 1);
}

void	last_word(char *s)
{
		int		i;
		int		start;

		i = 0;
		while (s[i])
		{
				if (s[i] <= 32 && (s[i + 1] >= 33 && s[i + 1] <= 126))
						start = i + 1;
				i++;
		}
		while (s[start] && s[start] >= 33 && s[start] <= 126 )
		{
				bo(s[start]);
				start++;
		}
}

int		main(int argc, char **argv)
{
		if (argc == 2)
				last_word(argv[1]);
		bo('\n');
		return (0);
}
