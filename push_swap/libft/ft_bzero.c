/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:46:15 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 10:36:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*c;

	i = 0;
	c = s;
	while (n > 0)
	{
		c[i] = '\0';
		i++;
		n--;
	}
}
/*
int	main(void)
{
	char	str[] = "supercaalifragilistivoespialidoso";

	printf("%s", str);
	ft_bzero(str, 5);
	printf("%s\n", str);
}*/
