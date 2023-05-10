/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:00:27 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/10 11:23:03 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 43;
	num = 0;
	while (str[i])
	{
		if (str[i] == 45)
		{
			sign *= -1;
			i++;
		}
		if (str[i] < 48 || str[i] > 57)
			i++;
		if (str[i] >= 48 && str[i] <= 57)
		{ 
			num += str[i] * 10;
			i++;
		}
	}
	return (num);
}	
