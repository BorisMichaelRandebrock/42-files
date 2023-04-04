/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:18:01 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/01 19:35:02 by ezsalas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_top(char x)
{
	char	max;

	max = x;
	while (x > 0)
	{
		if (x == max)
			ft_putchar('/');
		else if (x == 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
		x--;
	}
	ft_putchar('\n');
}

void	rush_bottom(char x)
{
	char	max;

	max = x;
	while (x > 0)
	{
		if (x == max)
			ft_putchar('\\');
		else if (x == 1)
			ft_putchar('/');
		else
			ft_putchar('*');
		x--;
	}
	ft_putchar('\n');
}

void	rush_middle_section(char x)
{
	char	max;

	max = x;
	while (x > 0)
	{
		if (x == max || x == 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
		x--;
	}
	ft_putchar('\n');
}

void	rush01(char x, char y)
{
	char	max;

	max = y;
	while (y > 0)
	{
		if (y == max)
			rush_top(x);
		else if (y == 1)
			rush_bottom(x);
		else
			rush_middle_section(x);
		y--;
	}	
}
