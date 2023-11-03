/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:24:21 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/02 11:34:27 by brandebr         ###   ########.fr       */
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
	int			i;
	t_number	*current;

	i = 0;
	current = lst->first;
	while (current)
	{
		printf("%i - %i\n", current->value, current->index);
		current = current->next;
		i++;
	}
}

t_list	*to_split(char **argv)
{
	int		j;
	char	**args;
	int		*arg;
	t_list	*stack_a;

	j = 1;
	args = NULL;
	arg = NULL;
	stack_a = NULL;
	args = ft_split(argv[1], ' ');
	while (args[j])
		j++;
	arg = err_hunter(j + 1, args);
	stack_a = stack_init(arg, j + 1);
	free(arg);
	free_args(args);
	return (stack_a);
}

t_list	*no_split(int argc, char **argv)
{
	char	**args;
	int		i;
	int		j;
	int		*arg;
	t_list	*stack_a;

	i = 1;
	j = 0;
	args = NULL;
	arg = NULL;
	stack_a = NULL;
	arg = err_hunter(argc, argv);
	stack_a = stack_init(arg, argc);
	free(arg);
	return (stack_a);
}
