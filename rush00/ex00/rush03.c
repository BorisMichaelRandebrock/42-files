/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:29:22 by ereinald          #+#    #+#             */
/*   Updated: 2023/04/01 20:08:48 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush03_top(char x)
{
	char	max;

	max = x;
	while (x > 0)
	{
		if (x == max)
			ft_putchar('A');
		else if (x == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		x--;
	}
	ft_putchar('\n');
}

void	rush03_bottom(char x)
{
	char	max;

	max = x;
	while (x > 0)
	{
		if (x == max)
			ft_putchar('A');
		else if (x == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		x--;
	}
	ft_putchar('\n');
}

void	rush03_middle(char x)
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

void	rush03(char x, char y)
{
	char	max;

	max = y;
	while (y > 0)
	{
		if (y == max)
			rush03_top(x);
		else if (y == 1)
			rush03_bottom(x);
		else
			rush03_middle(x);
		y--;
	}	
}
