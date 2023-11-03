/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:58:44 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/26 17:21:17 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber(unsigned long n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(n);
	if (!str)
		return (-1);
	i = ft_putstr(str);
	free(str);
	if (i < 0)
		return (-1);
	return (i);
}

int	ft_putnumber_u(unsigned int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa_u(n);
	if (!str)
		return (-1);
	i = ft_putstr(str);
	free(str);
	if (i < 0)
		return (-1);
	return (i);
}
