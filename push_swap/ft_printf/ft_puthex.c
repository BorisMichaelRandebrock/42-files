/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:22:12 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/26 16:54:03 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, int base)
{
	int		count;
	int		aux;
	char	*symbols;

	count = 1;
	symbols = "0123456789abcdef";
	if (n < (unsigned int)base)
		return (ft_putchar(symbols[n]));
	else
	{
		aux = ft_puthex(n / base, base);
		if (aux == -1)
			return (-1);
		count = aux;
		return (count + ft_puthex(n % base, base));
	}
}

int	ft_puthex_u(unsigned int n, int base)
{
	int		count;
	int		aux;
	char	*symbols;

	count = 1;
	symbols = "0123456789ABCDEF";
	if (n < (unsigned int)base)
		return (ft_putchar(symbols[n]));
	else
	{
		aux = ft_puthex_u(n / base, base);
		if (aux == -1)
			return (-1);
		count = aux;
		return (count + ft_puthex_u(n % base, base));
	}
}

int	ft_put_p(unsigned long long n, int base)
{
	int	ret;

	ret = write(1, "0x", 2);
	if (ret < 0)
		return (-1);
	return (ft_puthex(n, base) + ret);
}
