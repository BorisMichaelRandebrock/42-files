/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:22:23 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/30 17:25:43 by brandebr         ###   ########.fr       */
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
	/*			if (!ok(str[i]) && ok(str[i + 1]))
				{
						start = i + 1;
						next = i;
				}
	*/			i++;
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
				rev_wstr(argv[1]);
		bo('\n');
		return (0);
}



