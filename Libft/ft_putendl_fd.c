/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:11:51 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/13 18:06:39 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &s[i++], 1);
		}
		write(fd, "\n", 1);
	}
}
/*
int	main(void)
{
	int	test;

	test = open("example.txt", O_WRONLY);
	ft_putendl_fd(",.;'1!@#%^^&*()", test);
	return (0);
}*/
