/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:38:09 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/12 18:48:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	number_counter(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
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

char	*ft_itoa(int nbr)
{
	int	i;
	int	len;
	char	*str;

	i = 0;
	len = number_counter(nbr);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr == -2147483648)
		str = "-2147483648";
	else
	{
		nbr = negatifyer(nbr, str);
		while (nbr > 0)
		{
			str[--len] = (nbr % 10) + '0';
			nbr /= 10;
		}
	}
	return (str);
}

int	main(void)
{
	printf("%s\n",ft_itoa(123456789));
	printf("%s\n",ft_itoa(-2147483648));
	printf("%s\n",ft_itoa(-123456789));
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(000125));
	return (0);
}
