/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:07:53 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/20 17:23:05 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			nb = nb * 10 + str[i] - '0';
			i++;
	}
	return (nb * sign);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	str1[] = "     -123456879";
	char	str2[] = "23456879";
	char	str3[] = "     +12345687++-+-+";
	char	str4[] = "hi there ";
	
	int	x1 = ft_atoi(str1);
	int	y1 = ft_atoi(str2);
	int	z1 = ft_atoi(str3);
	int	xx = ft_atoi(str4);

	printf("%s %d", str1, x1);
	printf("%s %d", str2, y1);
	printf("%s %d", str3, z1);
	printf("%s %d", str4, xx);
}*/
