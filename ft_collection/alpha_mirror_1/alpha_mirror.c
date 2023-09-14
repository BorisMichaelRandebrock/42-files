/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:01:07 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/14 12:18:14 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puts(char c)
{
	write(1, &c, 1);
}



void	alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' &&  str[i]<= 'z')
		{
			puts('z' - (str[i] - 'a'));
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			puts('Z' - (str[i] - 'A'));
		}
		else 
			puts(str[i]);
		i++;
	}	
}

int	 main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
