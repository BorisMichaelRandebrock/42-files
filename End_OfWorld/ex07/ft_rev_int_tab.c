/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:49:40 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/06 21:43:40 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size)
	{
		size--;
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
		i++;
	}	
}


#include <stdio.h>
int	main(void)
{
	int	tab[] = {19};
	int	i;

	ft_rev_int_tab(tab, 1);
	i = 0;
	while (i < 1)
	{	
		printf("%d,  ", tab[i]);
		i++;
	}
}
