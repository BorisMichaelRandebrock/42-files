/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acreus-s <acreus-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:07:48 by acreus-s          #+#    #+#             */
/*   Updated: 2023/04/19 09:58:28 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

void	error(void)
{
	printf("Error");
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
	printf("m is: %s\n", (*m)->line);
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
//	int		len;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		error();
	curr = malloc(sizeof(t_given));
	m = malloc(sizeof(t_map));
	if (!curr)
		exit (1);
	read_map(curr, m, fd);
	printf("%s\n", m->line);
	printf("%c\n", curr->a);
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
