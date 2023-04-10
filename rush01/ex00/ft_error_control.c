/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_control.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegarci2 <jegarci2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 21:48:16 by jegarci2          #+#    #+#             */
/*   Updated: 2023/04/09 23:48:52 by jegarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_matrix(void);

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
		write(1, "Error\n", 6);
		return (1);
	}
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0)
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_matrix();
	return (0);
}
