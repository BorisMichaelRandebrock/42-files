/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:26:44 by brandebr          #+#    #+#             */
/*   Updated: 2024/01/03 14:29:17 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	player_position(t_map *game)
{
	game->player.x = 0;
	game->player.y = 0;
	while (game->player.y <= game->height && game->player.x <= game->width)
	{
		if (game->map[game->player.y][game->player.x] == 'P')
			return (0);
		game->player.x++;
		if (game->player.x == game->width)
		{
			game->player.x = 0;
			game->player.y++;
		}
	}
	return (0);
}

int	map_check(t_map *game)
{
	if (ft_outer_limits(game) == -1)
	{
		ft_free_map(game);
		write(2, "ERROR\nThe Board is not correctly defined\n", 41);
		exit (1);
	}
	if ((ft_collectibles(game) == -1) || (exit_player_check(game) == -1))
	{
		ft_free_map(game);
		write(2, "ERROR\nWrong Players, exits or collectibles", 43);
		exit (1);
	}
	ft_rectangle_check(game);
	player_position(game);
	flood_map(game, game->player.x, game->player.y);
	ft_check_exit(game, game->player.x, game->player.y);
	if (game->coins_cpy != 0 || game->ex != 1)
	{
		write (2, "ERROR\nNo valid path between player and exit", 44);
		exit (1);
	}
	return (0);
}

void	no_path(void)
{
	write (2, "ERROR\nNo path between p and exit\n", 33);
	exit (1);
}

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
	exit(1);
}

int	main(int argc, char **argv)
{
	t_map	game;

	game.count = 0;
	parse_it(argc, argv);
	ft_read_map(argv, &game);
	ft_measures(&game);
	game.map_cpy = cpy_map(&game);
	game.map_cpy2 = cpy_map(&game);
	map_check(&game);
//	if (game.exit != 1)
//		no_path();
	game.mlx_ptr = mlx_init();
	ft_upload_img(&game);
	game.win_ptr = mlx_new_window(game.mlx_ptr, game.width * SIZE,
			game.height * SIZE, "a link to the past..");
	if (game.win_ptr == NULL)
	{
		ft_printf("ERROR: Unable to create window\n");
		exit(1);
	}
	ft_print_map(&game);
	mlx_hook(game.win_ptr, 2, 0, ft_move, &game);
	mlx_hook(game.win_ptr, 17, 0, ft_free_all, &game);
	mlx_loop(game.mlx_ptr);
	exit (0);
}
//system("leaks so_long");
