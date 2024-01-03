/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:18:47 by brandebr          #+#    #+#             */
/*   Updated: 2024/01/03 14:17:57 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	file_name(char	*fn)
{
	char	*end;
	int		i;
	int		j;

	i = 0;
	j = 0;
	end = ".ber";
	while (fn[i])
		i++;
	i = i - 4;
	while (fn[i])
	{
		if (fn[i++] == end[j++])
			continue ;
		else
			return (-1);
	}
	return (0);
}

int	parse_it(int argc, char **argv)
{
	int		fd;
	char	buffer;
	ssize_t	bytes_read;

	fd = (open(argv[1], O_RDONLY));

	bytes_read = read(fd, &buffer, 1);
	if (argc != 2)
		inc_num_args();
	if (fd > 0 && bytes_read == 0)
	{
		write(2, "Error\nEmpty file", 16);
		exit (1);
	}
	if (fd == -1)
	{
		write(2, "Error\nWrong file reading", 23);
		exit (1);
	}
	if (file_name(argv[1]) == -1)
	{
		write(2, "Error\nWrong file type", 21);
		exit (1);
	}
	close(fd);
	return (0);
}
/*
int		ft_outer_limits(t_map *game)
{
		int		i;

		i = 0;
		while (i < game->width)
		{
				if (game->map[0][i] != 1)
						return (-1);
				if (game->map[game->height - 1][i] != 1)
						return (-1);
				i++;
		}
		i = 0;
		while (i < game->height)
		{
				if (game->map[i][0] != 1)
						return (-1);
				if (game->map[i][game->width - 1] != 1)
						return (-1);
				i++;
		}
		return (0);
} moved to ft_read_map*/

int	exit_player_check(t_map *game)
{
	unsigned long	y;
	unsigned long	x;
	int				player;
	int				exit;

	x = 0;
	y = 0;
	player = 0;
	exit = 0;
	while ((y < game->height) && (x < game->width))
	{
		if (game->map[y][x] == 'E')
			exit++;
		if (game->map[y][x] == 'P')
			player++;
		y++;
		if (y == game->height)
		{
			x++;
			y = 0;
		}
	}
	if (player != 1 || exit != 1)
		return (-1);
	return (0);
}

int	ft_collectibles(t_map *game)
{
	size_t		y;
	size_t		x;
	int			count;

	x = 0;
	y = 0;
	count = 0;
	while (y < game->height && x < game->width)
	{
		if (game->map[y][x] == 'C')
			count++;
		else if (ft_cant(game->map[y][x]) == -1)
			return (-1);
		y++;
		if (y == game->height)
		{
			x++;
			y = 0;
		}
	}
	if (count < 1)
		return (-1);
	game->coins = count;
	game->coins_cpy = count;
	return (0);
}

int	ft_rectangle_check(t_map *game)
{
	unsigned long	y;
	int				a;
	int				b;

	y = 0;
	a = ft_strlen(game->map[y]);
	while (y < game->height)
	{
		b = ft_strlen(game->map[y]);
		if (b == a)
			y++;
		else
		{
			ft_free_map(game);
			write (2, "Error\nThe map is not a square", 29);
			exit(1);
		}
	}
	return (0);
}
/*int	ft_collectibles(t_map *game)
{
	size_t		y;
	size_t		x;
	int			count;

	x = 0;
	y = 0;
	count = 0;
	while (y < game->height && x < game->width)
	{
		if (game->map[y][x] == 'C')
			count++;
		else if (game->map[y][x] != 'E' && game->map[y][x] != 'P'
			&& game->map[y][x] != '0' && game->map[y][x] != '1'
			&& game->map[y][x] != 'F')
		else if (ft_cant(game->map[y][x]) == -1)
				return (-1);
		y++;
		if (y == game->height)
		{
				x++;
				y = 0;
		}
	}
	if (count < 1)
			return (-1);
	game->coins = count;
	game->coins_cpy = count;
	return (0);*/
