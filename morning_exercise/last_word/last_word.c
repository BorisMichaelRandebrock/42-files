/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:52:35 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/30 17:19:38 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


static void	bo(char c)
{
		write(1, &c, 1);
}

static int		ok(char c)
{
		if (c > 32 && c <  127)
				return (1);
		return (0);
}

void	last_word(char *str)
{
		int		i;
		int		start;
		int		next;
		int		flag;

		i = 0;
		flag = 0;
		while (str[i])
		{
				if (!ok(str[i]) && ok(str[i + 1]))
				{
						start = i + 1;
						next = i;
				}
				i++;
		}
		i--;
		next = i;
		while ( next >= 0)
		{
				while (!ok(str[next]))
				{
						next--;
						i--;
				}
				if (next == 0)
						flag = 1;
				while ((next == 0 && ok(str[next])) || (ok(str[next]) && !ok(str[next -1])))
				{
						while (ok(str[next]))
							bo(str[next++]);
						if (i > 0)
								bo(' ');
				}
				i--;
				flag = 0;
				next = i;
		}
}

int		main(int argc, char **argv)
{
		if (argc == 2)
				last_word(argv[1]);
		bo('\n');
		return (0);
}


























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
		while (str[start] && ok(str[start]))
				bo(str[start++]);
}
*/


































/*
void	bo(c)
{
	write(1, &c, 1);
}

int		ok(char c)
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
				if (ok(str[i + 1]) && !ok(str[i]))
					start = i + 1;
				i++;
		}
		while (str[start] && ok(str[start]) == 1)
		{
				bo(str[start++]);
		//		start++;
		}
}
*/


















/*
void	boo(char c)
{
		write(1, &c, 1);
}

void	last_word(char *str)
{
		int		i;
		int		start;

		i = 0;
		start = 0;
		while (str[i])
		{
				if (str[i] < 33 && str[i + 1] >= 33 && str[i + 1] < 127)
						start = i + 1;
				i++;
		}
		while (str[start] && str[start] > 32 && str[start] < 127)
		{
				boo(str[start]);
				start++;
		}
}

int	main(int argc, char **argv)
{
		if (argc == 2)
				last_word(argv[1]);
		write(1, "\n", 1);
		return (0); 
}*/