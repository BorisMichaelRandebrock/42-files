/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:23:14 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/19 18:24:29 by acreus-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	error(void)
{
	write(1, "Error", 6);
	exit (1);
}

int	list_len(t_given *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

void	print_map(t_map *m)
{
	int	i;

	i = 5;
	while (m->line[i])
	{
		write(1, &m->line[i], 1);
		if (((i - 5) % 30) == 0 && ((i - 5) / 30) > 0)
			write(1, "\n", 1);
		i++;
	}
}
