/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 18:26:52 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/30 14:38:45 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_player_position(int count1, int count2, t_map *game)
{
	game->player.x = count1;
	game->player.y = count2;
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->imgs[0].img_ptr, (count2 * SIZE), (count1 * SIZE));
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->imgs[3].img_ptr, (count2 * SIZE), (count1 * SIZE));
	return (0);
}

int	ft_o_position(int count1, int count2, t_map *game)
{
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->imgs[0].img_ptr, (count2 * SIZE), (count1 * SIZE));
	return (0);
}

int	ft_wall_position(int count1, int count2, t_map *game)
{
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->imgs[1].img_ptr, (count2 * SIZE), (count1 * SIZE));
	return (0);
}

int	ft_exit_position(int count1, int count2, t_map *game)
{
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->imgs[2].img_ptr, (count2 * SIZE), (count1 * SIZE));
	return (0);
}

int	ft_collect_position(int count1, int count2, t_map *game)
{
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->imgs[4].img_ptr, (count2 * SIZE), (count1 * SIZE));
	return (0);
}
