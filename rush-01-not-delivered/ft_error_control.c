/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brussell <brussell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:34:57 by brussell          #+#    #+#             */
/*   Updated: 2023/04/09 18:23:00 by brussell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	argv_num(char *argv)
{
	int	num_count;
	int	i;

	i = 0;
	num_count = 0;
	while (i < 31)
	{
		if (argv[i] >= '1' && argv[i] <= '4')
			num_count++;
			i += 2;
	}
	return (num_count);
}

int	argv_space(char *argv)
{
	int	space_count;
	int	i;

	i = 1;
	space_count = 0;
	while (i < 31)
	{
		if (argv[i] == ' ')
				space_count++;
				i += 2;
	}
	return (space_count);
}

int	ft_error_control(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2 || argv_num(argv[1]) != 16 || argv_space(argv[1]) != 15)
	{
		write(1, "please be so kind to enter the correct inputs.\n", 47);
		return (0);
	}
	while (argv[1][i])
	{
		if (i % 2 == 0)
			write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
