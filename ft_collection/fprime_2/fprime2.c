/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:45:02 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/13 18:16:08 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		fprime(int n)
{
		int i = 2;
		if (n == 1)
		{
				printf("1");
				return (1);
		}
		while (i <= n)
		{
				if (n == i)
				{
						printf("%i", i);
						return (0);
				}
				if (n % i == 0)
				{
						printf("%i", i);
						printf("*");
						n /= i;
						i = 1;
				}
				i++;
		}
		return (0);
}

int		main(int argc, char **argv)
{
		if (argc == 2)
		{
				int	num = atoi(argv[1]);
				fprime(num);
		}
		printf("\n");
		return (0);
}
