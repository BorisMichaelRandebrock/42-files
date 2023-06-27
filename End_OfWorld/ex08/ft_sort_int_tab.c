/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:03:30 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/06 21:47:55 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = size -1;
	while (i > 0)
	{
		j = i -1;
		while (j >= 0)
		{
			if (tab[i] < tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j--;
		}
		i--;
	}
}
int	main(void)
{
	int	tab[] = {5, 3, 2, 8, 7, 2, 5};
	int	size;
	int	i;

	i = 0;
	size = 7;
	ft_sort_int_tab(tab, size);
	while (i < 7)
	{
		printf("%i, ", tab[i]);
		i++;
	}
	return (0);
}
