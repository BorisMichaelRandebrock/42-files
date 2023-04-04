/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 20:06:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/01 20:41:50 by ereinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04_top(char x)
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

void	rush04_bottom(char x)
{
	char	max;

	max = x;
	while (x > 0)
	{
		if (x == max)
			ft_putchar('C');
		else if (x == 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		x--;
	}
	ft_putchar('\n');
}

void	rush04_middle_section(char x)
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

void	rush04(char x, char y)
{
	char	max;

	max = y;
	while (y > 0)
	{
		if (y == max)
			rush04_top(x);
		else if (y == 1)
			rush04_bottom(x);
		else
			rush04_middle_section(x);
		y--;
	}	
}
