/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:16:19 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/09 16:25:29 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = b;
	while (len > 0)
	{
		p[i] = (unsigned char)c;
		i++;
		len--;
	}
	return ((void *)b);
}
/*
int	main(void)
{
	char	*new;
	char	str[] = "supercalifragilisticoespialidoso";

	new = ft_memset(str, '*', 5);
	printf("%s", new);
	return (0);
}*/
