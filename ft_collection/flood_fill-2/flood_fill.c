/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:05:03 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/21 14:34:07 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;


#include <stdlib.h>
#include <stdio.h>
/*
char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}
*/
/* void  flood_fill(char **tab, t_point size, t_point begin)
{

}*/
void	fill(char **tab, t_point size, int x, int y, char to_fill)
{
		if (x < 0 || y < 0)
				return ;
		if (x == size.x || y == size.y)
				return ;
		if (tab[y][x] != to_fill)
				return ;
		if (tab[y][x])
				tab[y][x] = 'F';
	fill(tab, size, x + 1, y, to_fill);
	fill(tab, size, x - 1, y, to_fill);
	fill(tab, size, x, y + 1, to_fill);
	fill(tab, size, x, y - 1, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
		int		x;
		int		y;
		char	to_fill;
		
		x = begin.x;
		y = begin.y;
		to_fill = tab[y][x];
		fill(tab, size, x, y, to_fill);
}/*
int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10100001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}*/
