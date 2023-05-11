/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:00:27 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/10 15:39:40 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		if (str[i] < '0' || str[i] > '9')
			i++;
		else
		{
			num = num * 10 + str[i] - '0';
			i++;
			if (str[i] < '0' || str[i] > '9')
				return (num * sign);
		}
	}
	return (num * sign);
}	
