/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:11:19 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/30 13:52:17 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_move_w(t_map *game)
{
	long int	count;

	count = 0;
	if (game->map[game->player.x -1][game->player.y] == 'E' && game->coins == 0)
	{
		game->map[game->player.x][game->player.y] = '0';
		ft_printf("YOU WON!!! 🥳\n");
		ft_win(game);
		exit(1);
	}
	if ((game->map[game->player.x - 1][game->player.y] != '1')
			&& game->map[game->player.x - 1][game->player.y] != 'E')
	{
		if (game->map[game->player.x - 1][game->player.y] == 'C')
			game->coins--;
		game->map[game->player.x][game->player.y] = '0';
		game->player.x = game->player.x - 1;
		game->map[game->player.x][game->player.y] = 'P';
		game->count = game->count + 1;
		ft_printf("Movements: %d\n", game->count);
		ft_print_map (game);
	}
	return (0);
}

int	ft_move_s(t_map *game)
{
	long int	count;

	count = 0;
	if ((game->coins == 0)
		&& game->map[game->player.x +1][game->player.y] == 'E')
	{
		game->map[game->player.x][game->player.y] = '0';
		ft_printf("YOU 🗽 WON!!!\n");
		ft_win(game);
	}
	if ((game->map[game->player.x + 1][game->player.y] != '1')
			&& game->map[game->player.x + 1][game->player.y] != 'E')
	{
		if (game->map[game->player.x + 1][game->player.y] == 'C')
			game->coins--;
		game->map[game->player.x][game->player.y] = '0';
		game->player.x = game->player.x +1;
		game->map[game->player.x][game->player.y] = 'P';
		game->count = game->count +1;
		ft_printf("Movements: %d\n", game->count);
		ft_print_map (game);
	}
	return (0);
}

int	ft_move_a(t_map *game)
{
	long int	count;

	count = 0;
	if ((game->map[game->player.x][game->player.y -1] == 'E'
		&& game->coins == 0))
	{
		game->map[game->player.x][game->player.y] = '0';
		ft_printf("🥇 YOU WON!!!\n");
		ft_win(game);
		exit(1);
	}
	if ((game->map[game->player.x][game->player.y -1] != '1')
						&& game->map[game->player.x][game->player.y -1] != 'E')
	{
		if (game->map[game->player.x][game->player.y - 1] == 'C')
			game->coins--;
		game->map[game->player.x][game->player.y] = '0';
		game->player.y = game->player.y -1 ;
		game->map[game->player.x][game->player.y] = 'P';
		game->count = game->count + 1;
		ft_printf("Movements: %d\n", game->count);
		ft_print_map (game);
	}
	return (0);
}

int	ft_move_d(t_map *game)
{
	long int	count;

	count = 0;
	if ((game->map[game->player.x][game->player.y +1] == 'E'
		&& game->coins == 0))
	{
		game->map[game->player.x][game->player.y] = '0';
		ft_printf("YOU WON!!! 🧸\n");
		ft_win(game);
		exit(1);
	}
	if ((game->map[game->player.x][game->player.y +1] != '1')
				&& game->map[game->player.x][game->player.y +1] != 'E')
	{
		if (game->map[game->player.x][game->player.y + 1] == 'C')
			game->coins--;
		game->map[game->player.x][game->player.y] = '0';
		game->player.y = game->player.y +1;
		game->map[game->player.x][game->player.y] = 'P';
		game->count = game->count +1;
		ft_printf("Movements: %d\n", game->count);
		ft_print_map (game);
	}
	return (0);
}

int	ft_move(int keycode, t_map *game)
{
	if (keycode == 13 || keycode == 126)
		ft_move_w(game);
	if (keycode == 0 || keycode == 123)
		ft_move_a(game);
	if (keycode == 1 || keycode == 125)
		ft_move_s(game);
	if (keycode == 2 || keycode == 124)
		ft_move_d(game);
	if (keycode == 53)
		exit(1);
	return (0);
}
/*
void	ft_win(t_map *game)
{
		int	c;

		c = 0;
		game->count = game->count +1;
		ft_printf("Total number of movements: %d\n", game->count);
		mlx_string_put(game->mlx_ptr, game->win_ptr, 15,
						30, 0xFFFFFF, "CONGRATULATIONS YOU WIN!!!\n");
		mlx_do_sync(game->mlx_ptr);
		while (c < 1000000000)
				c++;
		ft_free_all(game);
		exit(-1);
}*/
