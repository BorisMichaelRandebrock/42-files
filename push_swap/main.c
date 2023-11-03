/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:56:20 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/02 17:43:53 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	free_stack_all(t_list *st_a, t_list *st_b)
{
	free_stack(st_a);
	free_stack(st_b);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = stack_b_init();
	if (argc == 1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (!ft_strlen(argv[1]))
	{
		write(2, "Error\n", 6);
		exit (-1);
	}
	if (argc == 2)
		stack_a = to_split(argv);
	else
		stack_a = no_split(argc, ++argv);
	if (stack_a->len == 1)
		free_stack_all(stack_a, stack_b);
	sort_numbers(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
