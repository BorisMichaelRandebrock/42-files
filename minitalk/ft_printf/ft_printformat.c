/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:51:46 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/26 17:32:34 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char s)
{
	int	count;

	count = (write(1, &s, 1));
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			if (write(1, &s[i], 1) < 0)
				return (-1);
			i++;
		}
	}
	else
		i = write(1, "(null)", 6);
	return (i);
}

int	ft_printformat(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count = ft_putchar((char)va_arg(ap, int));
	else if (specifier == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (specifier == '%')
		count = ft_putchar('%');
	else if (specifier == 'd' || specifier == 'i')
		count = ft_putnumber(va_arg(ap, unsigned long));
	else if (specifier == 'u')
		count = ft_putnumber_u(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count = ft_puthex(va_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		count = ft_puthex_u(va_arg(ap, unsigned int), 16);
	else if (specifier == 'p')
		count = ft_put_p(va_arg(ap, unsigned long long), 16);
	return (count);
}
