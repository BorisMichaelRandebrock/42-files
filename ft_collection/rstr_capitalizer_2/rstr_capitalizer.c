/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:53:56 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/15 18:58:23 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pu(char c)
{
		write(1, &c, 1);
}

void	rstr_capitalizer(char *s)
{
	int		i;

	i = 0;
	while(s[i])
	{
			if ((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0'))
					pu(s[i] - 32);
			else if ((s[i] >= 'A' && s[i] <= 'Z') && !(s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0'))
					pu(s[i] + 32);
			else
					pu(s[i]);
			i++;
	}
}

int		main(int argc, char **argv)
{
		int		i;

		i = 1;
		if (argc < 2)
				pu('\n');
		else
		{
				while (argv[i])
				{
						rstr_capitalizer(argv[i]);
						pu('\n');
						i++;
				}
		}
		return (1);
}
