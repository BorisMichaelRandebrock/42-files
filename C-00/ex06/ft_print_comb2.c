/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:37:25 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/03 16:10:24 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_sequence(char i, char j)
{
	ft_putchar(i / 10 + '0');
	ft_putchar(i % 10 + '0');
	ft_putchar(' ');
	ft_putchar(j / 10 + '0');
	ft_putchar(j % 10 + '0');
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	while (i <= 98)
	{	
		j = i + 1;
		while (j <= 99)
		{
			if (i == 98)
			{
				print_sequence(i, j);
			}
			else
			{
				print_sequence(i, j);
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
