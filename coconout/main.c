/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:05:19 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/19 11:10:24 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc <  2)
	{
		write(1, "nope", 4);
		return (0);
	}
	while (argv[1][i])
	{
		write(1, &argv[1][i], 1);
		write(1, "   ", 3);
		//write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
