/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:49:54 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/15 18:08:42 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int	main(void)
{
	int	one;
	int	two;

	one = 1;
	two = 2;
	printf("%i, %i", one, two);
	ft_swap(&one, &two);
	printf("%i, %i", one, two);
}
*/
