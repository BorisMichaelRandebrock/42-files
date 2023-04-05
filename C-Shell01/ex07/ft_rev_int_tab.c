/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 18:49:40 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/05 21:12:43 by brandebr         ###   ########.fr       */
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
/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i;

	ft_rev_int_tab(tab, 9);
	i = 0;
	while (i < 9)
	{	
		printf("%d,  ", tab[i]);
		i++;
	}
}*/
