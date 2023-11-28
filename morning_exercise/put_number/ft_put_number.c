/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:40:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/28 11:26:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
		char	num[] = "0123456789";

		if (n > 9)
		{
				ft_putnbr(n / 10);
		}
		write(1, &num[n % 10], 1);
}

void	hex(int n, int base)
{
		char	digit[] = "0123456789abcdef";

		if (n >= base)
				hex((n / base), base);
		write(1, &digit[n % base], 1);
}

int		ok(char c)
{
		if (c >= 0 && c <= 9)
				return (1);
		if (c >= 'a' && c <= 'f')
				return (1);
		if (c >= 'A' && c <= 'F')
				return (1);
		return (0);
}

int		batoi(const char *str, int str_base)
{
		int		i;
		int		res;
		int		sign;

		i = 0;
		res = 0;
		sign = 1;
		if (str[i] == '-')
		{
				sign = -1;
				i++;
		}
		while (str[i] && ok(str[i]) == 1)
		{
				res *= str_base;
				if (str[i] >= '0' && str[i] <= '9')
						res += str[i] - '0';
				if (str[i] >= 'a' && str[i] <= 'f')
						res += str[i] - 'a' + 10;
				if (str[i] >= 'A' && str[i] <= 'F')
						res += str[i] - 'A' + 10;
				i++;	
		}
		return (res * sign);
}





















/*
void	ft_putnbr(int n)
{
	//	char	numbers[10] = "0123456789";
		char	*numbers;// = "0123456789";

		numbers = "0123456789";
		if (n < 0)
		{
				write(1, "-", 1);
				n *= -1;
		}
		if (n > 9)
				ft_putnbr(n / 10);
		write(1, &numbers[n % 10], 1);
}
*/
int	main(int argc, char **argv)
{
		int		bo;
		int		base;

		bo = atoi(argv[1]);
		if (argc == 2)
				ft_putnbr(bo);
		else if (argc == 3)
		{
				base = batoi(argv[2], 16);
				printf("%i", base);
			//	hex(bo, base);
		}
				write(1, "\n",1);
		return (0);
}
