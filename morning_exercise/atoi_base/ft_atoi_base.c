/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:56:13 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/23 13:22:26 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		check(char c)
{
		if (c >= '0' && c <= '9')
				return (1);
		if (c >= 'A' && c <= 'F')
				return (1);
		if (c >= 'a' && c <= 'f')
				return (1);
		return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
		int		i;
		int		res;
		int		sign;

		i = 0;
		res = 0;
		sign = 1;
		if (str[i] == '-')
		{
				sign *= -1;	
				i++;
		}
		while (str[i] && check(str[i]) == 1)
		{
				res = res * str_base;
				if (str[i] >= '0' && str[i] <= '9')
						res = res + str[i] - '0';
				if (str[i] >= 'A' && str[i] <= 'F')
						res =  res + str[i] - 'A' + 10;
				if (str[i] >= 'a' && str[i] <= 'f')
						res = res + str[i] - 'a' + 10;
				i++;
		}
		return (res * sign);
}

int		main(int argc, char **argv)
{
		if (argc >= 2)
		{
				printf("%i", ft_atoi_base(argv[1], 16));
		}
		printf("\n");
		return (0);
}
