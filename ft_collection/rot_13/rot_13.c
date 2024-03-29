/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:24:33 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/06 12:30:43 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	char c;
	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while (argv[1][i])
	{
		c = argv[1][i];
		if (c < 65 || c > 122)
			write(1, &c, 1);
		else if (c > 90 && c < 97)
			write(1, &c, 1);
		else if (c > 96 && c < 110)
		{
			c += 13;
			write(1, &c, 1);
		}
		else if (c > 109 && c < 123)
		{
			c -= 13;
			write(1, &c , 1);
		}
		else if (c > 64 && c < 78)
		{
			c += 13;
			write(1, &c, 1);
		}
		else if (c > 77 && c < 91)
		{
			c -= 13;
			write(1, &c , 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
