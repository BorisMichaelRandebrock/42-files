/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:58:29 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/13 18:14:05 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_recursive(unsigned int number, int fd)
{
	if (number >= 10)
		ft_putnbr_recursive(number / 10, fd);
	ft_putchar_fd(((number % 10) + '0'), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	number = n;
	if (n < 0)
	{
		number = n * -1;
		ft_putchar_fd('-', fd);
	}
	ft_putnbr_recursive(number, fd);
}
/*
int	main(void)
{
	int	test;

	test = open("example.txt", O_WRONLY);
	ft_putnbr_fd(-2147483648, test);
	return (0);
}
*/
/*
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}*/
