/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:50:22 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/02 12:34:59 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_numbers(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		if ((argv[i][j] == '-' || argv[i][j] == '+') && !argv[i][j + 1])
			print_error_exit();
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
			while (ft_isdigit(argv[i][j]) == 1)
				j++;
			if (argv[i][j] && ft_isdigit(argv[i][j]) == 0)
				print_error_exit();
		}
		i++;
		j = 0;
	}
}

void	check_double(char **argv)
{
	int	i;
	int	j;
	int	k;
	int	temp;

	i = 1;
	j = i + 1;
	k = 0;
	while (argv[i])
	{
		j = 0;
		k = 0;
		temp = ft_atoi(argv[i]);
		while (argv[j])
		{
			if (temp == ft_atoi(argv[j]))
				k++;
			j++;
		}
		if (k > 1)
			print_error_exit();
		i++;
	}
}

long	ft_atol(char *argv)
{
	int			i;
	int			sign;
	long long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (argv[i])
	{
		while (argv[i] >= 9 && argv[i] <= 13)
			i++;
		if (argv[i] == '-' || argv[i] == '+')
		{
			if (argv[i] == '-')
				sign *= -1;
			i++;
		}
		while (argv[i] >= '0' && argv[i] <= '9')
		{
			num = num * 10 + argv[i] - '0';
			i++;
		}
	}
	return (num * sign);
}

int	*outer_limits(int argc, char **argv)
{
	int	i;
	int	*args;

	i = 0;
	args = malloc(sizeof(int) * (argc));
	if (!args)
		exit (4);
	while (argv[i])
	{
		if (ft_atol(argv[i]) < INT_MIN || ft_atol(argv[i]) > INT_MAX)
		{
			print_error_exit();
			exit (3);
		}
		args[i] = (int)ft_atol(argv[i]);
		i++;
	}
	args[i] = '\0';
	return (args);
}

int	*err_hunter(int argc, char **argv)
{
	int	*args;
	int	i;

	i = 0;
	args = NULL;
	check_numbers(argv);
	check_double(argv);
	args = outer_limits(argc, argv);
	return (args);
}
