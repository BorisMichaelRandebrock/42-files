/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:33:33 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/02 20:51:04 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr2(int nb)
{
	if (nb < 0)
	{
		ft_putchar2('-');
		ft_putnbr2(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr2(nb / 10);
		ft_putnbr2(nb % 10);
	}
	else
	{
		ft_putchar2(nb + '0');
	}
}

void	ft_print_combn(int nb)
{
	while (nb > 0)
	{
		ft_putnbr2(nb);
		ft_putchar2(',');
		nb--;
	}	
}

int main(void)
{
	ft_print_combn(10);
}
