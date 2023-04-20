/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acreus-s <acreus-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:17:14 by acreus-s          #+#    #+#             */
/*   Updated: 2023/04/19 17:55:20 by acreus-s         ###   ########.fr       */
/*   Updated: 2023/04/19 17:33:12 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_map
{
	char			*line;
	struct s_map	*next;
}	t_map;

typedef struct s_given
{
	char			a;
	struct s_given	*next;
}	t_given;

void	error(void);
int		list_len(t_given *a);
void	print_map(t_map *m);

#endif
