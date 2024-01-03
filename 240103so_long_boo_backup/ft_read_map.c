/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:01:03 by brandebr          #+#    #+#             */
/*   Updated: 2024/01/02 17:55:20 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	write_error(void)
{
	write(1, "ERROR\n", 1);
	exit(-1);
}

int	ft_read_map(char **argv, t_map *game)
{
	int		fd;
	char	*line;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		write_error();
	line = get_next_line(fd);
	if (!line)
		write_error();
	game->raw_map = ft_strdup(line);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		if (!line)
			break ;
		game->raw_map = ft_strjoin(game->raw_map, line);
	}
	free(line);
	return (fd);
}

void	ft_free_map(t_map *game)
{
	int	i;

	i = 0;
	while (game->map[i])
	{
		free(game->map[i]);
		i++;
	}
	free(game->map);
}

void	ft_measures(t_map *game)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	game->map = ft_split(game->raw_map, '\n');
	if (!game->map[0])
	{
		write(2, "Error\nEmpty file", 16);
		free(game->map);
		exit (0);
	}
	while (game->map[0][x])
		x++;
	game->width = x;
	while (game->map[y])
		y++;
	game->height = y;
}

int	ft_outer_limits(t_map *game)
{
	unsigned long		i;

	i = 0;
	while (i < game->width)
	{
		if (game->map[0][i] != '1' || game->map[game->height -1][i] != '1')
			return (-1);
		i++;
	}
	i = 0;
	while (i < game->height)
	{
		if (game->map[i][0] != '1')
			return (-1);
		if (game->map[i][game->width - 1] != '1')
			return (-1);
		i++;
	}
	return (0);
}
