/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:17:48 by brandebr          #+#    #+#             */
/*   Updated: 2024/01/03 13:58:28 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include "Libft/libft.h"
# include "ft_printf/ft_printf.h"
# include "mlx/mlx.h"
# define SIZE 32
//#define IMG_WIDTH  32
//#define IMG_HEIGHT 32

typedef struct s_img
{
	void	*img_ptr;
	int		*data;
	int		size_l;
	int		bpp;
	int		endian;
}	t_img;

typedef struct s_pos
{
	size_t	x;
	size_t	y;
}				t_pos;

typedef struct s_map
{
	char	*raw_map;
	char	**map;
	char	**map_cpy;
	char	**map_cpy2;
	char	**path;
	size_t	height;
	size_t	width;
	size_t	coins;
	size_t	coins_cpy;
	t_pos	player;
	int		count;
	int		flag;
	t_pos	start;
	int		exit;
	int		ex;
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	*imgs;
	size_t	x;
	size_t	y;

}				t_map;

int		parse_it(int argc, char **argv);// parse_it.c
int		file_name(char *fn);// parse_it.c
char	*get_next_line(int fd);
void	write_error(void); //ft_read_map.c
int		ft_read_map(char **argv, t_map *game); //ft_read_map.c
void	ft_measures(t_map *game);//ft_read_map.c
int		ft_outer_limits(t_map *game);//parse_it.c -> moved to read_map.c
int		exit_player_check(t_map *game);//parse_it.c
int		ft_collectibles(t_map *game);//parse_it.c
int		ft_rectangle_check(t_map *game);// paarse_it.c	
void	ft_free_map(t_map *game);//ft_read_map.c
char	**cpy_map(t_map *game);//flood_map.c
int		flood_map(t_map *map, size_t x, size_t y);//flood_map.c
int		map_check(t_map *game);//main.c
int		player_position(t_map *game);//main.c
int		ft_move(int keycode, t_map *game);
void	ft_upload_img(t_map *game);
int		ft_print_map(t_map *game);
void	ft_win(t_map *game);
void	ft_close(t_map *game);
void	ft_free_map(t_map *game);
int		ft_free_all(t_map *game);
int		ft_player_position(int count1, int count2, t_map *game);//positiion.c
int		ft_o_position(int count1, int count2, t_map *game);//idem
int		ft_wall_position(int count1, int count2, t_map *game);//i 
int		ft_exit_position(int count1, int count2, t_map *game);// missing fake
int		ft_collect_position(int count1, int count2, t_map *game);//in upload
void	ft_win(t_map *game); //main.c
void	inc_num_args(void); // upload_img.c
int		ft_cant(char c); //upload_img.c
int		ft_check_exit(t_map *game, size_t x, size_t y);

#endif
