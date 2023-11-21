/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:34:36 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/16 18:31:30 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		length(int n)
{
		int		len;

		len = 0;
//		if (n == -2147483648)
//				len = 11;
//		else if (n == 0)
//				len = 1;
//		else 
//		{
				if (n < 0)
				{
						len++;
						n *= -1;
				}
				while (n > 9)
				{
						n /= 10;
						len++;
				}
				len++;
//		}
		return (len);
}

char	*ft_itoa(int nbr)
{
		int		flag;
		int		len;
		char	*res;
		char	pato;

		flag = 0;
		res = NULL;
		if (nbr == -2147483648)
		{
				res = (char *)malloc(11);
				res = "-2147483648";
				return (res);
		}
		len = length(nbr);
//		printf("len = %d\n", len);
		res = (char *)malloc((len + 1) * sizeof(char));
		if (nbr < 0)
		{
				nbr *= -1;
				res[0] = '-';
			flag++;
//				printf("res0 =%c\n", res[0]);
		}
		res[len] = '\0';
		len--;
		while ((len >= 0 && flag == 0) || (len >= 1 && flag == 1))
		{
				pato = nbr % 10 + '0';
				res[len] = pato;
//		printf("reslen = %c\n", res[len]);
//		printf("nbr%% 10 = %c\n", pato);
				nbr = nbr/10;
				len--;
		}
//		printf("res = %s\n", res);
		return (res);
}
/*
int	main(void)
{
		int	num = 0;
		char *nabo = ft_itoa(num);
		printf("number nabo: %s\n", nabo);
}
*/
