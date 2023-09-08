/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13-1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:37:02 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/07 16:42:02 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] < 65 || argv[1][i] > 122)
			ft_putchar(argv[1][i]);
		else if (argv[1][i] >= 110 && argv[1][i] <= 122)
			ft_putchar(argv[1][i] - 13);
		else if (argv[1][i] >= 97 && argv[1][i] <= 109)
			ft_putchar(argv[1][i] + 13);
		else if (argv[1][i] >= 65 && argv[1][i] <= 77)
			ft_putchar(argv[1][i] + 13);
		else if (argv[1][i] >= 78 && argv[1][i] <= 90)
			ft_putchar(argv[1][i] - 13);
		i++;
	}
	write(1, "\n", 1);
}
