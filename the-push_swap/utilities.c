/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:24:21 by brandebr          #+#    #+#             */
/*   Updated: 2023/10/31 16:00:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**free_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	while (i--)
		free(args[i]);
	free(args);
	return (NULL);
}

void	print_stack(t_list *lst)
{
	int	i;

	i = 0;
	t_number *current = lst->first;
	while (current)
	{
		printf("%i - %i\n", current->value, current->index);
		current = current->next;
		i++;
	}
//	printf("%i\n", current->value);
	//ft_printf("amount of nodes: %i \n", i);
}

t_list	*to_split(char **argv)
{
	int	j;
	char	**args;
	int	*arg;
	t_list	*stack_a;

	j = 1;
	args = NULL;
	arg = NULL;
	stack_a = NULL;
	args = ft_split(argv[1], ' ');
/*	if (*args == "")
	{
		write(2, "Error\n", 6);
		return (0);
	}*/
	while (args[j])
		j++;
//	(void) st_b;
	arg = err_hunter(j + 1, args);
	stack_a = stack_init(arg, j + 1);
//	printf("arg esta en la direccion %p\n", arg);
	free(arg);
	free_args(args);
	/*free(args[1]);
	free(args[2]);
	free(args[3]);

	free(args);*/
	return (stack_a);
}

t_list	*no_split(int argc, char **argv)
{

	int	i;
	int	j;
	char	**args;
	int	*arg;
	t_list	*stack_a;

	i = 1;
	j = 0;
	args = NULL;
	arg = NULL;
	stack_a = NULL;
	arg = err_hunter(argc,  argv);
	stack_a = stack_init(arg, argc);
//	free(arg);
	free(arg);
//	free_args(args);
	return (stack_a);
}

