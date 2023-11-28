/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:35:51 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/28 17:16:26 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		count(int nbr)
{
		int		i;

		i = 0;
		if (nbr == -2147483648)
				return (10);
		if (nbr < 0)
				nbr *= -1;
		while (nbr > 0)
		{
				nbr = nbr / 10;
				i++;
		}
		return (i);
}

char	*ft_itoa(int nbr)
{
		char	*res;
		int		len;

		res = NULL;
		len = count(nbr);
		if (nbr < 0)
		{
				len++;
				res = malloc(sizeof(char) * (len + 1));
				nbr *= -1;
				res[0] = '-';
		}
		else 
				res = malloc(sizeof(char) * (len + 1));
		res[len] = '\0';
		len--;
		while (nbr > 9)
		{
				res[len] = (nbr % 10) + '0';
				nbr /= 10;
				len--;
		} 
		res[len] = nbr % 10 + '0';
//		printf("number count: %i",count(nbr));
		return (res);
}

int		main(int argc, char **argv)
{
		int		i;
		int	nbr;

		i = 0;
		nbr = atoi(argv[1]);
		if (argc == 2)
				printf("%s", ft_itoa(nbr));
		else
				printf("please be so kind to enter a number");
		printf("\n");
		return (0);
}



































/*
int		leng(int n)
{
		int		i;

		i = 0;
		if (n == -2147483648)
				return (10);
		else if (n < 0)
				n *= -1;
		while (n > 0)
		{
			n = n / 10;
				i++;
		}
		return (i);
}

char	*ft_itoa(int nbr)
{
		char	*res;
		int		len;

		res = NULL;
		len = leng(nbr);
		if (nbr < 0)
		{
				len++;
				res = malloc((len + 1) * sizeof(char)); 
				nbr *= -1;
				res[0] = '-';
		}
		else
				res = malloc((len + 1) * sizeof(char)); 
		if (!res)
				free(res);
		res[len] = '\0';
		len--;
		while (nbr > 9)
		{
				res[len] = (nbr % 10) + '0';
				nbr /= 10;
				len--;
		}
		res[len] = nbr % 10 + '0';
		return (res);
}

int	main(int argc, char **argv)
{
		int	puta;

		if (argc < 2)
		{
				printf("please be so kind to enter a number... sometthing like 42 ... or so.. 🤏");
				return (1);
		}

		puta = atoi(argv[1]);
		printf("💩 %s",ft_itoa(puta));
		printf("\n");
		return (0);
}
*/
