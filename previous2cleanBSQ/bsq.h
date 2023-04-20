/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acreus-s <acreus-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:17:14 by acreus-s          #+#    #+#             */
/*   Updated: 2023/04/18 18:53:26 by acreus-s         ###   ########.fr       */
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
#endif
