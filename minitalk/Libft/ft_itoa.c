/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:18:12 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/28 17:11:56 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_counter(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		len = 11;
	else if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	negatifyer(int n, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	return (n);
}

static	void	mn_nr(char *str)
{
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = num_counter(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n == -2147483648)
		mn_nr(str);
	else
	{
		n = negatifyer(n, str);
		while (n > 0)
		{
			str[--len] = (n % 10) + '0';
			n = (n / 10);
		}
	}
	return (str);
}
/*
int	main(void)
{
	printf("%s\n",ft_itoa(123456789));
	printf("%s\n",ft_itoa(-2147483648));
	printf("%s\n",ft_itoa(-123456789));
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(000125));
	return (0);
}*/
