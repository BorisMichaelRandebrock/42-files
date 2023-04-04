/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:00:05 by ereinald          #+#    #+#             */
/*   Updated: 2023/04/01 16:54:01 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_x(char x)
{
	char	max_x;

	max_x = x;
	while (x > 0)
	{
		if (x == 1 || x == max_x)
			ft_putchar('o');
		else
			ft_putchar('-');
		x--;
	}
	ft_putchar('\n');
}

void	rush_y(char y)
{
	char	max_y;

	max_y = y;
	while (y > 0)
	{
		if (y == 1 || y == max_y)
		{
			ft_putchar('|');
			if (y == 1)
				ft_putchar('\n');
		}
		else
			ft_putchar(' ');
		y--;
	}
}

void	rush00(char x, char y)
{
	char	max;

	max = y;
	while (y > 0)
	{
		if (y == max || y == 1)
			rush_x(x);
		else
			rush_y(x);
		y--;
	}
}
