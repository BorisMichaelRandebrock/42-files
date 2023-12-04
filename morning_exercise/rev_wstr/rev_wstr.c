/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:22:23 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/04 15:12:59 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>


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

static int leng(char *s)
{
		int		i;

		i = 0;
		while (s[i])
				i++;
		return (i);
}

void    rev_wstr(char *str)
{
		int		len;
		int		pr;
		int		space;
		int		start;

		len = leng(str) -1;
		space = 0;
		start = 0;
		while (str[start])
		{
				while  (!ok(str[start]))
						start++;
				break ;
		}
		while (len >= 0)
		{
				if (len == start)
						space = 1;
				if ((len == start) ||( !ok(str[len - 1]) && ok(str[len])))
				{
						pr = len;
						while (ok(str[pr]))
								bo(str[pr++]);
						if (space == 0)
								write(1, " ", 1);
				}
			//	printf("%i\n", len);
				len--;
		}
}







































/*

void	rev_wstr(char *str)
{
		int		i;
	//	int		start;
		int		next;
		int		flag;

		i = 0;
		flag = 0;
		while (str[i])
		{
	//			if (!ok(str[i]) && ok(str[i + 1]))
	//			{
	//					start = i + 1;
	//					next = i;
	//			}
	//			i++;
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
*/
int		main(int argc, char **argv)
{
		if (argc == 2)
				rev_wstr(argv[1]);
		bo('\n');
		return (0);
}



