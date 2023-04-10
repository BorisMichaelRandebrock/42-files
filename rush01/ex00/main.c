/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegarci2 <jegarci2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:00:11 by jegarci2          #+#    #+#             */
/*   Updated: 2023/04/09 23:47:48 by jegarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_error_control(int argc, char **argv);
void	ft_matrix(void);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_error_control(argc, argv);
	}
	return (0);
}
