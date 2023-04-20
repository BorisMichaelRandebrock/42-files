/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acreus-s <acreus-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:07:48 by acreus-s          #+#    #+#             */
/*   Updated: 2023/04/19 18:15:38 by acreus-s         ###   ########.fr       */
/*   Updated: 2023/04/19 17:33:34 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	pass_line(t_given **curr, t_map **m)
{
	int	i;
	int	len;

	i = 0;
	len = list_len(*curr);
	(*m)->line = malloc(sizeof(char) * (len + 1));
	while ((*curr)->a != '\n')
	{
		(*m)->line[i] = (*curr)->a;
		*curr = (*curr)->next;
		i++;
	}
	(*m)->line[i] = 0;
}

void	next_line(t_map *m, t_given *head, int flag_first)
{
	if (flag_first)
	{
		m->next = malloc(sizeof(t_map));
		m = (m)->next;
	}
	if (!(m))
		error();
	flag_first = 1;
	pass_line(&head, &m);
}

void	read_map(t_given *curr, t_map *m, int fd)
{
	int		ret;
	t_given	*head;
	int		flag_first;

	flag_first = 0;
	head = curr;
	ret = read(fd, &(curr->a), 1);
	while (ret > 0)
	{
		if (curr->a == '\n')
			next_line(m, head, flag_first);
		else
		{
			curr->next = malloc(sizeof(t_given));
			curr = curr->next;
		}
		ret = read(fd, &(curr->a), 1);
	}
}

void	process_file(const char *filename)
{
	int		fd;
	t_given	*curr;
	t_map	*m;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		error();
	curr = malloc(sizeof(t_given));
	m = malloc(sizeof(t_map));
	if (!curr || !m)
		error();
	read_map(curr, m, fd);
	print_map(m);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		process_file(argv[i]);
		i++;
	}
	return (0);
}
