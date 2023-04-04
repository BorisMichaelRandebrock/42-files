/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezsalas <ezsalas@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:19:35 by ezsalas           #+#    #+#             */
/*   Updated: 2023/04/01 20:39:52 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush02_top(char x)
{
	char	max;

	max = x;
	while (x > 0)
	{
		if (x == max || x == 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		x--;
	}
	ft_putchar('\n');
}

void	rush02_middle_section(char x)
{
	char	max;

	max = x;
	while (x > 0)
	{
		if (x == max || x == 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		x--;
	}
	ft_putchar('\n');
}

void	rush02_bottom(char x)
{
	char	max;

	max = x;
	while (x > 0)
	{
		if (x == max || x == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		x--;
	}
}

void	rush02(char x, char y)
{
	char	max;

	max = y;
	while (y > 0)
	{
		if (y == max)
			rush02_top(x);
		else if (y == 1)
			rush02_bottom(x);
		else
			rush02_middle_section(x);
		y--;
	}
	ft_putchar('\n');
}
